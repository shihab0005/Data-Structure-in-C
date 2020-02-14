#include<stdio.h>
#define N 5

int queue[N];
int front=0,rear=0,i;

void enqueue(int x)
{
	if(N==rear)
	{
		printf("Queue Is Full !! \n");
	}
	else
	{
		queue[rear]=x;
		printf("%d is Insert Succesfully In Queue\n",x);
		rear++;
	}
	
}
void dequeue()
{
	if(front==rear)
	{
		printf("Queue Is Empty **\n");	
		
	}
	else
	{
		printf("Delete %d from Queue.\n",queue[front]);
		for(i=0;i<rear-1;i++){
			queue[i]=queue[i+1];
		}
		rear--;
	}
	
}
void Display()
{
	if(front==rear)
	{
		printf("Queue Is Empty **\n");
		
	}
	else{
		printf("\n\nAll The Insertet Value In Queue :\n");
		for(i=front;i<rear;i++){
			printf("%d ",queue[i]);
		}
	}
}



int main(){
	
	enqueue(3);
	enqueue(20);
	enqueue(23);
	enqueue(13);
	enqueue(4);
	enqueue(24);
	dequeue();
	dequeue();
	Display();
	
	
}
