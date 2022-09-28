#include "main.h"

/**
 * _strlen_recursion - length of a string
 *
 * @s: takes in a string
 *
 * RETURN: and int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}