#include <stdio.h>

/**
 * main - this code print lowercase alpha a-z but remove 'q' and 'e'
 * Return: Always 0 (success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if ((alpha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
		}
		alpha++;
	}

	putchar('\n');
	return (0);
}
