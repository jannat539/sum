#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
//child become zombie as parent is sleeping

pid_t child_pid=fork();
      //parent process
if (child_pid>0)

    sleep(50);

     //child process	
else 

    exit(0);

return 0;

}
