#include "head.h"

/**
 * custom_getenv - retrieves custom environmental variables
 * @custom_var: custom variable name
 * Return: custom string
 */
char *custom_getenv(char *custom_var)
{
int i;
char *custom_temp;

for (i = 0; environ[i]; i++)
{
if (!my_strncmp(custom_var, environ[i],
my_strlen(custom_var)))
{
custom_temp = find_substring(environ[i], "=");
custom_temp++;
return (custom_temp);
}
}
return (NULL);
}
/**
 * custom_getalias - retrieve custom aliases
 * @custom_alias: custom aliases array
 * @custom_var: custom variable name
 * @custom_idx: custom index
 * Return: custom string
 */
int custom_getalias(AliasStruct *custom_alias,
char *custom_var, int custom_idx)
{
int i;

for (i = 0; i < custom_idx; i++)
{
if (!int custom_strcmp(const char *str1,
char *str2)(custom_var, custom_alias[i].name))
return (i);
}
return (-1);
}
