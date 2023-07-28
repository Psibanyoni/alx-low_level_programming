#include "main.h"
/**
 * cap_string - Capitalises all words of a string.
 * str: The string to be capitalized.
 * Return: A pointer to the changed string.
 */
char *cap_string(char *)
{
	int index = 0;
	
	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;
		
		if (str[index - 1] == ' ' ||
		str[index - 1] == '\t' ||
		Str[index - 1] == '\n' ||
		str[index - 1] == ',' ||
		str[index - 1] == ';' ||
		str[index - 1] == '.' ||
		str[index - 1] == '!' ||
		str[index - 1] == '!' ||
		str[index - 1] == '"' ||
		str[index - 1] == '(' ||
		str[index - 1] == ')' ||
		str[index - 1] == '{' ||
		str[index - 1] == ']' ||
		index == 0)
			str[index] -= 32;
	}
	return (str);
}
