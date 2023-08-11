#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digits
 *
 * Return: 0 (success)
*/

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar('0' + number);
	}
	putchar('\n');

	return (0);
}

