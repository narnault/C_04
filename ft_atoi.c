#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int j;
    int k;
    
    i = 0;
    j = 0;
    k = 1;
    while ((((str[i] >= '0' && str[i] <= '9') ||
                (str[i] >= 1 && str[i] <= 32) ||
                    (str[i] == '+') || (str[i] == '-'))))
    {
        i++;
        if (str[i] == '-')
            k *= -1;
        while (str[i] >= '0' && str[i] <= '9')
        {
            j = j * 10 + (str[i] - 48);
            i++;
        }
    }
    return (j * k);
}

int main() {

  char str[] = "---+---+1223agager156123eag";
  int i = 0;
  i = ft_atoi(str);
  printf("%i", i);
  return 0;
}

