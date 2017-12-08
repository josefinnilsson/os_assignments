#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	foo: 
		printf("the code: %p\n", &&foo); 

		fgetc(stdin); 
		return 0; 
}