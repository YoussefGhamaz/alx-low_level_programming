#include "main.h"

/**
 * _strcat - function that concates two strings.
 *
 * @dest: pointer to description inputs
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;

	/*iterate through each src array value whitout the null type*/
	for (c2 = 0; src[c2] ; c2++)
		/*append src[c2] to dest[c] while overwritting the null pytein dest*/
		dest[c++] = src[c2];
	return (dest);
}
