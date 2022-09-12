#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int d, j;

for (d = 0; d < 9; d++)
{
for(j = d + 1; j < 10; j++)
{
	putchar((d % 10) + '0');
	putchar((j % 10) + '0');
	if(d == 8 && j == 9)
	continue;
	putchar(',');
	putchar(' ');
}
}
putchar('\n');
return (0);
}
