#include<stdio.h>
#define MAX 10
int value,st[10],top=-1,i,n;
void push();
void pop();
void display();
main()
{
	do
	{
		printf("\n 1.Push\n 2.Pop\n 3.display\n");
		printf("Enter your choice:\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: printf("*invalid choice*\n");
		}
		}while(n!=4);
}
	void push()
	{
		if(top==MAX-1)
		{
			printf("Stack is over flow\n");
		}
		else
		{
			printf("Enter the number:\n");
			scanf("%d",&value);
			top++;
			st[top]=value;
		}
	}
	void pop()
	{
		if(top==-1)
		{
			printf("Stack is empty\n");
		}
		else
		{
			value=st[top];
			top--;
			printf("Delete the number from stack: %d\n",value);
		}
	}
	void display()
	{
		if(top<=1)
		{
		printf("The stack is empty\n");
		}
		else
		{			
			for(i=top;i>=0;i--)
			{
				printf("%d\n",st[i]);
			}
		}
}
			
			
