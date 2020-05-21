/*
 * driver...
 *
 * project: hw8
 * name: Dennis Pinchuk
 * user: Pinchuk1
 * date: 05/14/2020
 * file: driver.c
 */


#include "hw8.h"



int main(int argc, char* argv[])
{
    

   
	Class * class = readClass(argv[1]);
	sortClass(class);
	freeClass(class);
   
	return 0;
}
