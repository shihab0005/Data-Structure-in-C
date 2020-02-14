#include<stdio.h>
#define N 5

int front=-1,rear=-1,i;
int queue[N];

void enqueue(int a)
{
	if(rear==N-1){
		printf("Queue IS Full !\n");
	}
	else
	{
		if(front==-1)
		{
		front=0;
	    }
	    rear++;
	    queue[rear]=a;
	    printf("%d is Insert Succesfully In Queue\n",a);
		
	}	
}

void dequeue()
{
	
	if(rear==-1 || front>rear){
		printf("Queue Is Empty **");
	}
	else
	{
	int value=queue[front];
		printf("Delete %d from Queue.\n",value);
		front++;
	}
}
void Display()
{
	if(rear==-1 || front>rear)
	{
		printf("Queue Is Empty **\n");
		
	}
	else{
		printf("\n\nAll The Insertet Value In Queue :\n");
		for(i=front;i<=rear;i++){
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
	dequeue();
	Display();
	
	
}
