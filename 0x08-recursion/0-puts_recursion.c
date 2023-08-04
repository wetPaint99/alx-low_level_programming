#include "main.h"

/**
 * _puts_recursion - function likes puts;
 * @s:input
 * Return: Always 0 (Sucess)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
