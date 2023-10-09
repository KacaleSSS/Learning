#define _CRT_SECURE_NO_WARNIGNS
#include <stdio.h>
int main()
{
	int input = 0;
	printf("是否学习C语言？(1/0)\n");
	scanf_s("%d", &input);
	if (input == 1)
	{

		int line = 0;
		printf("学习C语言\n");
		while (line < 20001)
		{
			printf("写代码:%d\n", line);
			line++;
		}
		if (line >= 20001)
		{
			printf("学习完成\n");
		}
	}
	else
	{
			printf("卖红薯\n");
	}
	return 0;
}