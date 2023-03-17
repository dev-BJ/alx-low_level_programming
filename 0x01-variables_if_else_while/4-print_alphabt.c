#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if(low == 'e'|| low == 'q')
			continue;
		putchar(low);
	}
	printf("\n");
	return (0);
}
