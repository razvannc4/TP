#define _CRT_SECURE_NO_WARNINGS




#include <stdlib.h>
#include<stdio.h>
#include <math.h>


int main()
{
	int sum, a, b, *p1, *p2;
	p1 = &a;
	p2 = &b;
	printf("Cele 2 numere sunt:\n");
	scanf("%d%d", p1, p2);
	sum = *p1 + *p2;
	printf("Suma lui %d si %d este %d\n", *p1, *p2, sum);
	system("Pause");
	return 0;

}