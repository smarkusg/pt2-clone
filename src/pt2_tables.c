#include <stdint.h>
#include "pt2_mouse.h"
#include "pt2_replayer.h"

const char *ftuneStrTab[16] =
{
	" 0", "+1", "+2", "+3",
	"+4", "+5", "+6", "+7",
	"-8", "-7", "-6", "-5",
	"-4", "-3", "-2", "-1"
};

const int8_t vuMeterHeights[65] =
{
	 0,  0,  1,  2,  2,  3,  4,  5,
	 5,  6,  7,  8,  8,  9, 10, 11,
	11, 12, 13, 14, 14, 15, 16, 17,
	17, 18, 19, 20, 20, 21, 22, 23,
	23, 24, 25, 26, 26, 27, 28, 29,
	29, 30, 31, 32, 32, 33, 34, 35,
	35, 36, 37, 38, 38, 39, 40, 41,
	41, 42, 43, 44, 44, 45, 46, 47,
	47
};

const char hexTable[16] =
{
	'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
};

const uint32_t cursorColors[6][3] =
{
	{ 0x444444, 0x777777, 0xAAAAAA }, // gray
	{ 0x444400, 0x777700, 0xAAAA00 }, // yellow
	{ 0x000066, 0x004499, 0x0055BB }, // blue
	{ 0x440044, 0x770077, 0xAA00AA }, // purple
	{ 0x004400, 0x007700, 0x00AA00 }, // green
	{ 0x770000, 0x990000, 0xCC0000 }  // red
};

int8_t pNoteTable[32] = // for drumpad
{
	24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
	24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
	24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
	24, 24
};

const char *noteNames1[2+36] =
{
	"---","???",
	"C-1", "C#1", "D-1", "D#1", "E-1", "F-1", "F#1" ,"G-1", "G#1", "A-1", "A#1", "B-1",
	"C-2", "C#2", "D-2", "D#2", "E-2", "F-2", "F#2" ,"G-2", "G#2", "A-2", "A#2", "B-2",
	"C-3", "C#3", "D-3", "D#3", "E-3", "F-3", "F#3" ,"G-3", "G#3", "A-3", "A#3", "B-3"
};

const char *noteNames2[2+36] =
{
	"---","???",
	"C-1", "D\x01""1", "D-1", "E\x01""1", "E-1", "F-1", "G\x01""1", "G-1", "A\x01""1", "A-1", "B\x01""1", "B-1",
	"C-2", "D\x01""2", "D-2", "E\x01""2", "E-2", "F-2", "G\x01""2", "G-2", "A\x01""2", "A-2", "B\x01""2", "B-2",
	"C-3", "D\x01""3", "D-3", "E\x01""3", "E-3", "F-3", "G\x01""3", "G-3", "A\x01""3", "A-3", "B\x01""3", "B-3"
};

const char *noteNames3[2+36] = // for PATTDOTS mode
{
	"\x02\x02\x02","???",
	"C-1", "C#1", "D-1", "D#1", "E-1", "F-1", "F#1" ,"G-1", "G#1", "A-1", "A#1", "B-1",
	"C-2", "C#2", "D-2", "D#2", "E-2", "F-2", "F#2" ,"G-2", "G#2", "A-2", "A#2", "B-2",
	"C-3", "C#3", "D-3", "D#3", "E-3", "F-3", "F#3" ,"G-3", "G#3", "A-3", "A#3", "B-3"
};

const char *noteNames4[2+36] = // for PATTDOTS mode
{
	"\x02\x02\x02","???",
	"C-1", "D\x01""1", "D-1", "E\x01""1", "E-1", "F-1", "G\x01""1", "G-1", "A\x01""1", "A-1", "B\x01""1", "B-1",
	"C-2", "D\x01""2", "D-2", "E\x01""2", "E-2", "F-2", "G\x01""2", "G-2", "A\x01""2", "A-2", "B\x01""2", "B-2",
	"C-3", "D\x01""3", "D-3", "E\x013""", "E-3", "F-3", "G\x01""3", "G-3", "A\x01""3", "A-3", "B\x01""3", "B-3"
};

