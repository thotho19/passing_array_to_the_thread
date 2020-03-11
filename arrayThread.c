#include<pthread.h>
#include<stdio.h>

void *sum(void *arg){
    int *num = (int *)arg;
    printf("The result of ADDITION: %d\n",num[0]+num[1]);
}
void *sub(void *arg){
    int *num = (int *)arg;
     printf("The result of SUBTRACTION: %d\n",num[0]-num[1]);
}
int main(){
        int num[]={10,20};
        pthread_t t1,t2;
        pthread_create(&t1, NULL , sum,num);
        pthread_join(t1,NULL);
        pthread_create(&t2, NULL , sub,num);
        pthread_join(t2,NULL);
    return 0;
}

