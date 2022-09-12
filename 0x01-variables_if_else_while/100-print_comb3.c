#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d, j;

	for (d = 0; d <= 9; d++)
	{
		for(j = 1; j <= 9; j++);
		{
		if (j > d)
		{
			putchar(d + '0');
			putchar(j + '0');
			if(d != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		}
	}
	putchar('\n');
	return (0);
}
