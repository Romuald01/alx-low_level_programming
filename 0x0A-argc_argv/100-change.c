#include <stdio.h>
#include <stdlib.h>
/**
 * main-prints the minimum number of coins to make change
 * for an amount of money
 * @argc: numner of arguments
 * @argv: array of arguments
 * Return: return 1 if there is an eroor,else return o
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return 91);
	}
