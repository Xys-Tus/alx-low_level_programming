#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - main initialization
*
*Return: is positive or is zero or is negative
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	if ((n % 10) > 5)
	{
		printf("Last digit of ");
		printf("%d", n);
		printf(" is %d", (n % 10));
		printf(" and is greater than 5\n");
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of ");
		printf("%d", n);
		printf(" is %d", (n % 10));
		printf(" and is 0\n");
	}
	else if ((n % 10) < 6)
	{
		printf("Last digit of ");
		printf("%d", n);
		printf(" is %d", (n % 10));
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
