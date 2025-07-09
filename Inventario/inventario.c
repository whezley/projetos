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

//Comparacoes com o estoque minimo
    short int resultadoA;
    short int resultadoB;

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("\n$%s tem estoque minimo de %i", produtoA, resultadoA);
    printf("\n$%s tem estoque minimo de %i\n", produtoB, resultadoB);
    //Calculo do valor total do estoque
    printf("O valor total de A(%.2f) é maior que o valor de B(%.2f)? : %d",
                estoqueA * valorA, estoqueB * valorB,
              (estoqueA * valorA) > (estoqueB * valorB));
}