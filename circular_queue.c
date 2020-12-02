#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
# define MAX_SIZE 10
struct queue{
	int data[MAX_SIZE];
	int rear;
	int front;
	
};
typedef struct queue NODE ;
void Enqueue(NODE *q){
	int data;
	if ((q->rear == MAX_SIZE-1 && q->front == 0  )|| q->rear == q->front-1){
		printf("The stack is full ");
	}
	else{
		if(q->rear==-1 && q->front ==-1){
			q->rear=0;
			q->front =0;
			printf("Enter the data:");
			scanf("%d",&data);
		
			q->data[q->rear]=data;
			//printf(q->data[q->rear]);
		}
		else{
			q->rear=(q->rear+1)%MAX_SIZE;
			printf("Enter the data:");
			scanf("%d",&data);
			
			q->data[q->rear]=data;
			
		}
	}
}

void dequeue(NODE  *q){
	int data;
	if(q->front ==-1 && q->rear ==-1 ){
		printf("The stack is empty ");
		
	}
	else{
		if (q->front == q->rear){
			data=q->data[q->front];
			q->front=-1;
			q->rear=-1;
			printf("%d",data);
		}
		else{
			data= q->data[q->front];
			q->front = (q->front + 1)% MAX_SIZE;
			printf("%d",data);
		}
	}
}
int main(){
	NODE *q;
	q= (NODE *) malloc(sizeof(NODE));
	q->front=-1;
	q->rear=-1;
	Enqueue(q);
	dequeue(q);
	free(q);
	return 0;
}






















