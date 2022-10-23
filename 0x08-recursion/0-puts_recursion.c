
/**
 * _puts_recursion - print a string, followed by new line.
 * @s: the string.
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
