#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main() {
	int pid = fork(); 
	if (pid == 0) {
		execlp("ls", "ls", NULL); 
		printf("this will only happen if exec fails\n"); 
	} else {
		wait(NULL); 
		printf("we're done\n"); 
	}
	return 0; 
}