const uint8_t vibratoTable[32] =
{
	0x00, 0x18, 0x31, 0x4A, 0x61, 0x78, 0x8D, 0xA1,
	0xB4, 0xC5, 0xD4, 0xE0, 0xEB, 0xF4, 0xFA, 0xFD,
	0xFF, 0xFD, 0xFA, 0xF4, 0xEB, 0xE0, 0xD4, 0xC5,
	0xB4, 0xA1, 0x8D, 0x78, 0x61, 0x4A, 0x31, 0x18
};

const int16_t periodTable[(37*16)+15] = // contains 16 finetuned period sections
{
	// finetune 0 (no finetuning)
	856,808,762,720,678,640,604,570,538,508,480,453,
	428,404,381,360,339,320,302,285,269,254,240,226,
	214,202,190,180,170,160,151,143,135,127,120,113,0,
	
	// finetune +1
	850,802,757,715,674,637,601,567,535,505,477,450,
	425,401,379,357,337,318,300,284,268,253,239,225,
	213,201,189,179,169,159,150,142,134,126,119,113,0,

	// finetune +2
	844,796,752,709,670,632,597,563,532,502,474,447,
	422,398,376,355,335,316,298,282,266,251,237,224,
	211,199,188,177,167,158,149,141,133,125,118,112,0,

	// finetune +3
	838,791,746,704,665,628,592,559,528,498,470,444,
	419,395,373,352,332,314,296,280,264,249,235,222,
	209,198,187,176,166,157,148,140,132,125,118,111,0,

	// finetune +4
	832,785,741,699,660,623,588,555,524,495,467,441,
	416,392,370,350,330,312,294,278,262,247,233,220,
	208,196,185,175,165,156,147,139,131,124,117,110,0,

	// finetune +5
	826,779,736,694,655,619,584,551,520,491,463,437,
	413,390,368,347,328,309,292,276,260,245,232,219,
	206,195,184,174,164,155,146,138,130,123,116,109,0,

	// finetune +6
	820,774,730,689,651,614,580,547,516,487,460,434,
	410,387,365,345,325,307,290,274,258,244,230,217,
	205,193,183,172,163,154,145,137,129,122,115,109,0,

	// finetune +7
	814,768,725,684,646,610,575,543,513,484,457,431,
	407,384,363,342,323,305,288,272,256,242,228,216,
	204,192,181,171,161,152,144,136,128,121,114,108,0,

	// finetune -8
	907,856,808,762,720,678,640,604,570,538,508,480,
	453,428,404,381,360,339,320,302,285,269,254,240,
	226,214,202,190,180,170,160,151,143,135,127,120,0,

	// finetune -7
	900,850,802,757,715,675,636,601,567,535,505,477,
	450,425,401,379,357,337,318,300,284,268,253,238,
	225,212,200,189,179,169,159,150,142,134,126,119,0,

	// finetune -6
	894,844,796,752,709,670,632,597,563,532,502,474,
	447,422,398,376,355,335,316,298,282,266,251,237,
	223,211,199,188,177,167,158,149,141,133,125,118,0,

	// finetune -5
	887,838,791,746,704,665,628,592,559,528,498,470,
	444,419,395,373,352,332,314,296,280,264,249,235,
	222,209,198,187,176,166,157,148,140,132,125,118,0,

	// finetune -4
	881,832,785,741,699,660,623,588,555,524,494,467,
	441,416,392,370,350,330,312,294,278,262,247,233,
	220,208,196,185,175,165,156,147,139,131,123,117,0,

	// finetune -3
	875,826,779,736,694,655,619,584,551,520,491,463,
	437,413,390,368,347,328,309,292,276,260,245,232,
	219,206,195,184,174,164,155,146,138,130,123,116,0,

	// finetune -2
	868,820,774,730,689,651,614,580,547,516,487,460,
	434,410,387,365,345,325,307,290,274,258,244,230,
	217,205,193,183,172,163,154,145,137,129,122,115,0,

	// finetune -1
	862,814,768,725,684,646,610,575,543,513,484,457,
	431,407,384,363,342,323,305,288,272,256,242,228,
	216,203,192,181,171,161,152,144,136,128,121,114,0,

	/* Arpeggio on -1 finetuned samples can do an out-of-bounds read from
	** this table. Here's the correct overflow values from the
	** "CursorPosTable" and "UnshiftedKeymap" table in the PT code, which are
	** located right after the period table. These tables and their order didn't
	** seem to change in the different PT1.x/PT2.x versions (I checked the
	** source codes).
	*/
	774,1800,2314,3087,4113,4627,5400,6426,6940,7713,
	8739,9253,24625,12851,13365
};

