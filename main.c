#include "monty.h"

/*
 * main - Program entry point
 * @argc - Number of command-line arguments
 * @argv - Pointer to an array of strings containing the command-line arguments
 * Description - prints alphabet in lower case using putchar
 *
 * Return: return 0 (success)
 */

int main(int argc, char **argv)
{
	(void) argv;
	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	return (0);
}
