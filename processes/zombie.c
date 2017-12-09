#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main() {
	int pid = fork(); //create a new process and returns process ID
	if (pid == 0){
		printf("check the status\n"); 
		sleep(10); 
		printf("and again\n"); 
		return 42; 
	} else {
		sleep(20); 
		int res; 
		wait(&res); 
		printf("the result was %d\n", WEXITSTATUS(res)); 
		printf("and again\n"); 
		sleep(10); 
	}
	//printf("This is the end (%d)\n", getpid()); 
	return 0; 
}