/*
** For playback time counter.
**
** Formula:
** for (int32_t i = MIN_BPM; i <= MAX_BPM; i++)
**     musicTimeTab52[i-MIN_BPM] = (uint64_t)round((1ULL << 52) / ciaBpm2Hz(i));
**
** // vblank mode (~49.92Hz)
** musicTimeTab52[(MAX_BPM-MIN_BPM)+1] = (uint64_t)round((1ULL << 52) / AMIGA_PAL_VBLANK_HZ);
*/
const uint64_t musicTimeTab52[(MAX_BPM-MIN_BPM)+1+1] =
{
	0x1400121B82E16,0x1364DD2764D7A,0x12D2E541CEAFF,0x12492642C0D42,
	0x11C729E981458,0x114C3301B339D,0x10D79BFD857FE,0x10691DE9554BE,
	0x10001337516C9,0x0F9C1D4D4B7CD,0x0F3CF537A0B0C,0x0EE23C5C22A32,
	0x0E8BABC72E881,0x0E38E4DE95FA5,0x0DE9CFFBCD60A,0x0D9DF6DE1ABC7,
	0x0D5559857E0DD,0x0D0FB0FE5488D,0x0CCCCDFB86FAE,0x0C8C98D689CAA,
	0x0C4ECA9BBA2C4,0x0C13634B181FB,0x0BDA1BF100D90,0x0BA2F48D74585,
	0x0B6DBDD35B6AE,0x0B3A77C2B610D,0x0B08DB67E17E2,0x0AD90069694C3,
	0x0AAAB77A36486,0x0A7DE8F3BCD96,0x0A5294D5FCFF3,0x0A28A37A6B208,
	0x0A0014E1073D5,0x09D8A2162E89D,0x09B27A66F8387,0x098D6E864D16C,
	0x09697E742D24A,0x0946928A0CC8D,0x09249321606A1,0x0903AF873F3AE,
	0x08E3A0C8066F7,0x08C466E3B607B,0x08A61980D99CF,0x0888895259FC9,
	0x086BCDFEC2BFF,0x084FCFDF884DC,0x08348EF4AAA5F,0x0819F3979E2F4,
	0x0800156EEE82F,0x07E6C52D846E7,0x07CE1A79EB8B1,0x07B5FDAD983F8,
	0x079E866F16250,0x07879D17D9A26,0x07712A01571E3,0x075B44D21A31E,
	0x0745D5E397440,0x0730F4DC59EE0,0x071C726F4AFD2,0x07087DE981A42,
	0x06F4E7FDE6B05,0x06E1C85305BB0,0x06CF0742532AE,0x06BCA4CBCEFFF,
	0x06AAB89604D39,0x06991353DD731,0x0687E45270111,0x0676FC44A57B0,
	0x066672D1094A1,0x065630510FE52,0x06464C6B44E55,0x0636AF791CB17,
	0x0627712122E2C,0x061862164046B,0x0609B1A58C0FD,0x05FB48287AA4E,
	0x05ED0DF8806C8,0x05DF3262B4996,0x05D18619FFF8D,0x05C420C4EE242,
	0x05B6EABCF3821,0x05A9FBA89BABF,0x059D3BE15B086,0x0590C30DBD30C,
	0x05847987368BC,0x05785F4DC7195,0x056C8C07FA72C,0x0560D068B9658,
	0x05555BBD1B243,0x054A165E94157,0x053F004D24395,0x05341988CB8FD,
	0x05294A6AFE7F9,0x051EC240D43B4,0x051451BD35904,0x050A282D39B12,
	0x05001643C96B5,0x04F61C00E4BED,0x04EC510B1744E,0x04E2B56260FD9,
	0x04D94906C1E8E,0x04CFF451AE6D8,0x04C6B743268B6,0x04BDA981B5DBE,
	0x04B4CB0D5C5EF,0x04ABEC9902E21,0x04A355184C311,0x049ABD9795801,
	0x04925563F601B,0x048A04D6E21C9,0x0481E396E56A1,0x0479C256E8B7A,
	0x0471D0640337B,0x0469F617A9512,0x04623371DB03D,0x045AA01923E92,
	0x04530CC06CCE7,0x044BA8B4CCE66,0x044444A92CFE5,0x043D0FEAA448D,
	0x0435F2D2A72CA,0x042EED6135A9C,0x0427E7EFC426E,0x042111CB69D69,
	0x041A534D9B1FA,0x041394CFCC68A,0x040D059F14E44,0x0406766E5D5FE,
	0x0400168ABD0E2,0x03F9B6A71CBC5,0x03F36E6A0803E,0x03ED3DD37EE4B,
	0x03E70D3CF5C59,0x03E10BF383D8F,0x03DB0AAA11EC6,0x03D521072B992,
	0x03CF4F0AD0DF3,0x03C97D0E76253,0x03C3DA5F329DD,0x03BE37AFEF167,
	0x03B89500AB8F2,0x03B3219E7F3A5,0x03ADAE3C52E59,0x03A83ADA2690D,
	0x03A2F6C5116EB,0x039DB2AFFC4C8,0x0398864172C3A,0x039359D2E93AD,
	0x038E450AEB4B4,0x038947E978F4F,0x03844AC8069EB,0x037F4DA694487,
	0x037A7FD23924D,0x0375B1FDDE012,0x0370E42982DD8,0x036C2DFBB3532,
	0x03678F746F621,0x0362F0ED2B711,0x035E5265E7800,0x0359E32BBAC18,
	0x03555C4B0269C,0x0350ED10D5AB5,0x034C957D34863,0x03483DE993610,
	0x0343FDFC7DD53,0x033FBE0F68495,0x033B7E2252BD8,0x033755DBC8CAF,
	0x0333453BCA71B,0x032F349BCC187,0x032B23FBCDBF3,0x03272B025AFF4,
	0x03233208E83F5,0x031F390F757F6,0x031B57BC8E58C,0x03178E1032CB6,
	0x0313C463D73E1,0x030FFAB77BB0B,0x030C310B20236,0x03087F05502F5,
	0x0304E4A60BD49,0x03014A46C779D,0x02FDAFE7831F1,0x02FA15883EC45,
	0x02F692CF8602E,0x02F31016CD417,0x02EFA504A0195,0x02EC224BE757E,
	0x02E8CEE045C91,0x02E563CE18A0F,0x02E2106277121,0x02DEBCF6D5834,
	0x02DB8131BF8DB,0x02D82DC61DFEE,0x02D509A793A2A,0x02D1CDE27DAD1,
	0x02CEA9C3F350E,0x02CB85A568F4A,0x02C86186DE986,0x02C5550EDFD57,
	0x02C24896E1128,0x02BF3C1EE24F9,0x02BC2FA6E38CA,0x02B93AD570630,
	0x02B64603FD396,0x02B351328A0FC,0x02B07407A27F7,0x02AD96DCBAEF1,
	0x02AAB9B1D35EC,0x02A7DC86EBCE7,0x02A517028FD76,0x02A2517E33E06,
	0x029F8BF9D7E95,0x029CC6757BF25,0x029A1897AB949,0x029753134F9D8,
	0x0294A5357F3FD,0x02920EFE3A7B6,0x028F61206A1DA,0x028CCAE925593,
	0x028A34B1E094C,0x02879E7A9BD06,0x02851FE9E2A53,0x028289B29DE0D,

	0x0520CF4BBC202 // ~49.92Hz (vblank tempo mode)
};

