#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main() {
	int pid; 
	int x = 123; 
	pid = fork(); //create a new process and returns process ID
	if (pid == 0){
		printf(" child: x is %d\n and the address is 0x%p\n", x, &x); 
		x = 42; 
		sleep(1); 
		printf(" child: x is %d\n", x); 
	} else {
		printf(" mother: x is %d\n", x); 
		x = 13; 
		sleep(1); 
		printf(" mother: x is %d\n", x); 
		wait(NULL); 
		
	}
	return 0; 
}