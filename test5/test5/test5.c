#define _CRT_SECURE_NO_WARNIGNS
#include <stdio.h>
int main()
{
	int input = 0;
	printf("�Ƿ�ѧϰC���ԣ�(1/0)\n");
	scanf_s("%d", &input);
	if (input == 1)
	{

		int line = 0;
		printf("ѧϰC����\n");
		while (line < 20001)
		{
			printf("д����:%d\n", line);
			line++;
		}
		if (line >= 20001)
		{
			printf("ѧϰ���\n");
		}
	}
	else
	{
			printf("������\n");
	}
	return 0;
}