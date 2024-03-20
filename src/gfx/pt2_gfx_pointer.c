#include <stdint.h>
#include "../pt2_palette.h"

/* This graphical table has to be in the palette kind of data
 * because it changes color according to status. Easier this
 * way.
 */

const uint8_t mousePointerBMP[256] =
{
	PAL_MOUSE_1,PAL_MOUSE_1,PAL_MOUSE_1,PAL_MOUSE_1,PAL_MOUSE_1,PAL_MOUSE_1,
	PAL_MOUSE_1,PAL_MOUSE_1,PAL_MOUSE_1,PAL_MOUSE_1,PAL_MOUSE_1,PAL_MOUSE_1,
	PAL_MOUSE_1,PAL_MOUSE_1,PAL_MOUSE_1,PAL_MOUSE_1,PAL_MOUSE_1,PAL_MOUSE_2,
	PAL_MOUSE_2,PAL_MOUSE_2,PAL_MOUSE_2,PAL_MOUSE_2,PAL_MOUSE_2,PAL_MOUSE_2,
	PAL_MOUSE_2,PAL_MOUSE_2,PAL_MOUSE_2,PAL_MOUSE_2,PAL_MOUSE_2,PAL_MOUSE_2,
	PAL_MOUSE_1,PAL_COLORKEY, PAL_MOUSE_1,PAL_MOUSE_2,PAL_MOUSE_3,PAL_MOUSE_3,
	PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,
	PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_2,PAL_MOUSE_1,PAL_COLORKEY, PAL_COLORKEY,
	PAL_MOUSE_1,PAL_MOUSE_2,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,
	PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_2,
	PAL_MOUSE_1,PAL_COLORKEY, PAL_COLORKEY, PAL_COLORKEY, PAL_MOUSE_1,PAL_MOUSE_2,
	PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,
	PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_2,PAL_MOUSE_1,PAL_COLORKEY, PAL_COLORKEY,
	PAL_COLORKEY, PAL_COLORKEY, PAL_MOUSE_1,PAL_MOUSE_2,PAL_MOUSE_3,PAL_MOUSE_3,
	PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,
	PAL_MOUSE_3,PAL_MOUSE_2,PAL_MOUSE_1,PAL_COLORKEY, PAL_COLORKEY, PAL_COLORKEY,
	PAL_MOUSE_1,PAL_MOUSE_2,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,
	PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,
	PAL_MOUSE_2,PAL_MOUSE_1,PAL_COLORKEY, PAL_COLORKEY, PAL_MOUSE_1,PAL_MOUSE_2,
	PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,
	PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_2,
	PAL_MOUSE_1,PAL_COLORKEY, PAL_MOUSE_1,PAL_MOUSE_2,PAL_MOUSE_3,PAL_MOUSE_3,
	PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,
	PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_2,PAL_MOUSE_1,
	PAL_MOUSE_1,PAL_MOUSE_2,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,
	PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,
	PAL_MOUSE_3,PAL_MOUSE_2,PAL_MOUSE_1,PAL_COLORKEY, PAL_MOUSE_1,PAL_MOUSE_2,
	PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_2,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,
	PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_2,PAL_MOUSE_1,
	PAL_COLORKEY, PAL_COLORKEY, PAL_MOUSE_1,PAL_MOUSE_2,PAL_MOUSE_3,PAL_MOUSE_2,
	PAL_MOUSE_1,PAL_MOUSE_2,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,
	PAL_MOUSE_3,PAL_MOUSE_2,PAL_MOUSE_1,PAL_COLORKEY, PAL_COLORKEY, PAL_COLORKEY,
	PAL_MOUSE_1,PAL_MOUSE_2,PAL_MOUSE_2,PAL_MOUSE_1,PAL_COLORKEY, PAL_MOUSE_1,
	PAL_MOUSE_2,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_3,PAL_MOUSE_2,PAL_MOUSE_1,
	PAL_COLORKEY, PAL_COLORKEY, PAL_COLORKEY, PAL_COLORKEY, PAL_MOUSE_1,PAL_MOUSE_2,
	PAL_MOUSE_1,PAL_COLORKEY, PAL_COLORKEY, PAL_COLORKEY, PAL_MOUSE_1,PAL_MOUSE_2,
	PAL_MOUSE_3,PAL_MOUSE_2,PAL_MOUSE_1,PAL_COLORKEY, PAL_COLORKEY, PAL_COLORKEY,
	PAL_COLORKEY, PAL_COLORKEY, PAL_MOUSE_1,PAL_MOUSE_1, PAL_COLORKEY,PAL_COLORKEY,
	PAL_COLORKEY, PAL_COLORKEY, PAL_COLORKEY, PAL_MOUSE_1,PAL_MOUSE_2,PAL_MOUSE_1,
	PAL_COLORKEY, PAL_COLORKEY, PAL_COLORKEY, PAL_COLORKEY, PAL_COLORKEY, PAL_COLORKEY,
	PAL_MOUSE_1,PAL_COLORKEY, PAL_COLORKEY, PAL_COLORKEY, PAL_COLORKEY, PAL_COLORKEY,
	PAL_COLORKEY, PAL_COLORKEY, PAL_MOUSE_1,PAL_COLORKEY, PAL_COLORKEY, PAL_COLORKEY,
	PAL_COLORKEY, PAL_COLORKEY, PAL_COLORKEY, PAL_COLORKEY
};