#include<stdio.h>               // for printf and scanf
#include<unistd.h>             // for fork() & getpid()
#include<sys/types.h>         // for fork() & getpid()

int main(){
	
	int n;
	
	printf("# Enter the no. of times you want to run the fork system call: ");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		pid_t r;
		r = fork();
		if(r==0){
			printf("Current child process pid is %d \n", getpid());
		}
	}

	return 0;
}

