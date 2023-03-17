#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = '0'; d < '10'; d++)
	{
		putchar('0'+d);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);

