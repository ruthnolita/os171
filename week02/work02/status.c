#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void main(){
	printf("PID[%d]\n", getpid(), getppid());
	sleep(1);
}
