#include<stdlib.h>

#include<stdio.h>

#define size 50

int Q[size], rear=-1,front=-1;

int isempty()

{

	if(front == -1)		
	
	return 1;

	else

		return 0;

}

int isfull()

{

	if((front == rear + 1) || ((front == 0) && (rear == size - 1)))

		return 1;

	else

		return 0;

}

void InsertQ(int item)

{

	if(isfull())

		printf("Queue is Full");

	else

		{

			if(front == -1)

				front = rear = 0;

			else

				rear = (rear + 1) % size;

		Q[rear] = item;

		}

	

}

int DeleteQ()

{

	int item;

	if(isempty()){

		printf("Queue is empty");

	}

	else{

		item=Q[front];

		if(front == rear)

			front = rear = -1;

		else

			front = (front +1)%size;

	}

	return item;

}

void Display()

{

	int i;

	printf("\n Queue :");

	for (i = front; i != rear; i = (i + 1) % size) {

		printf("%d ", Q[i]);

	}

	printf("%d ", Q[i]);

}

int main()

{

	int ch;

	printf("Queue");

	do{

		printf("\n1. Insert 2. Delete 3.Display 4.exit\n");

		scanf("%d",&ch);

		switch(ch)

			{

			case 1: {

				int item;

				printf("Item to be entered : ");

				scanf("%d",&item);

				InsertQ(item);

				break;

			}

			case 2: {

				int val = DeleteQ();

					printf("The deleted item is %d",val);

				break;

			} 

			case 3: Display(); break;

			case 4: exit(0);

			}

	} while(1);

	return 0;

}