// button tables taken from the ptplay project + modified

const guiButton_t bTopScreen[] =
{
	{  0,  0, 39, 10, PTB_POSED},
	{ 40,  0, 50, 10, PTB_POSINS},
	{ 51,  0, 61, 10, PTB_POSDEL},
	{ 62,  0, 97, 10, PTB_POSS},
	{ 98,  0,108, 10, PTB_POSU},
	{109,  0,119, 10, PTB_POSD},
	{120,  0,181, 10, PTB_PLAY},
	{182,  0,243, 10, PTB_STOP},
	{244,  0,305, 10, PTB_MOD2WAV},
	{306,  0,319, 10, PTB_CHAN1},

	{ 62, 11, 97, 21, PTB_PATTERNS},
	{ 98, 11,108, 21, PTB_PATTERNU},
	{109, 11,119, 21, PTB_PATTERND},
	{120, 11,181, 21, PTB_PATTERN},
	{182, 11,243, 21, PTB_CLEAR},
	{244, 11,305, 21, PTB_PAT2SMP},
	{306, 11,319, 21, PTB_CHAN2},

	{ 62, 22, 97, 32, PTB_LENGTHS},
	{ 98, 22,108, 32, PTB_LENGTHU},
	{109, 22,119, 32, PTB_LENGTHD},
	{120, 22,181, 32, PTB_EDIT},
	{182, 22,243, 32, PTB_EDITOP},
	{244, 22,305, 32, PTB_POSED},
	{306, 22,319, 32, PTB_CHAN3},

	{ 98, 33,108, 43, PTB_FTUNEU},
	{109, 33,119, 43, PTB_FTUNED},
	{120, 33,181, 43, PTB_RECORD},
	{182, 33,243, 43, PTB_DISKOP},
	{244, 33,305, 43, PTB_SAMPLER},
	{306, 33,319, 43, PTB_CHAN4},

	{ 62, 44, 97, 54, PTB_SAMPLES},
	{ 98, 44,108, 54, PTB_SAMPLEU},
	{109, 44,119, 54, PTB_SAMPLED},
	{306, 44,319, 54, PTB_ABOUT}, // 'about' has priority over PTB_VISUALS
	{120, 44,319, 98, PTB_VISUALS},

	{ 62, 55, 97, 65, PTB_SVOLUMES},
	{ 98, 55,108, 65, PTB_SVOLUMEU},
	{109, 55,119, 65, PTB_SVOLUMED},

	{ 54, 66, 97, 76, PTB_SLENGTHS},
	{ 98, 66,108, 76, PTB_SLENGTHU},
	{109, 66,119, 76, PTB_SLENGTHD},

	{ 54, 77, 97, 87, PTB_SREPEATS},
	{ 98, 77,108, 87, PTB_SREPEATU},
	{109, 77,119, 87, PTB_SREPEATD},

	{ 54, 88, 97, 98, PTB_SREPLENS},
	{ 98, 88,108, 98, PTB_SREPLENU},
	{109, 88,119, 98, PTB_SREPLEND}
};

