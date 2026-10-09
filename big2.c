#include <stdio.h>

int  biggest ()
{
	int num1, num2;
	printf("please enter two different values\n");
	scanf("%d %d", &num1, &num2);
	if(num1 > num2)
	{
		printf("%d is largest\n", num1);
	}
	else if (num2 > num1)
	{
		printf("%d is largest\n", num2);
	}
	else
	{
		printf("Both are Equal\n");
	}
	
		//return 0;
}
