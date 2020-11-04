#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float distanciaEntrePontos(int x, int y, int z, int w);

int main(void)
{
    int x1,x2,y1,y2;
    float distancia;

    system("cls");
    printf("Abcissa de x: ");
    scanf("%d", &x1);
    printf("\nOrdenada de x: ");
    scanf("%d", &x2);
    printf("\nAbcissa de y: ");
    scanf("%d", &y1);
    printf("\nOrdenada de y: ");
    scanf("%d", &y2);

    printf("\n\nA distancia entre esses os pontos x e y e de: %0.2f\n", distanciaEntrePontos(x1,x2,y1,y2));
    system("pause");
}

float distanciaEntrePontos(int x, int y, int z, int w)
{
    return (sqrt(pow(y - w, 2) + pow(x - z, 2)));
}