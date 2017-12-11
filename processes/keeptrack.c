#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main() {
	int pid = fork(); 
	if (pid == 0) {
		int child = getpid(); 
		printf("I'm the child %d in group %d\n", child, getpgid(child)); 
	} else {
		int mother = getpid(); 
		printf("I'm the mother %d in group %d\n", mother, getpgid(mother)); 
		wait(NULL); 
	}
	return 0; 
}