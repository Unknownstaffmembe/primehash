#include <stdio.h>
#include "primehash.h"

int main()
{
	char in[1024];
	struct phash out;
	size_t tmp;
	int ret;

	while(fgets(in, 1024, stdin)) {
		out = hash(in);
		printf("HASH VALUE: %lu\nXOR SIGNATURE VALUE: %d\n", out.dig, (int) out.xorsig);
	};

	return 0;
}
