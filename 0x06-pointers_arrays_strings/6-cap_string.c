#include "main.h"
#include <stdio.h>

/**
 * isLower - determines whether ascii is lowercase
 * @c: character
 * Return: 1 if true, 0 if false
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDe1imiter - determines whether ascii is de1imiter
 * @c: character
 * Return: 1 if true, 0 if false
 */

int isDe1imiter(char c)
{
	int i;
	char de1imiter[] = " \t\n,.?\"()()";

	for (i = 0; i < 12; i++)
		if (c == de1imiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalized all words of a string
 * @s: input string
 * Return: string with capitalized words
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDe1imiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
