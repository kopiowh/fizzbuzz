// // write a fizzbuzz.c program with only write function being allowed.

// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	putstr(char *str)
// {
// 	int	i;
// 	i = 0;
// 	while (str[i])
// 		write(1,&str[i++],1);
// }

// void	putnbr(int nb)
// {
// 	unsigned int	nbr;

// 	if(nb < 0)
// 	{
// 		ft_putchar('-');
// 		nb = -nb;
// 	}
// 	else
// 		nbr = nb;
// 	if(nbr >= 10)
// 		putnbr(nbr/10);
// 	ft_putchar((nbr % 10) + 48);
// }

// int main ()
// {
// 	int i;

// 	i = 1;

// 	while (i <= 100)
// 	{
// 		if(i % 3 == 0)
// 			putstr("Fizz");
// 		if(i % 5 == 0)
// 			putstr("Buzz");
// 		if(i % 3 && i % 5)
// 			putnbr(i);
// 		i++;
// 		putstr("\n");
// 	}
// }
// 
// insert "while (i < 101)" after line 48 if you do not want a new line after the hundredth line
//
// ****************************************************************************
// // printf version
//
// #include <stdio.h>

// int main ()
// {
// 	int i;

// 	i = 1;

// 	while (i <= 100)
// 	{
// 		if(i % 3 == 0)
// 			printf("Fizz");
// 		if(i % 5 == 0)
// 			printf("Buzz");
// 		if(i % 3 && i % 5)
// 			printf("%d", i);
// 		i++;
// 		printf("\n");
// 	}
// }
// ****************************************************************************
// one-liner version
//
#include <stdio.h>

int main(void)
{
    int i, n=100;        
    for (i = 1; i <= n; i++)
	printf((!(i%3) || !(i%5)) ? "%s\n" : "%d\n", !(i % 15) ? "fizzbuzz" : !(i % 5) ? "buzz" : !(i % 3) ? "fizz" : i);
}