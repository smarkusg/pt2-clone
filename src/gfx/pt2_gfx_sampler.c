#include <stdint.h>
#include "../pt2_palette.h"

uint32_t samplingPosBMP[64] =
{
	0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,
	0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,
	0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,
	0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,
	0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,
	0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,
	0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,
	0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF
};

// Final unpack length: 11000
// Decoded length: 2750 (first four bytes of buffer)
const uint8_t sampleMonitorPackedBMP[441] =
{
	0x00,0x00,0x0A,0xBE,0xCC,0x30,0x55,0x56,0x6A,0xCC,0x2F,0xAA,0xAB,0x6A,0xCC,0x2F,0xAA,0xAB,0x6A,0xCC,
	0x0B,0xAA,0x55,0x69,0x56,0x9A,0xA6,0x55,0x69,0x6A,0xA5,0x55,0xAA,0xAA,0x6A,0x9A,0x55,0xA5,0xA5,0xA5,
	0x5A,0x55,0x5A,0x55,0xA5,0x56,0xCC,0x0B,0xAA,0xAB,0x6A,0xCC,0x0A,0xAA,0xA9,0x7F,0xF5,0xF5,0x96,0x97,
	0x5F,0x59,0x7A,0xA5,0xFF,0xEA,0xAA,0x5A,0x5D,0x7D,0x65,0x65,0xE9,0x7E,0xB5,0xFD,0x7D,0x65,0xF5,0xCC,
	0x0B,0xAA,0xAB,0x6A,0xCC,0x0B,0xAA,0x55,0xA5,0x55,0xD5,0x57,0x55,0x7D,0x7A,0xA5,0x5A,0xAA,0xAA,0x55,
	0x5D,0x79,0x75,0x55,0xE9,0x7A,0xA5,0xE9,0x79,0x75,0x57,0xEA,0xCC,0x0A,0xAA,0xAB,0x6A,0xCC,0x0B,0xAA,
	0xBD,0x65,0xF5,0xD7,0xD7,0x5F,0xF9,0x7A,0xA5,0xFE,0xAA,0xAA,0x5F,0x5D,0x79,0x75,0xD5,0xE9,0x7A,0xA5,
	0xE9,0x79,0x75,0xD7,0xCC,0x0B,0xAA,0xAB,0x6A,0xCC,0x0A,0xAA,0xA9,0x55,0xF5,0xE5,0xD7,0x97,0x5E,0xA9,
	0x55,0x65,0x55,0xAA,0xAA,0x5E,0x5E,0x55,0xF5,0xE5,0xE5,0x5A,0xA5,0xEA,0x55,0xF5,0xE5,0xCC,0x0B,0xAA,
	0xAB,0x6A,0xCC,0x0B,0xAA,0xFF,0xEB,0xEB,0xEF,0xAF,0xBE,0xAA,0xFF,0xFB,0xFF,0xEA,0xAA,0xBE,0xBE,0xBF,
	0xEB,0xEB,0xEB,0xFE,0xAB,0xEA,0xBF,0xEB,0xEB,0xEA,0xCC,0x0A,0xAA,0xAB,0x6A,0xCC,0x2F,0xAA,0xAB,0xBF,
	0xCC,0x30,0xFF,0xCC,0x30,0x55,0x56,0x6A,0xCC,0x2F,0xAA,0xAB,0x6F,0xCC,0x2F,0xFF,0xEB,0x6C,0xCC,0x2F,
	0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,
	0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,
	0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,
	0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,
	0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x7C,0xCC,0x2F,0x00,0x17,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,
	0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,
	0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,
	0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,
	0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x6C,0xCC,0x2F,
	0x00,0x1B,0x6C,0xCC,0x2F,0x00,0x1B,0x69,0xCC,0x2F,0x55,0x5B,0x6A,0xCC,0x2F,0xAA,0xAB,0xBF,0xCC,0x30,
	0xFF
};

