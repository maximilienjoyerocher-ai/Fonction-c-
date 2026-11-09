#include <stdlib.h>
#include <stdio.h>


int add(int nb1, int nb2)
{
    double somme = (nb1+nb2);

    printf("Votre résultat est : %.1f  \n",somme);
}
int main()
{
    add(12,5);
}