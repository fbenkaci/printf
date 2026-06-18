#include "ft_printf.h"
#include <stdlib.h>
 
int main(int argc, char **argv)
{
	int				nb;
	unsigned int	u_nb;
 
	if (argc != 2)
	{
		ft_printf("Usage: %s <nombre>\n", argv[0]);
		return (1);
	}
	nb = atoi(argv[1]);
	u_nb = (unsigned int)nb;
 
	ft_printf("=== Test des fonctions internes ===\n");
 
	ft_printf("-> ft_putchar : ");
	ft_putchar('A');
	ft_putchar('\n');
 
	ft_printf("-> ft_putstr  : ");
	ft_putstr("Hello 42!\n");
 
	ft_printf("-> ft_putnbr  : ");
	ft_putnbr(nb);
	ft_putchar('\n');
 
	ft_printf("-> ft_unsigned_putnbr : ");
	ft_unsigned_putnbr(u_nb);
	ft_putchar('\n');
 
	ft_printf("-> ft_putnbrbase_x (hexa minuscule) : ");
	ft_putnbrbase_x(u_nb, 16);
	ft_putchar('\n');
 
	ft_printf("-> ft_putnbrbase_x_maj (hexa majuscule) : ");
	ft_putnbrbase_x_maj(u_nb, 16);
	ft_putchar('\n');
 
	ft_printf("-> ft_modulo_p (base 16) : ");
	ft_modulo_p((unsigned long long)u_nb, 16);
	ft_putchar('\n');
 
	ft_printf("\n=== Test via ft_printf (conversions) ===\n");
	ft_printf("%%c : %c\n", 'A');
	ft_printf("%%s : %s\n", "Hello 42!");
	ft_printf("%%d : %d\n", nb);
	ft_printf("%%i : %i\n", nb);
	ft_printf("%%u : %u\n", nb);
	ft_printf("%%x : %x\n", nb);
	ft_printf("%%X : %X\n", nb);
	ft_printf("%%p : %p\n", &nb);
	ft_printf("%%%% : %%\n");
 
	return (0);
}