// Final unpack length: 16640
// Decoded length: 4160 (first four bytes of buffer)
const uint8_t samplingBoxPackedBMP[1379] =
{
	0x00,0x00,0x10,0x40,0x6A,0xCC,0x4D,0xAA,0xAB,0x6A,0xCC,0x4D,0xAA,0xAB,0x6A,0xCC,0x21,0xAA,0xA9,0xCC,
	0x07,0x55,0xCC,0x22,0xAA,0xAB,0x65,0x55,0x56,0xCC,0x08,0xAA,0x95,0x55,0x5A,0xCC,0x09,0xAA,0xA9,0x55,
	0x55,0xCC,0x06,0xAA,0xA9,0xCC,0x07,0xAA,0xEA,0xCC,0x21,0xAA,0xAB,0x66,0xAA,0xAB,0xCC,0x08,0xAA,0x9A,
	0xAA,0xAE,0xCC,0x09,0xAA,0xA9,0xAA,0xAA,0xEA,0xCC,0x05,0xAA,0xA9,0xCC,0x07,0xAA,0xEA,0xCC,0x21,0xAA,
	0xAB,0x66,0xAA,0xAB,0xA5,0xAA,0x95,0x56,0x55,0x59,0x55,0x6A,0xAA,0x9A,0xAA,0xAE,0x95,0x5A,0x95,0x6A,
	0x55,0x65,0xA5,0x95,0x56,0xAA,0xA9,0xAA,0xAA,0xE9,0xAA,0x69,0x56,0x96,0x96,0xAA,0xA9,0xA9,0x55,0xA5,
	0x5A,0x95,0x69,0x69,0x6A,0xEA,0xA5,0x55,0x95,0x5A,0x55,0x5A,0x55,0xA5,0xA5,0x95,0x56,0x5A,0x5A,0x55,
	0xA5,0xA5,0xCC,0x11,0xAA,0xAB,0x66,0xAA,0xAB,0xA5,0xEA,0x97,0xFF,0x5F,0xFE,0xD7,0xFA,0xAA,0x9A,0xAA,
	0xAE,0x97,0xD6,0xA5,0xF9,0x7F,0xF5,0xE5,0xED,0x7F,0xAA,0xA9,0xAA,0xAA,0xE9,0x69,0x7A,0x5F,0xA5,0x5F,
	0xAA,0xA9,0xA5,0xFF,0xD7,0xD6,0x5F,0x59,0x59,0x7A,0xEA,0xA5,0xFF,0xD7,0xD6,0x5F,0xFD,0x7D,0x65,0xE5,
	0xD7,0xFF,0x56,0x5D,0x7D,0x65,0xE5,0xEA,0xCC,0x10,0xAA,0xAB,0x66,0xAA,0xAB,0xA5,0xEA,0x95,0x6A,0x55,
	0xAA,0x97,0xAA,0xAA,0x9A,0xAA,0xAE,0x95,0x5F,0xA5,0xE9,0x75,0x65,0x55,0xE9,0x7A,0xAA,0xA9,0xAA,0xAA,
	0xE9,0x55,0x7A,0x5E,0xA9,0x7E,0xAA,0xA9,0xA9,0x56,0x97,0xAF,0x55,0x5D,0x55,0x7A,0xEA,0xA5,0x5A,0x95,
	0x5F,0x55,0xA9,0x79,0x75,0xE5,0xD5,0x6A,0x55,0x5D,0x7A,0xF9,0x57,0xEA,0xCC,0x10,0xAA,0xAB,0x66,0xAA,
	0xAB,0xA5,0xEA,0x97,0xFA,0x5F,0xEA,0x97,0xAA,0xAA,0x9A,0xAA,0xAE,0x97,0x5E,0xA5,0xE9,0x79,0x75,0xF5,
	0xE9,0x7A,0xAA,0xA9,0xAA,0xAA,0xE9,0x7D,0x7A,0x5E,0xA5,0x5A,0xAA,0xA9,0xAA,0xF5,0x97,0x96,0x5F,0x5D,
	0x75,0x7A,0xEA,0xA5,0xFE,0x97,0x5E,0x5F,0xE9,0x75,0xF5,0xE5,0xD7,0xFA,0x5D,0x5D,0x79,0x6A,0x5F,0xCC,
	0x11,0xAA,0xAB,0x66,0xAA,0xAB,0xA5,0x55,0x95,0x56,0x5E,0xAA,0x97,0xAA,0xAA,0x9A,0xAA,0xAE,0x97,0x96,
	0x95,0x6A,0x55,0x75,0xE5,0xE9,0x7A,0xAA,0xA9,0xAA,0xAA,0xE9,0x79,0x79,0x56,0x97,0xD6,0xAA,0xA9,0xA5,
	0x57,0xE5,0x5F,0x5E,0x5D,0x79,0x7A,0xEA,0xA5,0xEA,0x97,0x96,0x55,0x5A,0x59,0x69,0x57,0xD5,0x56,0x5E,
	0x5E,0x55,0xFA,0x5E,0xCC,0x11,0xAA,0xAB,0x66,0xAA,0xAB,0xAB,0xFF,0xEF,0xFF,0xBE,0xAA,0xAF,0xAA,0xAA,
	0x9A,0xAA,0xAE,0xAF,0xAF,0xAF,0xFA,0xBF,0xFB,0xEB,0xEA,0xFA,0xAA,0xA9,0xAA,0xAA,0xEA,0xFA,0xFA,0xFF,
	0xAF,0xAF,0xAA,0xA9,0xAB,0xFF,0xAB,0xFE,0xBE,0xBE,0xFA,0xFA,0xEA,0xAB,0xEA,0xAF,0xAF,0xBF,0xFE,0xBE,
	0xFA,0xFF,0xAF,0xFF,0xBE,0xBE,0xBF,0xEA,0xBE,0xCC,0x11,0xAA,0xAB,0x6B,0xFF,0xFF,0xCC,0x08,0xAA,0xAF,
	0xFF,0xFE,0xCC,0x0A,0xAA,0xFF,0xFF,0xEA,0xCC,0x05,0xAA,0xA9,0xCC,0x07,0xAA,0xEA,0xCC,0x21,0xAA,0xAB,
	0x6A,0xCC,0x22,0xAA,0xCC,0x07,0xFF,0xEA,0xCC,0x21,0xAA,0xAB,0x6A,0xCC,0x4D,0xAA,0xAB,0x6A,0xCC,0x48,
	0xAA,0x55,0x55,0x59,0x55,0x55,0x6B,0x6F,0xCC,0x27,0xFF,0xF5,0x55,0x55,0xCC,0x1D,0xAA,0x6A,0xAA,0xAD,
	0xAA,0xAA,0xBB,0x6C,0xCC,0x27,0x00,0x06,0xAA,0xAA,0xEA,0xA5,0x55,0xA5,0x5A,0x5A,0x59,0x55,0x65,0x55,
	0x96,0x96,0x5A,0x59,0x55,0x6A,0xCC,0x0D,0xAA,0x6A,0x9A,0xAD,0xA9,0x5A,0xBB,0x6C,0xCC,0x27,0x00,0x06,
	0xA9,0xAA,0xEA,0xA5,0xFF,0xE9,0x7E,0x56,0x5D,0x7F,0xFB,0x5F,0xD7,0x97,0x56,0x5D,0x7F,0xFA,0xCC,0x0D,
	0xAA,0x6A,0x56,0xAD,0xA9,0x5E,0xBB,0x6C,0xCC,0x27,0x00,0x06,0xA5,0x6A,0xEA,0xA5,0x5A,0xA9,0x7A,0x55,
	0x5D,0x56,0xAA,0x5E,0x97,0x97,0x55,0x5D,0x56,0xCC,0x0E,0xAA,0x69,0x55,0xAD,0xA9,0x5E,0xBB,0x6C,0xCC,
	0x27,0x00,0x06,0x95,0x5A,0xEA,0xA5,0xFE,0xA9,0x7A,0x5D,0x5D,0x7F,0xAA,0x5E,0x97,0x97,0x5D,0x5D,0x7F,
	0xCC,0x0E,0xAA,0x6A,0x57,0xED,0xA5,0x56,0xBB,0x6C,0xCC,0x27,0x00,0x06,0xA5,0x7E,0xEA,0xA5,0xEA,0xA5,
	0x5A,0x5E,0x5D,0x55,0x6A,0x5E,0xA5,0x5F,0x5E,0x5D,0x55,0x6A,0xCC,0x0D,0xAA,0x6A,0x57,0xAD,0xA9,0x5F,
	0xBB,0x6C,0xCC,0x27,0x00,0x06,0xA5,0x7A,0xEA,0xAB,0xEA,0xAB,0xFE,0xBE,0xBE,0xFF,0xFA,0xBE,0xAB,0xFE,
	0xBE,0xBE,0xFF,0xFA,0xCC,0x0D,0xAA,0x6A,0x57,0xAD,0xAA,0x7E,0xBB,0x6C,0xCC,0x27,0x00,0x06,0xA5,0x7A,
	0xEA,0xCC,0x1C,0xAA,0x6A,0xBF,0xAD,0xAA,0xBA,0xBB,0x6C,0xCC,0x27,0x00,0x06,0xAB,0xFA,0xEA,0xCC,0x1C,
	0xAA,0x6A,0xAA,0xAD,0xAA,0xAA,0xBB,0x6C,0xCC,0x27,0x00,0x06,0xAA,0xAA,0xEA,0xCC,0x1C,0xAA,0xBF,0xFF,
	0xFE,0xFF,0xFF,0xFB,0x6C,0xCC,0x27,0x00,0x0B,0xFF,0xFF,0xEA,0xCC,0x21,0xAA,0xAB,0x6C,0xCC,0x27,0x00,
	0x05,0x55,0x55,0xCC,0x22,0xAA,0xAB,0x6C,0xCC,0x27,0x00,0x06,0xAA,0xAA,0xEA,0xA5,0xA5,0xA5,0x5A,0x55,
	0x59,0x55,0x6A,0xCC,0x19,0xAA,0xAB,0x6C,0xCC,0x27,0x00,0x06,0xAA,0xAA,0xEA,0xA5,0x65,0xD7,0xD6,0xB5,
	0xFD,0x7F,0xFA,0xCC,0x19,0xAA,0xAB,0x6C,0xCC,0x27,0x00,0x06,0xAA,0xAA,0xEA,0xA5,0x55,0xD7,0x97,0xA5,
	0xE9,0x56,0xCC,0x1A,0xAA,0xAB,0x6C,0xCC,0x27,0x00,0x06,0xAA,0xAA,0xEA,0xA5,0xD5,0xD7,0x97,0xA5,0xE9,
	0x7F,0xCC,0x1A,0xAA,0xAB,0x6C,0xCC,0x27,0x00,0x06,0xAA,0xAA,0xEA,0xA5,0xE5,0xE5,0x5F,0xA5,0xE9,0x55,
	0x6A,0xCC,0x19,0xAA,0xAB,0x6C,0xCC,0x27,0x00,0x06,0xAA,0xAA,0xEA,0xAB,0xEB,0xEB,0xFE,0xAB,0xEA,0xFF,
	0xFA,0xCC,0x19,0xAA,0xAB,0x6C,0xCC,0x27,0x00,0x06,0xAA,0xAA,0xEA,0xCC,0x21,0xAA,0xAB,0x6C,0xCC,0x27,
	0x00,0x06,0xAA,0xAA,0xEA,0xCC,0x21,0xAA,0xAB,0x6C,0xCC,0x27,0x00,0x06,0xAA,0xAA,0xEA,0xCC,0x21,0xAA,
	0xAB,0x6C,0xCC,0x27,0x00,0x06,0xAA,0xAA,0xEA,0xCC,0x21,0xAA,0xAB,0x6C,0xCC,0x27,0x00,0x06,0xAA,0xAA,
	0xEA,0xCC,0x21,0xAA,0xAB,0x6C,0xCC,0x27,0x00,0x0B,0xFF,0xFF,0xEA,0xCC,0x21,0xAA,0xAB,0x6C,0xCC,0x27,
	0x00,0x05,0x55,0x55,0xAA,0x95,0xCC,0x0C,0x55,0x6A,0xA5,0xCC,0x07,0x55,0x6A,0xA5,0xCC,0x07,0x55,0x6B,
	0x6C,0xCC,0x27,0x00,0x06,0xAA,0xAA,0xEA,0x9A,0xCC,0x0C,0xAA,0xBA,0xA6,0xCC,0x07,0xAA,0xBA,0xA6,0xCC,
	0x07,0xAA,0xBB,0x6C,0xCC,0x27,0x00,0x06,0xA5,0x6A,0xEA,0x9A,0xCC,0x0C,0xAA,0xBA,0xA6,0xCC,0x07,0xAA,
	0xBA,0xA6,0xCC,0x07,0xAA,0xBB,0x6C,0xCC,0x27,0x00,0x06,0xA5,0x7A,0xEA,0x9A,0xAA,0x95,0x5A,0x55,0xA6,
	0xA9,0x95,0x5A,0x5A,0xA9,0x55,0x6A,0xAA,0xBA,0xA6,0xA5,0xA5,0xA5,0x5A,0x55,0x59,0x55,0x6A,0xBA,0xA6,
	0xA5,0x55,0x96,0x96,0x95,0x69,0x55,0x6A,0xBB,0x6C,0xCC,0x27,0x00,0x06,0xA5,0x7A,0xEA,0x9A,0xAA,0x5F,
	0xFD,0x7D,0x65,0xA5,0xD7,0xD6,0x5E,0xA9,0x7F,0xFA,0xAA,0xBA,0xA6,0xA5,0x65,0xD7,0xD6,0xB5,0xFD,0x7F,
	0xFA,0xBA,0xA6,0xA5,0xFF,0xE5,0x5F,0xA5,0xFA,0xD7,0xFA,0xBB,0x6C,0xCC,0x27,0x00,0x06,0x95,0x5A,0xEA,
	0x9A,0xAA,0x95,0x69,0x55,0x75,0x55,0xD5,0x5F,0x5E,0xA9,0x56,0xAA,0xAA,0xBA,0xA6,0xA5,0x55,0xD7,0x97,
	0xA5,0xE9,0x56,0xAA,0xBA,0xA6,0xA5,0x5A,0xA9,0x7E,0xA5,0xEA,0x97,0xAA,0xBB,0x6C,0xCC,0x27,0x00,0x06,
	0xA5,0x7E,0xEA,0x9A,0xAA,0xAF,0x59,0x7D,0x75,0xF5,0xD7,0xFE,0x5E,0xA9,0x7F,0xAA,0xAA,0xBA,0xA6,0xA5,
	0xD5,0xD7,0x97,0xA5,0xE9,0x7F,0xAA,0xBA,0xA6,0xA5,0xFE,0xA5,0x5A,0xA5,0xEA,0x97,0xAA,0xBB,0x6C,0xCC,
	0x27,0x00,0x06,0xA9,0xFA,0xEA,0x9A,0xAA,0x55,0x7D,0x79,0x75,0xE5,0xD7,0xAA,0x55,0x59,0x55,0x6A,0xAA,
	0xBA,0xA6,0xA5,0xE5,0xE5,0x5F,0xA5,0xE9,0x55,0x6A,0xBA,0xA6,0xA5,0x55,0x97,0xD6,0x95,0x6A,0x97,0xAA,
	0xBB,0x6C,0xCC,0x27,0x00,0x06,0xAA,0xEA,0xEA,0x9A,0xAA,0xBF,0xFA,0xFA,0xFB,0xEB,0xEF,0xAA,0xBF,0xFE,
	0xFF,0xFA,0xAA,0xBA,0xA6,0xAB,0xEB,0xEB,0xFE,0xAB,0xEA,0xFF,0xFA,0xBA,0xA6,0xAB,0xFF,0xEF,0xAF,0xAF,
	0xFA,0xAF,0xAA,0xBB,0x6C,0xCC,0x27,0x00,0x06,0xAA,0xAA,0xEA,0x9A,0xCC,0x0C,0xAA,0xBA,0xA6,0xCC,0x07,
	0xAA,0xBA,0xA6,0xCC,0x07,0xAA,0xBB,0x69,0xCC,0x27,0x55,0x5B,0xFF,0xFF,0xEA,0xAF,0xCC,0x0C,0xFF,0xFA,
	0xAB,0xCC,0x07,0xFF,0xFA,0xAB,0xCC,0x07,0xFF,0xFB,0x6A,0xCC,0x4D,0xAA,0xAB,0xBF,0xCC,0x4E,0xFF
};

