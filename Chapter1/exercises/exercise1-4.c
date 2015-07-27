/*
	Exercise1-4 Write a program to print the corresponding Celsius to Fahrenheit table
*/

#include <stdio.h>

/* print Celsius-Fahrenheit table
	for celsius = 0, 10, ..., 100 */

main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = -20;	/* lower limit of temperature scale */
	upper = 100; /* upper limit */
	step = 10; /* step size */

	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
