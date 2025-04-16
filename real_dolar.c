#include <stdio.h> 
int main () {
    float real, dolar, conversao;
    printf("digite um valor em real: \n");
    scanf("%f", &real);

    dolar = 5.9;
    conversao = real / dolar;

    printf("a conversao de dolar para real sera: %.2f\n", conversao);

    return 0;
}
