#include "main.h"
#include <stdlib.h>

#include <stdio.h>

#include <string.h>
/**
 *  * puts2 - Prints one char out of two of a string.
 *   * @str: The string containing characters.
 */

void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[i++])
		len++;
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
		_putchar('\n');

}
