#include <stdio.h>

/**
 * _puts_recursion - print a string, followed by new line.
 * @s: the string.
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		printf("\n");
	printf("%c", *s);
	_puts_recursion(++s);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	_puts_recursion("puts with recursion");
	return (0);
}
