#include <stdio.h>
#include "main.h"

/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the argument.
 *
 * Return: Always 0.
 */
int main(int __attribute((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
