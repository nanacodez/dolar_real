/* faz a conversao de real para dolar  */

#include <stdio.h>
int main () {
    float real, dolar, conversao;
    printf("digite um valor em real: \n");
    scanf("%f", &real);

    dolar = 5.89;
    conversao = real * dolar;

    printf("a conversao de real para dolar sera: %.2f\n", conversao);

    return 0;
}
