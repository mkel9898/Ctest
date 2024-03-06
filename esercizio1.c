#include <stdio.h>

int main() {
    double num1, num2, risultato;

    printf("Inserisci il primo numero: ");
    scanf("%lf", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%lf", &num2);

    risultato = num1 * num2;

    printf("Il risultato della moltiplicazione di %.2lf e %.2lf è: %.2lf\n", num1, num2, risultato);

    return 0;
}