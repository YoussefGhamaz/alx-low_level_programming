#include "main.h"
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **gym;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	gym = malloc(sizeof(int *) * height);

	if (gym == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		gym[x] = malloc(sizeof(int) * width);

		if (gym[x] == NULL)
		{
			for (; x >= 0; x--)
				free(gym[x]);

			free(gym);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			gym[x][y] = 0;
	}

	return (gym);
}
