#include <stdio.h>

int		caract(char c, char *base)
{
	int i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int		verif(char *base)
{
	int i;

	i = -1;
	while (base[++i])
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| caract(base[i], base + i + 1) >= 0
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int j;
	int k;
	int n;

	if ((n = verif(base)) < 2)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	k = 0;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			k = 1 - k;
	j = 0;
	while ((i = caract(*str, base)) >= 0)
	{
		j = j * n + i;
		str++;
	}
	if (k)
		j *= -1;
	return (j);
}

int main()
{
    char *base = "poneyvif";
    char *str = "nn";
    int i = 0;
    i = ft_atoi_base(str, base);
    printf("%i", i);
}