const guiButton_t bMidScreen[] =
{
	{  0, 99,319,109, PTB_SONGNAME},

	{  0,110,286,120, PTB_SAMPLENAME},
	{287,110,319,120, PTB_LOADSAMPLE}
};

const guiButton_t bBotScreen[] =
{
	{  0,121, 25,137, PTB_PATTBOX},
	{ 26,121, 43,137, PTB_TEMPOU},
	{ 43,121, 59,137, PTB_TEMPOD},

	{  0,138,319,254, PTB_PATTDATA}
};

const guiButton_t bDiskOp[] =
{
	{ 80,  0,145, 10, PTB_DO_PACKMOD},
	{146,  0,155, 10, PTB_DO_MODARROW},
	{156,  0,237, 10, PTB_DO_LOADMODULE},
	{238,  0,319, 10, PTB_DO_SAVEMODULE},

	{ 80, 11,145, 21, PTB_DO_SAMPLEFORMAT},
	{146, 11,155, 21, PTB_DO_SAMPLEARROW},
	{156, 11,237, 21, PTB_DO_LOADSAMPLE},
	{238, 11,319, 21, PTB_DO_SAVESAMPLE},

	{  0, 22,237, 32, PTB_DO_DATAPATH},
	{238, 22,272, 32, PTB_DO_PARENT},
	{273, 22,307, 32, PTB_DO_REFRESH},
	{308, 22,319, 30, PTB_DO_SCROLLTOP},

	{308, 31,319, 39, PTB_DO_SCROLLUP},
	{  2, 34,304, 93, PTB_DO_FILEAREA},
	{308, 40,319, 80, PTB_DO_EXIT},
	{308, 81,319, 89, PTB_DO_SCROLLDOWN},
	{308, 90,319, 99, PTB_DO_SCROLLBOT},
};

