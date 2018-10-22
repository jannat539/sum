#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int data_set[1000];
int chunk_size=100;

void * Add(void *arg)
{
	int start = (int)arg;
	int end = start + chunk_size;
        int sum =0;
        int i=0;
for(i=start;i<end;i++){
sum=sum+data_set[i];
}
	return ((void*)sum);
}


int main ()
{       
              int status_t[10];
              pthread_t thread_t[10];

        for(int i=0;i<1000;i++)
        {
             data_set[i]=i;
        }

        for(int i=0;i<10;i++)
         {
            pthread_create(&thread_t[i],NULL,Add,(void*)(i*chunk_size));

         }
        
	
        for(int i=0;i<10;i++)
        {
             pthread_join(thread_t[i],(void**) &status_t[i]);
         }
        
       
        
        int sum=0;
        for(int i=0;i<10;i++)
        {
          sum+=status_t[i];

         }

	printf("\nValue returned By Thread %d\n", sum);

	return 0;
}
