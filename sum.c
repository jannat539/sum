#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<string.h>

int main(){

int fd1[2],fd2[2],fd3[2],fd4[2],fd5[2],fd6[2],fd7[2],fd8[2],fd9[2],fd10[2];
pipe(fd1),pipe(fd2),pipe(fd3),pipe(fd4),pipe(fd5),pipe(fd6),pipe(fd7),pipe(fd8),pipe(fd9),pipe(fd10);
int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0,sum10=0;


int cpid1=fork();

if(cpid1==0){
	
	for(int i=0;i<100;i++){

	sum1=sum1+i;
	}

	close(fd1[0]);
	write(fd1[1],&sum1,sizeof(sum1));
        
}


else{

int cpid2=fork();

if(cpid2==0){
	
	for(int i=100;i<200;i++){
	sum2=sum2+i;
	}

	close(fd2[0]);
	write(fd2[1],&sum2,sizeof(sum2));
        
}

else{

	int cpid3=fork();

	if(cpid3==0){
	
	for(int i=200;i<300;i++){
	sum3=sum3+i;
	}

	close(fd3[0]);
	write(fd3[1],&sum3,sizeof(sum3));
        
}

else{

int cpid4=fork();

if(cpid4==0){

for(int i=300;i<400;i++){
sum4=sum4+i;
}

close(fd4[0]);
write(fd4[1],&sum4,sizeof(sum4));

}

else{

int cpid5=fork();

if(cpid5==0){

for(int i=400;i<500;i++){
sum5=sum5+i;
}

close(fd5[0]);
write(fd5[1],&sum5,sizeof(sum5));

}

else{

int cpid6=fork();

if(cpid6==0){

for(int i=500;i<600;i++){
sum6=sum6+i;
}

close(fd6[0]);
write(fd6[1],&sum6,sizeof(sum6));

}

else{

int cpid7=fork();

if(cpid7==0){

for(int i=600;i<700;i++){
sum7=sum7+i;
}

close(fd7[0]);
write(fd7[1],&sum7,sizeof(sum7));

}

else{

int cpid8=fork();

if(cpid8==0){

for(int i=700;i<800;i++){
sum8=sum8+i;
}

close(fd8[0]);
write(fd8[1],&sum8,sizeof(sum8));

}

else{

int cpid9=fork();

if(cpid9==0){

for(int i=800;i<900;i++){
sum9=sum9+i;

}

close(fd9[0]);
write(fd9[1],&sum9,sizeof(sum9));

}

else{

int cpid10=fork();

if(cpid10==0){

for(int i=900;i<1000;i++){
sum10=sum10+i;
}

close(fd10[0]);
write(fd10[1],&sum10,sizeof(sum10));

}

else{

for(int i=0;i<10;i++){

wait(0);

}

int Csm1=0,Csm2=0,Csm3=0,Csm4=0,Csm5=0,Csm6=0,Csm7=0,Csm8=0,Csm9=0,Csm10=0;
close(fd1[1]);
read(fd1[0],&Csm1,sizeof(Csm1));
close(fd2[1]);
read(fd2[0],&Csm2,sizeof(Csm2));
close(fd3[1]);
read(fd3[0],&Csm3,sizeof(Csm3));
close(fd4[1]);
read(fd4[0],&Csm4,sizeof(Csm4));
close(fd5[1]);
read(fd5[0],&Csm5,sizeof(Csm5));
close(fd6[1]);
read(fd6[0],&Csm6,sizeof(Csm6));
close(fd7[1]);
read(fd7[0],&Csm7,sizeof(Csm7));
close(fd8[1]);
read(fd8[0],&Csm8,sizeof(Csm8));
close(fd9[1]);
read(fd9[0],&Csm9,sizeof(Csm9));
close(fd10[1]);
read(fd10[0],&Csm10,sizeof(Csm10));

int Psum=Csm1+Csm2+Csm3+Csm4+Csm5+Csm6+Csm7+Csm8+Csm9+Csm10;

printf("%d\n",Psum);



}
}
}
}
}
}
}
}
}
}
return 0;
}