// Final unpack length: 4488
// Decoded length: 1122 (first four bytes of buffer)
const uint8_t samplerVolumePackedBMP[706] =
{
	0x00,0x00,0x04,0x62,0xCC,0x06,0x55,0x95,0xCC,0x10,0x55,0x65,0xCC,0x06,0x55,0x56,
	0x6A,0xCC,0x05,0xAA,0xDA,0xA9,0xAA,0xAA,0xAA,0xA6,0xAA,0xAA,0xAA,0x9A,0xAA,0xAA,
	0xAA,0x6A,0xAA,0xAA,0xA9,0xAA,0xB6,0xCC,0x06,0xAA,0xAB,0x6A,0xCC,0x05,0xAA,0xDB,
	0xFD,0xF7,0xDF,0x7D,0xF7,0xDF,0x7D,0xF7,0xDF,0x7D,0xF7,0xDF,0x7D,0xF7,0xDF,0x7D,
	0xFE,0xB6,0xCC,0x06,0xAA,0xAB,0x6A,0xA9,0x59,0x59,0x59,0x9A,0xAA,0xDB,0xCC,0x0F,
	0x00,0x01,0xB6,0xCC,0x05,0xAA,0x5A,0x6B,0x6A,0xA9,0xFD,0xDD,0xDD,0x5E,0xAA,0xDB,
	0xCC,0x0F,0x00,0x01,0xB6,0xCC,0x05,0xAA,0x5D,0xBB,0x6A,0xA9,0x69,0x6D,0xDD,0xDE,
	0xAA,0xDB,0xCC,0x0F,0x00,0x01,0xB6,0xCC,0x05,0xAA,0xB6,0xEB,0x6A,0xA9,0xF9,0xD9,
	0xDD,0xDE,0xAA,0xDB,0xCC,0x0F,0x00,0x01,0xB6,0xCC,0x05,0xAA,0x99,0x6B,0x6A,0xA9,
	0xE9,0xDD,0x5D,0xDE,0xAA,0xDB,0xCC,0x0F,0x00,0x01,0xB6,0xCC,0x05,0xAA,0x6D,0x7B,
	0x6A,0xAA,0xEA,0xEE,0xFE,0xEE,0xAA,0xDA,0xCC,0x10,0x55,0xB6,0xCC,0x05,0xAA,0xBA,
	0xFB,0x6A,0xCC,0x05,0xAA,0xDA,0xCC,0x10,0xAA,0xB6,0xCC,0x06,0xAA,0xAB,0xBF,0xCC,
	0x05,0xFF,0xEF,0xCC,0x10,0xFF,0xFB,0xCC,0x07,0xFF,0xCC,0x06,0x55,0x95,0xCC,0x10,
	0x55,0x65,0xCC,0x06,0x55,0x56,0x6A,0xCC,0x05,0xAA,0xDA,0xA9,0xAA,0xAA,0xAA,0xA6,
	0xAA,0xAA,0xAA,0x9A,0xAA,0xAA,0xAA,0x6A,0xAA,0xAA,0xA9,0xAA,0xB6,0xCC,0x06,0xAA,
	0xAB,0x6A,0xCC,0x05,0xAA,0xDB,0xFD,0xF7,0xDF,0x7D,0xF7,0xDF,0x7D,0xF7,0xDF,0x7D,
	0xF7,0xDF,0x7D,0xF7,0xDF,0x7D,0xFE,0xB6,0xCC,0x06,0xAA,0xAB,0x6A,0xAA,0xA9,0x59,
	0x5A,0xAA,0xAA,0xDB,0xCC,0x0F,0x00,0x01,0xB6,0xCC,0x05,0xAA,0x5A,0x6B,0x6A,0xAA,
	0xAA,0x7D,0xDE,0xAA,0xAA,0xDB,0xCC,0x0F,0x00,0x01,0xB6,0xCC,0x05,0xAA,0x5D,0xBB,
	0x6A,0xAA,0xAA,0x79,0xDE,0xAA,0xAA,0xDB,0xCC,0x0F,0x00,0x01,0xB6,0xCC,0x05,0xAA,
	0xB6,0xEB,0x6A,0xAA,0xAA,0x79,0xDE,0xAA,0xAA,0xDB,0xCC,0x0F,0x00,0x01,0xB6,0xCC,
	0x05,0xAA,0x99,0x6B,0x6A,0xAA,0xAA,0x79,0x5E,0xAA,0xAA,0xDB,0xCC,0x0F,0x00,0x01,
	0xB6,0xCC,0x05,0xAA,0x6D,0x7B,0x6A,0xAA,0xAA,0xBA,0xFE,0xAA,0xAA,0xDA,0xCC,0x10,
	0x55,0xB6,0xCC,0x05,0xAA,0xBA,0xFB,0x6A,0xCC,0x05,0xAA,0xDA,0xCC,0x10,0xAA,0xB6,
	0xCC,0x06,0xAA,0xAB,0xBF,0xCC,0x05,0xFF,0xEF,0xCC,0x10,0xFF,0xFB,0xCC,0x07,0xFF,
	0xCC,0x06,0x55,0x95,0xCC,0x08,0x55,0x56,0x55,0x55,0x65,0x55,0x56,0x55,0x55,0x65,
	0xCC,0x06,0x55,0x56,0x6A,0xCC,0x05,0xAA,0xDA,0xCC,0x08,0xAA,0xAB,0x6A,0xAA,0xB6,
	0xAA,0xAB,0x6A,0xAA,0xB6,0xCC,0x06,0xAA,0xAB,0x6A,0xCC,0x05,0xAA,0xDA,0xCC,0x08,
	0xAA,0xAB,0x62,0xAA,0xB6,0xAA,0x8B,0x6A,0xAA,0xB6,0xCC,0x06,0xAA,0xAB,0x6A,0xA9,
	0x59,0x59,0x99,0x5A,0xAA,0xDA,0x96,0x95,0x95,0x99,0x95,0x9A,0xA6,0x95,0x95,0xAB,
	0x60,0xAA,0xB6,0xAA,0x0B,0x6A,0xAA,0xB6,0xA9,0x59,0x59,0x69,0x59,0x59,0xAA,0xAB,
	0x6A,0xA9,0xDD,0xDD,0x5D,0xDE,0xAA,0xDA,0x9D,0x9D,0xDD,0xD5,0xDD,0xDE,0xA7,0xAD,
	0xDF,0xEB,0x68,0x2A,0xB6,0xA8,0x2B,0x6A,0xAA,0xB6,0xA9,0xFD,0xDD,0xD9,0xFD,0xFD,
	0xEA,0xAB,0x6A,0xA9,0x6D,0x5D,0xDD,0x5E,0xAA,0xDA,0x9D,0xDD,0xD6,0xDD,0xD5,0xDE,
	0xA7,0xA6,0xD6,0xAB,0x6A,0x0A,0xB6,0xA0,0xAB,0x60,0x00,0xB6,0xA9,0xE9,0x5D,0xDD,
	0xE9,0x69,0xEA,0xAB,0x6A,0xA9,0xD9,0xDD,0xDD,0xFE,0xAA,0xDA,0x9D,0xDD,0xDD,0x9D,
	0xDD,0xDE,0xA7,0x9B,0x9F,0xAB,0x6A,0x82,0xB6,0x82,0xAB,0x6A,0xAA,0xB6,0xA9,0xE9,
	0xDD,0xDD,0xE9,0xF9,0xEA,0xAB,0x6A,0xA9,0xDD,0xDD,0xDD,0xEA,0xAA,0xDA,0x9D,0xD5,
	0xDD,0xDD,0xDD,0xD5,0xA7,0x95,0x95,0xAB,0x6A,0xA0,0xB6,0x0A,0xAB,0x6A,0xAA,0xB6,
	0xA9,0x59,0xDD,0xDD,0x59,0x59,0x5A,0xAB,0x6A,0xAA,0xEE,0xEE,0xEE,0xEA,0xAA,0xDA,
	0xAE,0xEF,0xEE,0xEE,0xEE,0xEF,0xEB,0xAF,0xEF,0xEB,0x6A,0xA8,0xB6,0x2A,0xAB,0x6A,
	0xAA,0xB6,0xAA,0xFE,0xEE,0xEE,0xFE,0xFE,0xFE,0xAB,0x6A,0xCC,0x05,0xAA,0xDA,0xCC,
	0x08,0xAA,0xAB,0x6A,0xAA,0xB6,0xAA,0xAB,0x6A,0xAA,0xB6,0xCC,0x06,0xAA,0xAB,0xBF,
	0xCC,0x05,0xFF,0xEF,0xCC,0x09,0xFF,0xBF,0xFF,0xFB,0xFF,0xFF,0xBF,0xFF,0xFB,0xCC,
	0x07,0xFF
};

