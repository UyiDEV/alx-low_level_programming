#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	printf("Last digit of %i is %i and ", n, (n % 10));

	if ((n % 10) == 0)
	{
		printf("is 0\n");
	}
	else if ((n % 10) > 5)
	{
		printf("is greater than\n");
	}
	else
		printf("is less than\n");

	return (0);
}
