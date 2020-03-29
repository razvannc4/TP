#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int ArrayStack[MAX_SIZE];
int top = -1;  

void Push(int x)
{
	if (top == MAX_SIZE - 1)
	{
		 
		printf("Error: stack overflow\n");
		return;
	}
	ArrayStack[++top] = x;
}

void Pop()
{
	if (top == -1)
	{
		 
		printf("Error: No element to pop\n");
		return;
	}
	top--;
}


int Peek()
{
	return ArrayStack[top];
}


int IsEmpty()
{
	if (top == -1)
	{
		return 1;
	}
	return 0;
}


void Print() {
	int i;
	printf("Number in 2nd base: ");
	for (i = top; i >=0; i--)
	{
		printf("%d", ArrayStack[i]);
	}
	printf("\n");
}
int main()
{
	int num,c=0,i,n,x=0;
	printf("\n Nr tau :");
	scanf("%d", &num);
	if (num <= 255) {
		while (num != 0)
		{
			if (num % 2 != 0) {
				Push(1);
				x++;
			}
			else
				Push(0);
			num = num / 2;
		}
	

		Print();
		while (IsEmpty()==0)
		{
			Pop();
		}

		for (i=0;i<8;i++)
			if (i < 8-x)
				Push(0);
			else
				Push(1);
		Print();


	}
	system("pause");
	return 0;
}