// Final unpack length: 6140
// Decoded length: 1535 (first four bytes of buffer)
const uint8_t samplerFiltersPackedBMP[933] =
{
	0x00,0x00,0x05,0xFF,0x55,0x55,0x59,0xCC,0x15,0x55,0x95,0xCC,0x0B,0x55,0x95,0x55,0x56,0x55,0x55,0x59,
	0x55,0x55,0x66,0xAA,0xAA,0xDA,0xCC,0x14,0xAA,0xAD,0xCC,0x0B,0xAA,0xAD,0xAA,0xAA,0xB6,0xAA,0xAA,0xDA,
	0xAA,0xAB,0x6A,0xAA,0xAD,0xCC,0x15,0xAA,0xDA,0xCC,0x0B,0xAA,0xDA,0xA6,0xAB,0x6A,0x56,0xAD,0xAA,0xAA,
	0xB6,0x5A,0x5A,0xDA,0xAA,0xAA,0xAA,0xA5,0xAA,0xA5,0x5A,0x5A,0x5A,0xAA,0xA5,0x56,0xA5,0x5A,0x95,0x5A,
	0x55,0x6A,0xAA,0xAA,0xAA,0xAD,0xCC,0x0B,0xAA,0xAD,0xA9,0x5A,0xB6,0xA5,0x7A,0xD9,0x55,0x6B,0x65,0xE5,
	0xED,0xCC,0x03,0xAA,0x5E,0xA9,0x7D,0x65,0xE5,0xEA,0xAA,0x5F,0x59,0x7D,0x65,0xFF,0xD7,0xFF,0xCC,0x03,
	0xAA,0xDA,0xCC,0x0B,0xAA,0xDA,0x55,0x6B,0x6A,0x57,0xAD,0x97,0xFF,0xB6,0x5E,0x5E,0xDA,0xAA,0xAA,0xAA,
	0xA5,0xEA,0x97,0x97,0x55,0x5E,0x55,0xA5,0x57,0xD5,0x57,0x95,0x6A,0x55,0xCC,0x03,0xAA,0xAD,0xCC,0x0B,
	0xAA,0xAD,0xA9,0x5F,0xB6,0x95,0x5A,0xD9,0x56,0xAB,0x65,0xE5,0xED,0xCC,0x03,0xAA,0x5E,0xA9,0x79,0x75,
	0xF5,0xEB,0xFE,0x5F,0xF9,0x7D,0x7A,0xF5,0xAB,0xD6,0xCC,0x03,0xAA,0xDA,0xCC,0x0B,0xAA,0xDA,0x95,0xEB,
	0x6A,0x57,0xED,0x97,0xFA,0xB6,0x95,0x7E,0xDA,0xAA,0xAA,0xAA,0xA5,0x55,0xA5,0x5F,0x7E,0x9E,0xAA,0xA5,
	0xEA,0x97,0x97,0x55,0x7D,0x55,0xFA,0xAA,0xAA,0xAA,0xAD,0xCC,0x0B,0xAA,0xAD,0xA9,0x5E,0xB6,0xA9,0xFA,
	0xD9,0x55,0x6B,0x6A,0xFF,0xAD,0xCC,0x03,0xAA,0xBF,0xFE,0xBF,0xEB,0xAA,0xEA,0xAA,0xBE,0xAA,0xFA,0xFB,
	0xFF,0xAF,0xFE,0xCC,0x03,0xAA,0xDA,0xCC,0x0B,0xAA,0xDA,0xAF,0xEB,0x6A,0xAE,0xAD,0xAF,0xFF,0xB6,0xAA,
	0xAA,0xDA,0xCC,0x14,0xAA,0xAD,0xCC,0x0B,0xAA,0xAD,0xAA,0xAA,0xB6,0xAA,0xAA,0xDA,0xAA,0xAB,0x65,0xA5,
	0xAE,0xCC,0x15,0xFF,0xEF,0xCC,0x0B,0xFF,0xEF,0xFF,0xFF,0xBF,0xFF,0xFD,0x96,0x96,0xB6,0x56,0x5E,0xD5,
	0xCC,0x14,0x55,0x59,0xCC,0x0B,0x55,0x59,0x55,0x55,0x65,0x55,0x55,0x9A,0x55,0xFB,0x65,0x55,0xED,0xCC,
	0x15,0xAA,0xDA,0xCC,0x0B,0xAA,0xDA,0xAA,0xAB,0x6A,0xAA,0xAD,0xA9,0x7E,0xB6,0x5D,0x5E,0xDA,0xCC,0x14,
	0xAA,0xAD,0xCC,0x0B,0xAA,0xAD,0xAA,0x6A,0xB6,0xA5,0x6A,0xDA,0x55,0xAB,0x65,0xE5,0xED,0xAA,0xAA,0xAA,
	0x96,0x96,0x95,0x6A,0x55,0x65,0xA5,0xAA,0xAA,0x55,0x6A,0x55,0xA9,0x55,0xA5,0x56,0xAA,0xAA,0xAA,0xDA,
	0xCC,0x0B,0xAA,0xDA,0x95,0xAB,0x6A,0x57,0xAD,0x97,0xD6,0xB6,0xBE,0xBE,0xDA,0xAA,0xAA,0xA9,0x79,0x7A,
	0x5F,0x97,0xFF,0x5E,0x5E,0xAA,0xA5,0xF5,0x97,0xD6,0x5F,0xFD,0x7F,0xFA,0xAA,0xAA,0xAD,0xCC,0x0B,0xAA,
	0xAD,0xA5,0x56,0xB6,0xA5,0x7A,0xDA,0xFA,0xFB,0x6A,0xAA,0xAD,0xAA,0xAA,0xAA,0x95,0x57,0xA5,0xE9,0x75,
	0x65,0x55,0xE5,0x5A,0x55,0x7D,0x55,0x79,0x56,0xA5,0x5A,0xAA,0xAA,0xAA,0xDA,0xCC,0x0B,0xAA,0xDA,0x95,
	0xFB,0x69,0x55,0xAD,0xAA,0xAA,0xB6,0x55,0x6A,0xDA,0xAA,0xAA,0xA9,0x7D,0x7A,0x5E,0x97,0x97,0x5F,0x5E,
	0xBF,0xE5,0xFF,0x97,0xD7,0xAF,0x5A,0xBD,0x6A,0xAA,0xAA,0xAD,0xCC,0x0B,0xAA,0xAD,0xA9,0x5E,0xB6,0xA5,
	0x7E,0xDA,0x55,0xAB,0x65,0xF5,0xAD,0xAA,0xAA,0xAA,0x97,0x97,0x95,0x6A,0x55,0x75,0xE5,0xEA,0xAA,0x5E,
	0xA9,0x79,0x75,0x57,0xD5,0x5F,0xAA,0xAA,0xAA,0xDA,0xCC,0x0B,0xAA,0xDA,0x95,0xEB,0x6A,0x9F,0xAD,0xA9,
	0x7E,0xB6,0x5E,0x5E,0xDA,0xAA,0xAA,0xAA,0xFA,0xFA,0xFF,0xAB,0xFF,0xBE,0xBE,0xAA,0xAB,0xEA,0xAF,0xAF,
	0xBF,0xFA,0xFF,0xEA,0xAA,0xAA,0xAD,0xCC,0x0B,0xAA,0xAD,0xAA,0xFE,0xB6,0xAA,0xEA,0xDA,0x97,0xAB,0x65,
	0xE5,0xED,0xCC,0x15,0xAA,0xDA,0xCC,0x0B,0xAA,0xDA,0xAA,0xAB,0x6A,0xAA,0xAD,0xA9,0x7A,0xB6,0x55,0x7E,
	0xEF,0xCC,0x14,0xFF,0xFE,0xCC,0x0B,0xFF,0xFE,0xFF,0xFF,0xFB,0xFF,0xFF,0xDA,0x55,0xAB,0x6B,0xFF,0xAD,
	0xCC,0x27,0x55,0x59,0xAB,0xFE,0xB6,0xAA,0xAA,0xDA,0xCC,0x27,0xAA,0xDA,0xAA,0xAB,0x69,0x56,0xAD,0xCC,
	0x27,0xAA,0xAD,0x95,0x56,0xB6,0x5F,0x5A,0xDA,0xAA,0xAA,0x5A,0x5A,0x55,0xA5,0x56,0x9A,0xA6,0x95,0x69,
	0x6A,0xA9,0x56,0x95,0x56,0x55,0x5A,0xAA,0xA9,0x55,0xA5,0x5A,0x6A,0x99,0x55,0xA5,0xAA,0x95,0x56,0xA5,
	0xCC,0x08,0xAA,0xDA,0xD7,0xFB,0x65,0xE5,0xED,0xAA,0xAA,0xA5,0x65,0xD7,0xD6,0x5F,0x59,0x69,0x75,0xF5,
	0x97,0xAA,0xA5,0xFA,0xF5,0xF5,0xFF,0xEA,0xAA,0x5F,0xFD,0x7D,0x65,0xA5,0xD7,0xD6,0x5E,0xA9,0x7F,0xFA,
	0x5E,0xCC,0x07,0xAA,0xAD,0xA9,0x7A,0xB6,0x5E,0x5E,0xDA,0xAA,0xAA,0x55,0x5D,0x79,0x75,0x57,0xD5,0x57,
	0x55,0x5D,0x7A,0xAA,0x5E,0xA9,0x7E,0x55,0xAA,0xAA,0xA9,0x56,0x95,0x57,0x55,0x5D,0x55,0xF5,0xEA,0x95,
	0x6A,0xAB,0xEA,0xCC,0x07,0xAA,0xDA,0x97,0xAB,0x69,0x57,0xED,0xAA,0xAA,0xA5,0xD5,0xD7,0x97,0x5D,0x79,
	0x7D,0x75,0xF5,0xD7,0xAA,0xA5,0xEA,0x5F,0xA5,0xFE,0xAA,0xAA,0xAF,0x59,0x7D,0x75,0xF5,0xD7,0xFE,0x5E,
	0xA9,0x7F,0xAA,0x5A,0xCC,0x07,0xAA,0xAD,0xA9,0x7A,0xB6,0xAF,0xFA,0xDA,0xAA,0xAA,0x5E,0x5E,0x55,0xF5,
	0xE5,0x97,0x97,0x5E,0x5D,0x55,0x69,0x56,0x95,0x56,0x55,0x5A,0xAA,0xA5,0x57,0xD7,0x97,0x5E,0x5D,0x7A,
	0xA5,0x55,0x95,0x56,0xA5,0xEA,0xCC,0x07,0xAA,0xDA,0xAF,0xAB,0x6A,0xAA,0xAD,0xAA,0xAA,0xAB,0xEB,0xEB,
	0xFE,0xBE,0xBE,0xFA,0xFB,0xEB,0xEF,0xFF,0xAF,0xFA,0xFF,0xFB,0xFF,0xEA,0xAA,0xBF,0xFA,0xFA,0xFB,0xEB,
	0xEF,0xAA,0xBF,0xFE,0xFF,0xFA,0xBE,0xCC,0x07,0xAA,0xAD,0xAA,0xAA,0xB6,0xAA,0xAA,0xDA,0xCC,0x27,0xAA,
	0xDA,0xAA,0xAB,0xBF,0xFF,0xFE,0xCC,0x27,0xFF,0xFE,0xFF,0xFF,0xFF
};

