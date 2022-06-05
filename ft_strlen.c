#include <stdio.h>

int    ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i])
                i++;
	return (i);
}

int main()
{
	char *str = "salut cest cool";
	int i = 0;
	i = ft_strlen(str);
	printf("%i", i);
}