const guiButton_t bPosEd[] =
{
	{120,  0,171, 10, PTB_POSINS},
	{172,  0,267, 21, PTB_STOP},
	{268,  0,319, 10, PTB_PLAY},

	{120, 11,171, 21, PTB_POSDEL},
	{178, 22,307, 98, PTB_PE_PATTNAME},
	{268, 11,319, 21, PTB_PATTERN},

	{120, 22,177, 98, PTB_PE_PATT},
	{308, 22,319, 32, PTB_PE_SCROLLTOP},

	{308, 33,319, 43, PTB_PE_SCROLLUP},
	{308, 44,319, 76, PTB_PE_EXIT},
	{308, 77,319, 87, PTB_PE_SCROLLDOWN},
	{308, 88,319, 98, PTB_PE_SCROLLBOT}
};

const guiButton_t bEditOp1[] =
{
	{120, 44,319, 54, PTB_EO_TITLEBAR},

	{120, 55,212, 65, PTB_EO_TRACK_NOTE_UP},
	{213, 55,305, 65, PTB_EO_PATT_NOTE_UP},
	{306, 55,319, 65, PTB_DUMMY},

	{120, 66,212, 76, PTB_EO_TRACK_NOTE_DOWN},
	{213, 66,305, 76, PTB_EO_PATT_NOTE_DOWN},
	{306, 66,319, 76, PTB_EO_2},

	{120, 77,212, 87, PTB_EO_TRACK_OCTA_UP},
	{213, 77,305, 87, PTB_EO_PATT_OCTA_UP},
	{306, 77,319, 87, PTB_EO_3},

	{120, 88,212, 98, PTB_EO_TRACK_OCTA_DOWN},
	{213, 88,305, 98, PTB_EO_PATT_OCTA_DOWN},
	{306, 88,319, 98, PTB_EO_EXIT}
};

const guiButton_t bEditOp2[] =
{
	{120, 44,319, 54, PTB_EO_TITLEBAR},

	{120, 55,212, 65, PTB_EO_RECORD},
	{213, 55,259, 65, PTB_EO_DELETE},
	{260, 55,305, 65, PTB_EO_KILL},
	{306, 55,319, 65, PTB_EO_1},

	{120, 66,212, 76, PTB_EO_QUANTIZE},
	{213, 66,259, 76, PTB_EO_EXCHGE},
	{260, 66,305, 76, PTB_EO_COPY},
	{306, 66,319, 76, PTB_DUMMY},

	{120, 77,188, 87, PTB_EO_METRO_1},
	{189, 77,212, 87, PTB_EO_METRO_2},
	{213, 77,259, 87, PTB_EO_FROM},
	{260, 77,283, 87, PTB_EO_FROM_NUM},
	{284, 77,294, 87, PTB_EO_FROM_UP},
	{295, 77,305, 87, PTB_EO_FROM_DOWN},
	{306, 77,319, 87, PTB_EO_3},

	{120, 88,212, 98, PTB_EO_KEYS},
	{213, 88,259, 98, PTB_EO_TO},
	{260, 88,283, 98, PTB_EO_TO_NUM},
	{284, 88,294, 98, PTB_EO_TO_UP},
	{295, 88,305, 98, PTB_EO_TO_DOWN},
	{306, 88,319, 98, PTB_EO_EXIT},
};

const guiButton_t bEditOp3[] =
{
	{120, 44,319, 54, PTB_EO_TITLEBAR},

	{120, 55,165, 65, PTB_EO_MIX},
	{166, 55,212, 65, PTB_EO_ECHO},
	{213, 55,237, 65, PTB_DUMMY},
	{238, 55,283, 65, PTB_EO_POS_NUM},
	{284, 55,294, 65, PTB_EO_POS_UP},
	{295, 55,305, 65, PTB_EO_POS_DOWN},
	{306, 55,319, 65, PTB_EO_1},

	{120, 66,165, 76, PTB_EO_BOOST},
	{166, 66,212, 76, PTB_EO_FILTER},
	{213, 66,243, 76, PTB_EO_MOD},
	{244, 66,283, 76, PTB_EO_MOD_NUM},
	{284, 66,294, 76, PTB_EO_MOD_UP},
	{295, 66,305, 76, PTB_EO_MOD_DOWN},
	{306, 66,319, 76, PTB_EO_2},

	{120, 77,165, 87, PTB_EO_X_FADE},
	{166, 77,212, 87, PTB_EO_BACKWD},
	{213, 77,230, 87, PTB_EO_CB},
	{231, 77,269, 87, PTB_EO_CHORD},
	{270, 77,287, 87, PTB_EO_FU},
	{288, 77,305, 87, PTB_EO_FD},
	{306, 77,319, 87, PTB_DUMMY},

	{120, 88,165, 98, PTB_EO_UPSAMP},
	{166, 88,212, 98, PTB_EO_DNSAMP},
	{213, 88,243, 98, PTB_EO_VOL},
	{244, 88,283, 98, PTB_EO_VOL_NUM},
	{284, 88,294, 98, PTB_EO_VOL_UP},
	{295, 88,305, 98, PTB_EO_VOL_DOWN},
	{306, 88,319, 98, PTB_EO_EXIT}
};

