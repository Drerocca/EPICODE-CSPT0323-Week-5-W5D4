#include <stdio.h>
#include <math.h>

int main()
{
    float lato;
    float area_quadrato;
    float area_cerchio;
    float area_triangolo;

    printf ("Inserisci il valore del lato D: ");
    scanf ("%f", &lato);

    area_quadrato = lato * lato;
    area_cerchio = 3.14 * ((lato*lato) / 4);
    area_triangolo = (sqrt(3) / 4) * (lato * lato);

    printf ("L'area del quadrato è: %f \n", area_quadrato);
    printf ("L'area del cerchio è: %f \n", area_cerchio);
    printf ("L'area del triangolo equilatero è: %f \n", area_triangolo);
    return 0;
}
