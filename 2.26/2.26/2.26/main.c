#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int x, y;
	printf("輸入第一個數值x:");
	scanf_s("%d", &x);
	printf("輸入第二個數值y:");
	scanf_s("%d", &y);
	if (x%y == 0)
	{
		printf("x是y的倍數");
	}
	if (x%y != 0)
	{
		printf("x不是y的倍數");
	}
	return 0;
}