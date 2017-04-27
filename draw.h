#ifndef __DRAW_H__
#define __DRAW_H__

#include <psp2/display.h>

#define CYAN    0x00FFFF00
#define MAGENTA 0x00FF00FF
#define YELLOW  0x0000FFFF
#define WHITE 	0x00FFFFFF
#define BLACK 	0x00000000

#define RGB(R, G, B)    (((B) << 16) | ((G) << 8) | (R))
#define RGBT(R, G, B, T) (((T) << 24) | ((B) << 16) | ((G) << 8) | (R))

#define CENTER(num) ((960 / 2)-(num*(16/2)))

/*
*	Sets up draw functions.
*/
int drawInit(void);

/*
*	This function sets the string colour, as well as the background colour.
*/
void drawSetColour(int fg_col, int bg_col);

/*
*	This function draws a string onto the screen.
*/
int drawString(int sx, int sy, const char *msg);

/*
*	This function draws a string onto the center of the screen.
*/
int drawStringCenter(int sy, const char *msg);

/*
*	This function draws a string onto the screen with string specifier formats.
*/
int drawStringf(int sx, int sy, const char *msg, ...);

/*
*	This function sets the frame buffer.
*/
int drawSetFrameBuf(const SceDisplayFrameBuf *param);

#endif
