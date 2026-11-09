#include <stdlib.h>
#include <stdio.h>

double compute_average(double nb1, double nb2, double nb3)
{
    double moyenne = (nb1+nb2+nb3) / 3;

    printf("Votre résultat est : %.1f \n",moyenne);

}
int main()
{
    compute_average(16,10,14);
}