#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int x;
	printf("輸入一個整數:");
	scanf_s("%d", &x);
	if (x % 2 == 0)
	{ 
		printf("偶數");
	}
	if (x % 2 != 0)
	{
		printf("奇數");
	}
	return 0;
}