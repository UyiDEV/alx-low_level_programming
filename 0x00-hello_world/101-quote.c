#include <stdio.h>

/**
 * main - outputs a string
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", s);
	return (1);
}
