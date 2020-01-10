#include "ft_printf.h"
#include <stdio.h>

int main ()
{
    int	ret[2];
    char	*str = "astek";
    char	stre[] = {'a', 's', 10, 'e', 'k', 0};

    printf("Tests ");
    printf(   "0) Modulo [%%] : {%%}\n");
    ft_printf("=> Modulo [%%] : {%%}\n");
    printf(   "1) Nombre signe [d] : {%d}\n", 42);
    ft_printf("=> Nombre signe [d] : {%d}\n", 42);
    printf(   "2) Nombre signe [i] : {%i}\n", 42);
    ft_printf("=> Nombre signe [i] : {%i}\n", 42);
    printf(   "4) Nombre non signe [u] : {%u}\n", 42);
    ft_printf("=> Nombre non signe [u] : {%u}\n", 42);
    printf(   "5) Nombre hexadecimal [x] : {%x}\n", 0x12345);
    ft_printf("=> Nombre hexadecimal [x] : {%x}\n", 0x12345);
    printf(   "6) Nombre hexadecimal [X] : {%X}\n", 0x12345);
    ft_printf("=> Nombre hexadecimal [X] : {%X}\n", 0x12345);
    printf(   "8) Caractere [c] : {%c}\n", 42);
    ft_printf("=> Caractere [c] : {%c}\n", 42);
    printf(   "9) Chaine [s] : {%s}\n", str);
    ft_printf("=> Chaine [s] : {%s}\n", str);
    printf(   "10) Chaine etendue [S] : as\\012ek\n");
    ft_printf("=>  Chaine etendue [S] : %S\n", stre);
    printf(   "11) Pointeur [p] : {%p}\n\n\n", str);
    ft_printf("=>  Pointeur [p] : {%p}\n", str);

    printf("Affichage multiple\n\n");
    printf(   "1) Affichage multiple [d d d] : {%d} {%d} {%d}\n", 0, 42, 2147483647);
    ft_printf("=> Affichage multiple [d d d] : {%d} {%d} {%d}\n", 0, 42, 2147483647);
    printf(   "2) Affichage multiple [d d d] : {%d} {%d} {%d}\n", -0, -42, -2147483647);
    ft_printf("=> Affichage multiple [d d d] : {%d} {%d} {%d}\n", -0, -42, -2147483648);
    printf(   "3) Affichage multiple [c d s] : {%c} {%d} {%s}\n", 42, 42, str);
    ft_printf("=> Affichage multiple [c d s] : {%c} {%d} {%s}\n", 42, 42, str);
    printf(   "4) Formatage simple [0d] : {%0d}\n", 42);
    ft_printf("=> Formatage simple [0d] : {%0d}\n", 42);
    printf(   "5) Formatage simple [5d] : {%5d}\n", 42);
    ft_printf("=> Formatage simple [5d] : {%5d}\n", 42);
    printf(   "6) Formatage simple [ d] : {% d}\n", 42);
    ft_printf("=> Formatage simple [ d] : {% d}\n", 42);
    printf("%010x\n", 0);
    ft_printf("%010x\n", 0);
	printf("%010x\n", 20);
	ft_printf("%010x\n", 20);
	printf("%010x\n", -20);
	ft_printf("%010x\n", -20);
	printf("%10x\n", 20);
	ft_printf("%10x\n", 20);
	printf("%-15x\n", 0);
    ft_printf("%-15x\n", 0);
    printf("%d\n\n", printf("1unsigned 1 %u unsigned 2 %u\n\n", 42, -42));
    ft_printf("%d\n\n", printf("1unsigned 1 %u unsigned 2 %u\n\n", 42, -42));

}
