#include <stdio.h>
#include <stdlib.h>

double a,b;
char wybor;
double dodaj(double a, double b)
{
    return a+b;
}
double odejmij(double a, double b)
{
    return a-b;
}
double mnoz(double a, double b)
{
    return a*b;
}
double dziel(double a, double b)
{
    return a/b;
}

double kalkulator(double a,double b,char wybor)
{
    switch(wybor)
    {
        case 'D':
            return dodaj(a,b);

        case 'O':
            return odejmij(a,b);

        case 'M':
            return mnoz(a,b);

        case 'I':
            return dziel(a,b);
        case 'W':
            wyjscie();
    }
}
int main() {

    printf("\n");
    printf("D - Dodawanie, O - Odejmowanie, M - Mnozenie, I - Dzielenie, W - Wyjscie\n");
    printf("Wybierz litere przypisana do dzialania\n");
    scanf("%c", &wybor);
    printf("Kalkulator z mozliwoscia wyboru:\n");
    printf("Podaj a: ");
    scanf("%lf", &a);
    printf("Podaj b: ");
    scanf("%lf", &b);
    printf("Wynik wybranego dzialania: %lf", kalkulator(a, b, wybor));

    return 0;
}

