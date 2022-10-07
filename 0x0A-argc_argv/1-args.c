#include <stdio.h>

/**
 * main -print the name number of arguments passed to it
 * @argc: number of arguments passed to the function
 * @argv:argument vector of pointers to string
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc - 1);
	return (0);
}
