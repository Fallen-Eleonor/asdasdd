#include <unistd.h>

void mx_printchar(char c) {
	unsigned char mass[] = {c};
	write(1, mass, 1);
}

