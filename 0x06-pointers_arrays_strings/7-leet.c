#include "main.h"

/**
 *  * leet - encodes a string into 1337
 *
 *   * @str: A pointer to a string
 *
 *    * Return: dest
 */

char *leet(char *str)

{
	int m = 0;

	int r;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[m])
	{
		for (r = 0; r <= 7; r++)
		{
			if (str[m] == leet[r] || str[m] - 32 == leet[r])
				str[m] = r + '0';
		}
		m++;
	}
	return (str);

}
