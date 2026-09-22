#include <stdio.h>

void factorial () 
{
	int n, i;
	unsigned long fact = 1;

	printf("enter an interger: ");
	scanf("%d", &n);

	if (n < 0)
	{
		printf("Error! Factorial of a negative number doesnt exist.");
	}

	else
	       	{
		for (i = 1; i <= n; ++i)
		       	{
			fact *= i;
	}
printf("Factorial of %d = %lu", n, fact);
}
//return 0;
}

