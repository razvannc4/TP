#define _CRT_SECURE_NO_WARNINGS




#include <stdlib.h>
#include<stdio.h>
#include <math.h>

void suma(int a, int b, int *s)
{
	*s=a+b;
}

int main()
{
	int *s=0, a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	suma(a,b,&s);
	printf("\n%d",s);

	system("Pause");
	return 0;

}