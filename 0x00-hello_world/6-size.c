#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 when done
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf(\n);
	printf("size of int: %lu  byte(s)", sizeof(int));
	printf(\n);
	printf("size of a long int: %lu byte(s)", sizeof(long int));
	printf(\n);
	printf("size of a long long int: %lu byte(s)", sizeof(long long int));
	printf(\n);
	printf("size of a float: %lu byte(s)", sizeof(float));
	printf(\n);
	return (0);
}
