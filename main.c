#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void * Thread0() {
	int i;
	for(i=0;i<50;i++){
		sleep(2);
		printf("Thread 0  -%d  \n",i);
	}
 }
void * Thread1(){
	int i;
	for(i=0;i<100;i++){
		sleep(1);
		printf("Thread 1 - %d \n",i);
	}
}
int main (){ 
	pthread_t t0,t1;
	pthread_create(&t0,NULL,Thread0,NULL);
	pthread_create(&t1,NULL,Thread1,NULL);
	pthread_join(t0,NULL);
	pthread_join(t1,NULL);
	printf("Este é o principal após a junção dos filhos \n");
	
}
