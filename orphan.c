#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){

//create a child process
int cpid=fork();

if (cpid>0)

    printf("I am parent!");

	//pid is 0 in child process
	//negative in fork() fails

else if (cpid==0){

    sleep(30);
    printf("I am child!");

}
return 0;

}
