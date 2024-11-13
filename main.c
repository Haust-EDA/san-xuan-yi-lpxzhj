//请在下方输入你的代码：
#include "stdio.h"
int main()
{
	int i, j, m, n;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d", i, j, i * j);
		}
		printf("\n");
	}
	for (m = 9; m >= 1;m--)
	{
		for (n = 1;n <= m; n++)
		{
			printf("%d*%d=%d", m, n, m * n);
		}
		printf("\n");
	}
	return 0;
}
