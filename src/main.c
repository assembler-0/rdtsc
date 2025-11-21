#include <rdtsc.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <inttypes.h>

#define MAX_SIZE 2

void version() {
	puts(RDTSC_VERSION);
	puts(RDTSC_BUILD);
}

void help() {
	puts("rdtsc: read timestamp counter (TSC)");
	puts("-- -h     - show this help");
	puts("-- -v     - show version and build date");
	puts("-- -p     - show rdtscp");
	puts("-- <none> - show rdtsc");
}

int main(int argc, char ** restrict argv) {
	(void)argc;
	if (argv[1]) { 
		if (strncmp(argv[1], "-h", MAX_SIZE) == 0)
			help();
		else if (strncmp(argv[1], "-v", MAX_SIZE) == 0)
			version();
		else if (strncmp(argv[1], "-p", MAX_SIZE) == 0)
			printf("%" PRIu64 "\n", rdtscp());
		else 
			printf("Unknown argument: %s\n", argv[1]);
		exit(0);
	}
	printf("%" PRIu64 "\n", rdtsc());
	exit(0);
}
