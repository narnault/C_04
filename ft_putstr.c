#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int main()
{
	char *str = "salut cest cool";
	ft_putstr(str);
}
