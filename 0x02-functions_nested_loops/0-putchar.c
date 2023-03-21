#include <main.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

kai-dg
/
holbertonschool-low_level_programming
Public
Code
Issues
4
Pull requests
Actions
Projects
Security
Insights
holbertonschool-low_level_programming/0x02-functions_nested_loops/0-holberton.c
@kai-dg
kai-dg changed to while loop
 1 contributor
Executable File  19 lines (17 sloc)  206 Bytes
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (1);
}
