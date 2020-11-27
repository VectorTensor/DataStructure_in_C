// Implementation of stack 

#include <stdio.h>
#include <conio.h>

# define MAXSIZE 20

struct stack {//Structure of stack 
	int data[MAXSIZE];
	int top;
};

typedef struct stack NODE;
// Push function of the stack
void push (NODE *pu){
	int x;
	if(pu->top >= MAXSIZE-1){
		printf("The stack is full");
		return;
		
	}
	else{
		printf("Enter the data \n");
		scanf("%d",&x);	
		pu->top++;
		pu->data[pu->top]=x;
		
	}
	
}
// pop function of the stack 
void pop (NODE * po){
	int x;
	if (po->top<0){
		printf("The stack is empty");
		return ;
	}
	else{
		x= po->data[po->top];
		po->top--;
		
	}
	printf("%d",x);
	
}
// Inorder to create a new stack make a pointer of the NODE and allocate memory to it using malloc then make initialize top=-1

int main(){
	NODE *s;// Initializing the node pointer 
	s= (NODE *) malloc(sizeof(NODE));
	s->top=-1;
	push(s);
	pop(s);
	free(s);
	getch();
	return 0;
}

