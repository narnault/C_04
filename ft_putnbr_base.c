#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

int     verif(char *base)
{
        int     i;
        int     j;

        i = 0;
        j = 1;
        while (base[i] != '\0') {
		if ((base[i] == '+') || (base[i] == '-'))
                	return (0);
		i++;
	}
	if (i <= 1)
		return (0);
        i = 0;
        while (base[i] != '\0') {
            while (base[j] != '\0') {
                if (base[i] == base[j])
                    return (0);
                j++;
            }
            i++;
            j = i + 1;
        }
        return (1);
}

int     ft_putnbr_base(int nbr, char *base)
{
        int     i;
        int     j;
        int     tab[33];

        i = 0;
        j = 0;
        if (verif(base)) {
                if (nbr < 0) {
                        ft_putchar('-');
                        nbr *= -1;
                }
                while (base[j])
                        j++;
                while (nbr)
                {
                        tab[i] = nbr % j;
                        nbr = nbr / j;
                        i++;
                }
                while (i-- >= 0)
                        ft_putchar(base[tab[i]]);
        }
}

int main()
{
	int nbr = -125;
	char *base = "01";
	ft_putnbr_base(nbr, base);	
}
