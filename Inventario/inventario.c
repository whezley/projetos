#include <stdio.h>

int main() {
//Declarando as variaveis
    char produtoA[30] = "ProdutoA";
    char produtoB[30] = "ProdutoB";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.50;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;
//Exibir as informações dos produtos
    printf("%s tem estoque de %u unidades, valor unitario de R$%.2f", produtoA, estoqueA, valorA);
    printf("\n%s tem estoque de %u unidades, valot unitario de R$%.2f", produtoB, estoqueB, valorB);
}