
#include<stdio.h>
#define capacity 4

int stack[capacity];
int top =-1;

void push(int x){
	if(top<capacity-1){
		top= top+1;
		stack[top]=x;
		printf("Successfuly Add :%d\n",x);
	}
	else{
		printf("No Space !!");
	}
}

int  pop(){
	if(top>=0){
		int value =stack[top];
		top = top-1;
		return value;
	}
	
}

int peek(){
	if(top>=0){
		return stack[top];
	}
	else{
		printf("Stack is empty !!");
	}
}
int main(){
	
	push(23);
	push(5);
	push(3);
	push(2);
	push(13);
	printf("\nPeek top value of the stack is :%d",peek());
	printf("\npop top value of the stack is :%d",pop());
		printf("\npop top value of the stack is :%d",pop());
	
	
}
