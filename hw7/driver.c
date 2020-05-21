/*
 * driver for Graham's scan
 *
 * project: hw7
 * name: Dennis Pinchuk
 * user: Pinchuk1
 * date: 05/03/2020
 * file: driver.c
 */


#include "hw7.h"



int main(int argc, char* argv[])
{
  
    int n, seed, c;

	/* command line options
	 * ./drive -n nValue -s seedValue
	 */
	
	while ((c = getopt(argc, argv, "n:s:")) != -1) {
		switch (c) {
		case 'n': sscanf(optarg, "%u", &n); break;
		case 's': sscanf(optarg, "%d", &seed); break;
		default: break;
		}
	}
	printf("Seed: %d		Points Number: %d\n", seed,n);


    Point *data = createData(seed,n);

	int *index = sorting_angle(data, n);
    convex(data,index,n);
    free(index);
	free(data);
	return 0;
}