const guiButton_t bEditOp4[] =
{
	{120, 44,319, 54, PTB_EO_TITLEBAR},

	{120, 55,165, 65, PTB_EO_DOCHORD},
	{166, 55,204, 65, PTB_EO_MAJOR},
	{205, 55,251, 65, PTB_EO_MAJOR7},
	{251, 55,283, 65, PTB_EO_NOTE1},
	{284, 55,294, 65, PTB_EO_NOTE1_UP},
	{295, 55,305, 65, PTB_EO_NOTE1_DOWN},
	{306, 55,319, 65, PTB_EO_1},

	{120, 66,165, 76, PTB_EO_RESET},
	{166, 66,204, 76, PTB_EO_MINOR},
	{205, 66,251, 76, PTB_EO_MINOR7},
	{251, 66,283, 76, PTB_EO_NOTE2},
	{284, 66,294, 76, PTB_EO_NOTE2_UP},
	{295, 66,305, 76, PTB_EO_NOTE2_DOWN},
	{306, 66,319, 76, PTB_EO_2},

	{120, 77,165, 87, PTB_EO_UNDO},
	{166, 77,204, 87, PTB_EO_SUS4},
	{205, 77,251, 87, PTB_EO_MAJOR6},
	{251, 77,283, 87, PTB_EO_NOTE3},
	{284, 77,294, 87, PTB_EO_NOTE3_UP},
	{295, 77,305, 87, PTB_EO_NOTE3_DOWN},
	{306, 77,319, 87, PTB_EO_3},

	{120, 88,165, 98, PTB_EO_LENGTH},
	{166, 88,204, 98, PTB_DUMMY},
	{205, 88,251, 98, PTB_EO_MINOR6},
	{251, 88,283, 98, PTB_EO_NOTE4},
	{284, 88,294, 98, PTB_EO_NOTE4_UP},
	{295, 88,305, 98, PTB_EO_NOTE4_DOWN},
	{306, 88,319, 98, PTB_EO_EXIT}
};

const guiButton_t bSampler[] =
{
	{  6,124, 25,134, PTB_SA_EXIT},
	{  0,138,319,201, PTB_SA_SAMPLEAREA},
	{  3,205,316,210, PTB_SA_ZOOMBARAREA},

	{ 32,211, 95,221, PTB_SA_PLAYWAVE},
	{ 96,211,175,221, PTB_SA_SHOWRANGE},
	{176,211,245,221, PTB_SA_ZOOMOUT},

	{  0,222, 30,243, PTB_SA_STOP},
	{ 32,222, 95,232, PTB_SA_PLAYDISPLAY},
	{ 96,222,175,232, PTB_SA_SHOWALL},
	{176,222,245,232, PTB_SA_RANGEALL},
	{246,222,319,232, PTB_SA_LOOP},

	{ 32,233, 94,243, PTB_SA_PLAYRANGE},
	{ 96,233,115,243, PTB_SA_RANGEBEG},
	{116,233,135,243, PTB_SA_RANGEEND},
	{136,233,174,243, PTB_SA_RANGECENTER},
	{176,233,210,243, PTB_SA_SAMPLE},
	{211,233,245,243, PTB_SA_RESAMPLE},
	{246,233,319,243, PTB_SA_RESAMPLENOTE},

	{  0,244, 31,254, PTB_SA_CUT},
	{ 32,244, 63,254, PTB_SA_COPY},
	{ 64,244, 95,254, PTB_SA_PASTE},
	{ 96,244,135,254, PTB_SA_VOLUME},
	{136,244,175,254, PTB_SA_TUNETONE},
	{176,244,210,254, PTB_SA_FIXDC},
	{211,244,245,254, PTB_SA_FILTERS}
};