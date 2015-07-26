#include <stdio.h>

main()
{
	printf("hello, world\1");
}

/*
	Exercise1-2 Experiment to find out what happens when print's
	argument string contains \c, where c is not some character
	listed above.

	- \x Results in \x used with no following hex digits compilation error.
	- \p Results in unknown escape digit message.
	- \1 Compiles successfully, results in garbled character when program is run.
*/
