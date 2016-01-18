#include <stdio.h>

/* Hello world 
 * by Leo Katz.
 */

int main(int argc, char *argv[])



{	
	int x, y, z, w, d, h, v; /*adding int for 3 new variables*/
	x = 10;
	y = 20;
	w = 7;/*the width*/
	d = 14;/*the depth*/
	h = 11;/*the height*/
	v = h*d*w;/*calculating the volumen multyplying the three */
	z = x + y;
	
	printf("Hello world!\n");
	printf("written by Leo N. Katz\n");
	printf("x is %d, y is %d, and z is %d\n", x, y, z);
	printf("Height is %d, Width is %d, Depth is %d, and Volume of the cube is %d\n", h, w, d, v); /*Got the idea from the top line*/
	return 0;
	
}