// Final unpack length: 42880
// Decoded length: 10720 (first four bytes of buffer)
const uint8_t samplerScreenPackedBMP[3076] =
{
	0x00,0x00,0x29,0xE0,0xCC,0x4E,0x55,0x56,0x6A,0xCC,0x4D,0xAA,0xAB,0x6A,0xCC,0x37,0xAA,0xA5,0x55,0x96,
	0x96,0x5A,0x59,0x55,0x6A,0xCC,0x0D,0xAA,0xAB,0x6A,0xA5,0xCC,0x03,0x55,0x6A,0xCC,0x31,0xAA,0xAB,0x5F,
	0xD7,0x97,0x56,0x5D,0x7F,0xFA,0xCC,0x0D,0xAA,0xAB,0x6A,0xA6,0xCC,0x03,0xAA,0xBA,0xCC,0x32,0xAA,0x5E,
	0x97,0x97,0x55,0x5D,0x56,0xCC,0x0E,0xAA,0xAB,0x6A,0xA6,0xCC,0x03,0xAA,0xBA,0xCC,0x32,0xAA,0x5E,0x97,
	0x97,0x5D,0x5D,0x7F,0xCC,0x0E,0xAA,0xAB,0x6A,0xA6,0x56,0x66,0x9A,0x56,0xBA,0xAA,0xA5,0x56,0x55,0x5A,
	0x55,0xA5,0x55,0x96,0x96,0x95,0x5A,0x96,0xCC,0x25,0xAA,0x5E,0xA5,0x5F,0x5E,0x5D,0x55,0x6A,0xCC,0x0D,
	0xAA,0xAB,0x6A,0xA6,0x7F,0x77,0x9E,0x9F,0xBA,0xAA,0x97,0xFF,0xB5,0xFD,0x7D,0x6B,0x5F,0xD7,0x97,0x5F,
	0xFE,0x97,0xCC,0x25,0xAA,0xBE,0xAB,0xFE,0xBE,0xBE,0xFF,0xFA,0xCC,0x0D,0xAA,0xAB,0x6A,0xA6,0x5A,0x9B,
	0x9E,0x9E,0xBA,0xAA,0xA5,0x5A,0xA5,0xE9,0x55,0x7A,0x5E,0x97,0x97,0x95,0x6A,0xAF,0xCC,0x3A,0xAA,0xAB,
	0x6A,0xA6,0x7E,0x66,0x9E,0x9E,0xBA,0xAA,0xAB,0xD6,0xA5,0xE9,0x7D,0x7A,0x5E,0x97,0x97,0xAF,0x5A,0x96,
	0xCC,0x24,0xAA,0xA5,0x55,0xA5,0x5A,0x6A,0x9A,0x55,0xA5,0xA5,0xA5,0x56,0xCC,0x0A,0xAA,0xAB,0x6A,0xA6,
	0x56,0x77,0x9E,0x9E,0xBA,0xAA,0x95,0x5F,0xA5,0xE9,0x79,0x7A,0x5E,0xA5,0x5F,0x55,0x7E,0x97,0xCC,0x24,
	0xAA,0xAB,0x5F,0xE9,0x7E,0x5A,0x5E,0x97,0xE5,0x65,0xD7,0xFF,0xCC,0x0A,0xAA,0xAB,0x6A,0xA6,0xBF,0xBB,
	0xAE,0xAE,0xBA,0xAA,0xAF,0xFE,0xAB,0xEA,0xFA,0xFA,0xBE,0xAB,0xFE,0xBF,0xFA,0xAF,0xCC,0x25,0xAA,0x5E,
	0xA9,0x7A,0x55,0x5E,0x97,0xA5,0x55,0xD7,0x56,0xCC,0x0A,0xAA,0xAB,0x6A,0xA6,0xCC,0x03,0xAA,0xBA,0xCC,
	0x32,0xAA,0x5E,0xA9,0x7A,0x5F,0x5E,0x97,0xA5,0xD5,0xD7,0x97,0xCC,0x0A,0xAA,0xAB,0x6A,0xAB,0xCC,0x03,
	0xFF,0xFA,0xCC,0x32,0xAA,0x5E,0xA5,0x5A,0x5E,0x5E,0x55,0xA5,0xE5,0xE5,0x57,0xCC,0x0A,0xAA,0xAB,0x6A,
	0xCC,0x38,0xAA,0xBE,0xAB,0xFE,0xBE,0xBE,0xBF,0xEB,0xEB,0xEB,0xFF,0xCC,0x0A,0xAA,0xAB,0x6A,0xCC,0x4D,
	0xAA,0xAB,0x6F,0xCC,0x4D,0xFF,0xEB,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,
	0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,
	0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,
	0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,
	0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,
	0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,
	0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,
	0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,
	0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,
	0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,
	0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,
	0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,
	0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,
	0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,
	0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,
	0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,
	0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x69,0xCC,0x4D,0x55,0x5B,0x6A,0xCC,0x4D,0xAA,0xAB,0x6F,0xCC,0x4D,
	0xFF,0xEB,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,
	0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x6C,0xCC,0x4D,0x00,0x1B,0x69,0xCC,0x05,0x55,0x56,0xCC,0x0E,0x55,
	0x56,0xCC,0x12,0x55,0x56,0xCC,0x10,0x55,0x65,0xCC,0x10,0x55,0x5B,0x6A,0xCC,0x05,0xAA,0xAB,0x6A,0xCC,
	0x0D,0xAA,0xAB,0x6A,0xCC,0x11,0xAA,0xAB,0x6A,0xCC,0x0F,0xAA,0xB6,0xCC,0x10,0xAA,0xAB,0x6A,0xCC,0x05,
	0xAA,0xAB,0x6A,0xCC,0x0D,0xAA,0xAB,0x6A,0xCC,0x11,0xAA,0xAB,0x6A,0xCC,0x0F,0xAA,0xB6,0xCC,0x10,0xAA,
	0xAB,0x6A,0x56,0x6A,0x56,0x66,0xAA,0xA6,0xAB,0x6A,0x5A,0x5A,0x55,0xA5,0xA5,0x95,0x56,0x55,0x5A,0x55,
	0xA5,0x56,0x9A,0xA6,0xAB,0x6A,0xA5,0x56,0x5A,0x5A,0x55,0xA5,0xA5,0xAA,0xAA,0x55,0x6A,0x55,0xA5,0xA5,
	0xA5,0x56,0x55,0x5A,0xAB,0x6A,0xA9,0x55,0x69,0x56,0xA5,0x5A,0x6A,0x9A,0xAA,0xA9,0x56,0x96,0x96,0x55,
	0x5A,0xAA,0xB6,0xA5,0xA9,0xA5,0x65,0x69,0xCC,0x0B,0xAA,0xAB,0x6A,0x77,0x7A,0x77,0x77,0xA9,0x55,0xAB,
	0x6A,0x5E,0x5D,0x7D,0x65,0xE5,0xD7,0xFF,0x5F,0xFD,0x7D,0x65,0xF5,0x96,0x97,0xAB,0x6A,0x97,0xFF,0x5E,
	0x5D,0x7D,0x65,0xE5,0xEA,0xAA,0x5F,0x59,0x7D,0x65,0x65,0xD7,0xFF,0x5F,0xFE,0xAB,0x6A,0xAA,0xF5,0xF5,
	0xF5,0x97,0xD6,0x5A,0x5E,0xAA,0xA5,0xF5,0x97,0x97,0xB5,0xFE,0xAA,0xB6,0xA7,0x69,0xE7,0xF7,0x79,0xEA,
	0xCC,0x0A,0xAA,0xAB,0x6A,0x57,0x7A,0x57,0x9B,0xA9,0x55,0x6B,0x6A,0x55,0x5D,0x55,0x75,0xE5,0xD5,0x6A,
	0x55,0xA9,0x79,0x75,0x57,0xD5,0x57,0xAB,0x6A,0xA5,0x5A,0x55,0x5D,0x79,0x75,0x55,0xEA,0xAA,0x55,0x7D,
	0x55,0x75,0x55,0xD7,0x56,0x55,0xAA,0xAB,0x6A,0xAA,0x97,0xE5,0xE5,0xD7,0x97,0x55,0x5E,0xAA,0xA5,0xE5,
	0xD7,0x97,0xA5,0xEA,0xAA,0xB6,0xA7,0x79,0xE5,0x65,0x7A,0xEA,0xCC,0x0A,0xAA,0xAB,0x6A,0x7F,0x7A,0x77,
	0x9E,0xA9,0x55,0xFB,0x6A,0x5F,0x5D,0x7D,0x79,0x57,0xD7,0xFA,0x5F,0xE9,0x79,0x75,0xD7,0x97,0xD7,0xAB,
	0x6A,0xAB,0xD6,0x5F,0x5D,0x79,0x75,0xF5,0xEA,0xAA,0x5D,0x79,0x7D,0x75,0xD5,0xD7,0x97,0x5F,0xEA,0xAB,
	0x6A,0xAA,0x5F,0xA5,0xE5,0xD7,0x97,0x5F,0x5E,0xAA,0xA5,0xE5,0xD7,0x97,0xA5,0xEA,0xAA,0xB6,0xA7,0x79,
	0xEB,0x77,0xF9,0xCC,0x0B,0xAA,0xAB,0x6A,0x7A,0x56,0x77,0x9E,0xAA,0xF7,0xEB,0x6A,0x7E,0x9D,0x79,0x7A,
	0x5F,0x95,0x56,0x5E,0xAA,0x55,0xF5,0xE5,0x97,0x97,0xAB,0x6A,0x95,0x5F,0x5E,0x5E,0x55,0xF7,0xE9,0xEA,
	0xAA,0x5E,0x59,0x79,0x75,0xE5,0xE5,0x57,0x55,0x5A,0xAB,0x6A,0xA9,0x55,0x69,0x57,0xE5,0x5F,0x5E,0x5E,
	0xAA,0xA9,0x57,0xE5,0x5F,0xA5,0xEA,0xAA,0xB6,0xA5,0xB9,0xE5,0x77,0xA9,0xEA,0xCC,0x0A,0xAA,0xAB,0x6A,
	0xBA,0xBF,0xBB,0xAE,0xAA,0xAB,0xAB,0x6A,0xBA,0xAE,0xFA,0xFA,0xBE,0xAF,0xFF,0xBE,0xAA,0xBF,0xEB,0xEB,
	0xEF,0xAF,0xAB,0x6A,0xAF,0xFE,0xBE,0xBE,0xBF,0xEB,0xAA,0xEA,0xAA,0xBE,0xBE,0xFA,0xFB,0xEB,0xEB,0xFF,
	0xBF,0xFE,0xAB,0x6A,0xAA,0xFF,0xFA,0xFF,0xAB,0xFE,0xBE,0xBE,0xAA,0xAA,0xFF,0xAB,0xFE,0xAB,0xEA,0xAA,
	0xB6,0xAB,0xEA,0xEB,0xFB,0xAA,0xEA,0xCC,0x0A,0xAA,0xAB,0x6A,0xCC,0x05,0xAA,0xAB,0x6A,0xCC,0x0D,0xAA,
	0xAB,0x6A,0xCC,0x11,0xAA,0xAB,0x6A,0xCC,0x0F,0xAA,0xB6,0xCC,0x10,0xAA,0xAB,0xBF,0xCC,0x06,0xFF,0xBF,
	0xCC,0x0E,0xFF,0xBF,0xCC,0x12,0xFF,0xBF,0xCC,0x0F,0xFF,0xFB,0xCC,0x11,0xFF,0xCC,0x06,0x55,0x56,0xCC,
	0x0E,0x55,0x56,0xCC,0x12,0x55,0x56,0xCC,0x10,0x55,0x65,0xCC,0x10,0x55,0x56,0x6A,0xCC,0x05,0xAA,0xAB,
	0x6A,0xCC,0x0D,0xAA,0xAB,0x6A,0xCC,0x11,0xAA,0xAB,0x6A,0xCC,0x0F,0xAA,0xB6,0xCC,0x10,0xAA,0xAB,0x6A,
	0xCC,0x05,0xAA,0xAB,0x6A,0xCC,0x0D,0xAA,0xAB,0x6A,0xCC,0x11,0xAA,0xAB,0x6A,0xCC,0x0F,0xAA,0xB6,0xCC,
	0x10,0xAA,0xAB,0x6A,0xCC,0x05,0xAA,0xAB,0x6A,0xAA,0x55,0x6A,0x55,0xA9,0x55,0x95,0x5A,0x5A,0xAA,0x55,
	0xA5,0xA5,0xAA,0xAB,0x6A,0xAA,0xAA,0x95,0x59,0x69,0x69,0x56,0x96,0x96,0xAA,0xAA,0x55,0xA5,0xAA,0x96,
	0xAA,0xAA,0xAA,0xAB,0x6A,0x55,0x6A,0x55,0xA5,0xA5,0xA5,0x56,0x55,0x5A,0xAA,0xA9,0x56,0x96,0xAA,0x5A,
	0xAA,0xB6,0x96,0xAA,0x95,0x6A,0x55,0xA5,0x56,0xA9,0x6A,0xCC,0x07,0xAA,0xAB,0x6A,0xCC,0x05,0xAA,0xAB,
	0x6A,0xAA,0x5F,0x5A,0x97,0xE5,0xFF,0xD7,0xD6,0x5E,0xA9,0x7D,0x65,0xE5,0xEA,0xAB,0x6A,0xAA,0xAA,0x5F,
	0xFD,0x79,0x75,0xF5,0x97,0x97,0xAA,0xA9,0x7D,0x65,0xEA,0x97,0xAA,0xAA,0xAA,0xAB,0x6A,0x5F,0x59,0x7D,
	0x65,0x65,0xD7,0xFF,0x5F,0xFE,0xAA,0xA5,0xF5,0x97,0xAA,0x5E,0xAA,0xB6,0x97,0xAA,0x5F,0x59,0x7D,0x65,
	0xF5,0xA9,0x7A,0xCC,0x07,0xAA,0xAB,0x6A,0xCC,0x05,0xAA,0xAB,0x6A,0xAA,0x5E,0x5E,0x97,0xA9,0x56,0x95,
	0x5F,0x5E,0xA9,0x55,0x79,0x57,0xEA,0xAB,0x6A,0xAA,0xAA,0x95,0x69,0x55,0x75,0xE5,0xD5,0x57,0xAA,0xA9,
	0x55,0x75,0xEA,0x97,0xAA,0xAA,0xAA,0xAB,0x6A,0x55,0x7D,0x55,0x75,0x55,0xD7,0x56,0x55,0xAA,0xAA,0xA5,
	0x55,0xD7,0xAA,0x5E,0xAA,0xB6,0x97,0xAA,0x5E,0x5D,0x79,0x75,0x57,0xEA,0xFA,0xCC,0x07,0xAA,0xAB,0x6A,
	0xCC,0x05,0xAA,0xAB,0x6A,0xAA,0x5E,0x5E,0x97,0xAA,0xF5,0x97,0xFE,0x5E,0xA9,0x7D,0x7A,0x5F,0xAA,0xAB,
	0x6A,0xAA,0xAA,0xAF,0x59,0x7D,0x75,0xE5,0xD7,0xD7,0xAA,0xA9,0x7D,0x75,0xEA,0x97,0xAA,0xAA,0xAA,0xAB,
	0x6A,0x5D,0x79,0x7D,0x75,0xD5,0xD7,0x97,0x5F,0xEA,0xAA,0xA5,0xF5,0xD7,0xAA,0x5E,0xAA,0xB6,0x97,0xAA,
	0x5E,0x5D,0x79,0x75,0xFF,0xA9,0x6A,0xCC,0x07,0xAA,0xAB,0x6A,0xCC,0x05,0xAA,0xAB,0x6A,0xAA,0x55,0x7E,
	0x55,0xA5,0x57,0xD7,0xAA,0x55,0x59,0x79,0x7A,0x5E,0xAA,0xAB,0x6A,0xAA,0xAA,0x55,0x7D,0x79,0x79,0x57,
	0xDF,0xA7,0xAA,0xA9,0x79,0x75,0x55,0x95,0x56,0xAA,0xAA,0xAB,0x6A,0x5E,0x59,0x79,0x75,0xE5,0xE5,0x57,
	0x55,0x5A,0xAA,0xA5,0xE5,0xD5,0x56,0x55,0x5A,0xB6,0x95,0x56,0x95,0x7E,0x55,0xF5,0xEA,0xA9,0x7A,0xCC,
	0x07,0xAA,0xAB,0x69,0x55,0x95,0x56,0x95,0x69,0x55,0xAB,0x6A,0xAA,0xBF,0xFA,0xBF,0xEB,0xFF,0xAF,0xAA,
	0xBF,0xFE,0xFA,0xFA,0xBE,0xAA,0xAB,0x6A,0xAA,0xAA,0xBF,0xFA,0xFA,0xFA,0xFF,0xAE,0xAB,0xAA,0xAA,0xFA,
	0xFB,0xFF,0xEF,0xFF,0xAA,0xAA,0xAB,0x6A,0xBE,0xBE,0xFA,0xFB,0xEB,0xEB,0xFF,0xBF,0xFE,0xAA,0xAB,0xEB,
	0xEF,0xFF,0xBF,0xFE,0xB6,0xAF,0xFF,0xAF,0xFA,0xBF,0xEB,0xEA,0xAA,0xFA,0xCC,0x07,0xAA,0xAB,0x65,0xFF,
	0xED,0x7F,0x5F,0x59,0x7D,0x6B,0x6A,0xCC,0x0D,0xAA,0xAB,0x6A,0xCC,0x11,0xAA,0xAB,0x6A,0xCC,0x0F,0xAA,
	0xB6,0xCC,0x10,0xAA,0xAB,0x69,0x56,0xA9,0x7A,0x5E,0x5D,0x55,0xFB,0xBF,0xCC,0x0E,0xFF,0xBF,0xCC,0x12,
	0xFF,0xBF,0xCC,0x0F,0xFF,0xFB,0xCC,0x11,0xFF,0x6A,0xF5,0xA9,0x7A,0x5E,0x5D,0x7F,0xEB,0xCC,0x0E,0x55,
	0x56,0xCC,0x03,0x55,0x56,0xCC,0x03,0x55,0x56,0xCC,0x08,0x55,0x56,0xCC,0x07,0x55,0x59,0xCC,0x07,0x55,
	0x65,0xCC,0x10,0x55,0x56,0x65,0x57,0xE9,0x7A,0x95,0x7D,0x7A,0xAB,0x6A,0xCC,0x0D,0xAA,0xAB,0x6A,0xAA,
	0xAA,0xAA,0xAB,0x6A,0xAA,0xAA,0xAA,0xAB,0x6A,0xCC,0x07,0xAA,0xAB,0x6A,0xCC,0x06,0xAA,0xAD,0xCC,0x07,
	0xAA,0xB6,0xCC,0x10,0xAA,0xAB,0x6B,0xFF,0xAA,0xFA,0xAF,0xFA,0xFA,0xAB,0x6A,0xCC,0x0D,0xAA,0xAB,0x6A,
	0xAA,0xAA,0xAA,0xAB,0x6A,0xAA,0xAA,0xAA,0xAB,0x6A,0xCC,0x07,0xAA,0xAB,0x6A,0xCC,0x06,0xAA,0xAD,0xCC,
	0x07,0xAA,0xB6,0xCC,0x10,0xAA,0xAB,0x6A,0xCC,0x05,0xAA,0xAB,0x6A,0xAA,0xAA,0xA9,0x55,0xA9,0x56,0x96,
	0x96,0x95,0x59,0x55,0x6A,0xAA,0xAA,0xAB,0x6A,0x5A,0x56,0x56,0xAB,0x6A,0x56,0x5A,0x5A,0xAB,0x6A,0xAA,
	0x56,0x56,0x5A,0x56,0x56,0x56,0xAA,0xAB,0x6A,0xA5,0x65,0x66,0x65,0x66,0xA5,0x6A,0xAD,0x95,0x95,0x95,
	0x99,0x95,0x9A,0xAA,0x6A,0xB6,0x96,0x96,0x95,0x69,0x55,0x65,0x55,0xA9,0x6A,0xCC,0x07,0xAA,0xAB,0x6A,
	0xCC,0x05,0xAA,0xAB,0x6A,0xAA,0xAA,0xA9,0x7D,0x65,0xF5,0x95,0x97,0x5F,0xFD,0x7F,0xFA,0xAA,0xAA,0xAB,
	0x6A,0x76,0x7F,0x7F,0xAB,0x6A,0x7F,0x76,0x76,0xAB,0x6A,0xAA,0x7F,0x7F,0x76,0x9F,0x7F,0x77,0xAA,0xAB,
	0x6A,0xA7,0xF7,0x75,0x77,0x77,0xA7,0xFA,0xAD,0x9D,0xDF,0xDF,0xD5,0xDD,0xDE,0xAA,0x5A,0xB6,0x95,0x97,
	0x5F,0x5A,0xD7,0xF5,0xFF,0xE9,0x7A,0xCC,0x07,0xAA,0xAB,0x6A,0xCC,0x05,0xAA,0xAB,0x6A,0xAA,0xAA,0xA9,
	0x55,0xF5,0x55,0xD5,0x57,0x5D,0x59,0x56,0xAA,0xAA,0xAA,0xAB,0x6A,0x5B,0x5A,0x76,0xAB,0x6A,0x5A,0x77,
	0x77,0xAB,0x6A,0xAA,0x7A,0x5A,0x77,0x9E,0x5A,0x5B,0xAA,0xAB,0x6A,0xA5,0x65,0x77,0x75,0x77,0xA5,0xAA,
	0xAD,0x96,0xD6,0x95,0x9D,0xD5,0xDE,0xAA,0x56,0xB6,0x95,0x57,0x5E,0x5E,0x97,0xA5,0x5A,0xAA,0xFA,0xCC,
	0x07,0xAA,0xAB,0x6A,0xCC,0x05,0xAA,0xAB,0x6A,0xAA,0xAA,0xA9,0x75,0xE5,0xF5,0xD7,0x57,0x5E,0x5D,0x7F,
	0xAA,0xAA,0xAA,0xAB,0x6A,0x76,0x7E,0x77,0xAB,0x6A,0x7E,0x77,0x77,0xAB,0x6A,0xAA,0x7A,0x7E,0x77,0x9E,
	0x7E,0x76,0xAA,0xAB,0x6A,0xAB,0x77,0x77,0x77,0xF7,0xA7,0xEA,0xAD,0x9D,0x9F,0xAD,0xDD,0xDF,0xDE,0xAA,
	0x5F,0xB6,0x97,0x57,0x5E,0x5E,0x97,0xA5,0xFE,0xA9,0x6A,0xCC,0x07,0xAA,0xAB,0x6A,0xCC,0x05,0xAA,0xAB,
	0x6A,0xAA,0xAA,0xA9,0x79,0x65,0xE5,0xD7,0x97,0x95,0x5D,0x55,0x6A,0xAA,0xAA,0xAB,0x6A,0x5B,0x56,0x57,
	0xAB,0x6A,0x56,0x77,0x5B,0xAB,0x6A,0xAA,0x56,0x56,0x77,0x9E,0x56,0x77,0xAA,0xAB,0x6A,0xA5,0x77,0x77,
	0x77,0xA5,0x65,0x6A,0xAD,0x9D,0xD5,0x95,0xDD,0xDE,0x95,0x9A,0x7E,0xB6,0x97,0x97,0x95,0x7E,0x97,0xA5,
	0x55,0xA9,0x7A,0xCC,0x07,0xAA,0xAB,0x6A,0xCC,0x05,0xAA,0xAB,0x6A,0xAA,0xAA,0xAA,0xFA,0xFB,0xEB,0xEF,
	0xAF,0xAF,0xFE,0xFF,0xFA,0xAA,0xAA,0xAB,0x6A,0xBE,0xBF,0xBF,0xAB,0x6A,0xBF,0xBB,0xBE,0xAB,0x6A,0xAA,
	0xBF,0xBF,0xBB,0xAE,0xBF,0xBB,0xAA,0xAB,0x6A,0xAB,0xFB,0xBB,0xBB,0xAB,0xFB,0xFA,0xAD,0xAE,0xEF,0xEF,
	0xEE,0xEE,0xAF,0xEE,0xBA,0xB6,0xAF,0xAF,0xAF,0xFA,0xAF,0xAB,0xFF,0xEA,0xFA,0xCC,0x07,0xAA,0xAB,0x6A,
	0xCC,0x05,0xAA,0xAB,0x6A,0xCC,0x0D,0xAA,0xAB,0x6A,0xAA,0xAA,0xAA,0xAB,0x6A,0xAA,0xAA,0xAA,0xAB,0x6A,
	0xCC,0x07,0xAA,0xAB,0x6A,0xCC,0x06,0xAA,0xAD,0xCC,0x07,0xAA,0xB6,0xCC,0x10,0xAA,0xAB,0xBF,0xCC,0x06,
	0xFF,0xBF,0xCC,0x0E,0xFF,0xBF,0xCC,0x03,0xFF,0xBF,0xCC,0x03,0xFF,0xBF,0xCC,0x08,0xFF,0xBF,0xCC,0x06,
	0xFF,0xFE,0xCC,0x07,0xFF,0xFB,0xCC,0x11,0xFF,0xCC,0x06,0x55,0x56,0xCC,0x06,0x55,0x56,0xCC,0x06,0x55,
	0x56,0xCC,0x08,0x55,0x56,0xCC,0x08,0x55,0x56,0xCC,0x07,0x55,0x59,0xCC,0x07,0x55,0x65,0xCC,0x10,0x55,
	0x56,0x6A,0xCC,0x05,0xAA,0xAB,0x6A,0xCC,0x05,0xAA,0xAB,0x6A,0xCC,0x05,0xAA,0xAB,0x6A,0xCC,0x07,0xAA,
	0xAB,0x6A,0xCC,0x07,0xAA,0xAB,0x6A,0xCC,0x06,0xAA,0xAD,0xCC,0x07,0xAA,0xB6,0xCC,0x10,0xAA,0xAB,0x6A,
	0xCC,0x05,0xAA,0xAB,0x6A,0xCC,0x05,0xAA,0xAB,0x6A,0xCC,0x05,0xAA,0xAB,0x6A,0xCC,0x07,0xAA,0xAB,0x6A,
	0xCC,0x07,0xAA,0xAB,0x6A,0xCC,0x06,0xAA,0xAD,0xCC,0x07,0xAA,0xB6,0xCC,0x10,0xAA,0xAB,0x6A,0xAA,0xA5,
	0x66,0x65,0x6A,0xAA,0xAB,0x6A,0xAA,0x56,0x56,0x56,0x66,0xAA,0xAB,0x6A,0xA5,0xCC,0x03,0x65,0x6A,0xAB,
	0x6A,0xAA,0x66,0x56,0x6A,0x66,0x66,0x56,0xAA,0xAB,0x6A,0x56,0x66,0x5A,0x56,0x56,0x56,0x5A,0x56,0xAB,
	0x6A,0xA5,0x69,0xA6,0x6A,0xA5,0xA5,0x6A,0xAD,0xA9,0x5A,0x69,0xA9,0x59,0x59,0x59,0x5A,0xB6,0xA5,0x5A,
	0x55,0x59,0x55,0x69,0x55,0xA9,0x6A,0xCC,0x07,0xAA,0xAB,0x6A,0xAA,0xA7,0xF7,0x79,0xFA,0xAA,0xAB,0x6A,
	0xAA,0x7F,0x77,0x77,0x77,0xAA,0xAB,0x6A,0xA7,0x77,0x77,0xF9,0xF7,0xFA,0xAB,0x6A,0xAA,0x77,0x77,0x7A,
	0x77,0x57,0x7F,0xAA,0xAB,0x6A,0x9F,0x77,0x76,0x7F,0x9F,0x77,0x76,0x7F,0xAB,0x6A,0xA7,0xF9,0xE7,0x7A,
	0xA7,0x67,0xFA,0xAD,0xA9,0xFE,0x79,0xEA,0x7D,0xFD,0xDD,0xFE,0xB6,0x97,0xD6,0x5F,0xFD,0x7F,0xF5,0xFF,
	0xE9,0x7A,0xCC,0x07,0xAA,0xAB,0x6A,0xAA,0xA7,0xA7,0x79,0xEA,0xAA,0xAB,0x6A,0xAA,0x7A,0x77,0x57,0x9B,
	0xAA,0xAB,0x6A,0xA5,0x75,0x75,0x69,0xE5,0xAA,0xAB,0x6A,0xAA,0x77,0x77,0x7A,0x77,0x77,0x5A,0xAA,0xAB,
	0x6A,0x9E,0x77,0x77,0x5A,0x9E,0x77,0x77,0x5A,0xAB,0x6A,0xA5,0xA9,0xE9,0xBA,0xA7,0x77,0xAA,0xAD,0xA9,
	0x6A,0x79,0xEA,0x79,0x69,0x6D,0x5A,0xB6,0x97,0x97,0x55,0xA9,0x56,0xA9,0x56,0xAA,0xFA,0xCC,0x07,0xAA,
	0xAB,0x6A,0xAA,0xA7,0xA7,0x79,0xEA,0xAA,0xAB,0x6A,0xAA,0x7A,0x77,0x7F,0x9E,0xAA,0xAB,0x6A,0xA7,0xF7,
	0x7B,0x79,0xE7,0xEA,0xAB,0x6A,0xAA,0x77,0x77,0x7A,0x77,0x77,0x7E,0xAA,0xAB,0x6A,0x9E,0x77,0x77,0x7E,
	0x9E,0x77,0x77,0x7E,0xAB,0x6A,0xA7,0xE9,0xE6,0x6A,0xA7,0x77,0xAA,0xAD,0xA9,0xFA,0x79,0xEA,0x79,0xF9,
	0xDA,0xDE,0xB6,0x97,0x97,0x5F,0xE9,0x7F,0xAA,0xF5,0xA9,0x6A,0xCC,0x07,0xAA,0xAB,0x6A,0xAA,0xA5,0x65,
	0x79,0xEA,0xAA,0xAB,0x6A,0xAA,0x56,0x57,0x7A,0x9E,0xAA,0xAB,0x6A,0xA7,0xA7,0x75,0x79,0xE5,0x6A,0xAB,
	0x6A,0xAA,0x9B,0x57,0x56,0x57,0x77,0x56,0xAA,0xAB,0x6A,0x9E,0x57,0x77,0x56,0x9E,0x57,0x77,0x56,0xAB,
	0x6A,0xA7,0xA9,0xE7,0x7A,0xA5,0xB5,0x6A,0xAD,0xA9,0xEA,0x79,0x5A,0x79,0x59,0xDD,0x5E,0xB6,0xA5,0x5F,
	0x5E,0xA9,0x7A,0xA5,0x57,0xE9,0x7A,0xCC,0x07,0xAA,0xAB,0x6A,0xAA,0xAB,0xFB,0xFA,0xEA,0xAA,0xAB,0x6A,
	0xAA,0xBF,0xBF,0xBA,0xAE,0xAA,0xAB,0x6A,0xAB,0xAB,0xBB,0xFA,0xEB,0xFA,0xAB,0x6A,0xAA,0xAE,0xBF,0xBF,
	0xBF,0xBB,0xBF,0xAA,0xAB,0x6A,0xAE,0xBF,0xBB,0xBF,0xAE,0xBF,0xBB,0xBF,0xAB,0x6A,0xAB,0xAA,0xEB,0xBA,
	0xAB,0xEB,0xFA,0xAD,0xAA,0xEA,0xBA,0xFE,0xBA,0xFE,0xEE,0xFE,0xB6,0xAB,0xFE,0xBE,0xAA,0xFA,0xAB,0xFF,
	0xAA,0xFA,0xCC,0x07,0xAA,0xAB,0x6A,0xCC,0x05,0xAA,0xAB,0x6A,0xCC,0x05,0xAA,0xAB,0x6A,0xCC,0x05,0xAA,
	0xAB,0x6A,0xCC,0x07,0xAA,0xAB,0x6A,0xCC,0x07,0xAA,0xAB,0x6A,0xCC,0x06,0xAA,0xAD,0xCC,0x07,0xAA,0xB6,
	0xCC,0x10,0xAA,0xAB,0xBF,0xCC,0x06,0xFF,0xBF,0xCC,0x06,0xFF,0xBF,0xCC,0x06,0xFF,0xBF,0xCC,0x08,0xFF,
	0xBF,0xCC,0x08,0xFF,0xBF,0xCC,0x06,0xFF,0xFE,0xCC,0x07,0xFF,0xFB,0xCC,0x11,0xFF
};