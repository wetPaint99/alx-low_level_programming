#include "main.h"

/**
 * _strlen - Finds the length of a string.
 * @s: The input string
 * Return: Length of the string.
 */
int _strlen(char *s)
{
		int i;
		int count = 0;
		for (i = 0; s[i] != '\0'; i++)
			count++;
		return (count);
}


