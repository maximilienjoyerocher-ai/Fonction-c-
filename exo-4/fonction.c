#include <stdlib.h>
#include <stdio.h>


void print_str(char *str)
{
    printf("%s",str);

}
int add(int nb1, int nb2)
{
    double somme = (nb1+nb2);

    printf("Votre résultat est : %.1f  \n",somme);
}
double compute_average(double nb1, double nb2, double nb3)
{
    double moyenne = (nb1+nb2+nb3) / 3;

    printf("Votre résultat est : %.1f \n",moyenne);

}