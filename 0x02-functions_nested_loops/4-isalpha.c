#include "main.h"

/**
 * _isalpha - checks if character is a letter
 *            both lowercase or uppercase
 *
 * @c: taces input from other functions.
 *
 * Return: 1 is c if tru else 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
