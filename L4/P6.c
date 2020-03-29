#define _CRT_SECURE_NO_WARNINGS




#include <stdlib.h>
#include<stdio.h>
#include <math.h>
void sum(int a, int b)
{

	p1 = &a;
	p2 = &b;
	sum = *p1 + *p2;

}

int main()
{
	int sum, a, b, *p1, *p2;
	printf("Cele 2 numere sunt:\n");
	scanf("%d%d",a,b);

	printf("Suma lui %d si %d este %d\n", *p1, *p2, sum(a,b));
	system("Pause");
	return 0;

}