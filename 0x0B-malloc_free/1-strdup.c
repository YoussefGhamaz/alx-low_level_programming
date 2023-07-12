#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ggg;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	ggg = malloc(sizeof(char) * (i + 1));

	if (ggg == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		ggg[r] = str[r];

	return (ggg);
}
