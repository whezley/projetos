#include <stdio.h>

#define BUFFER_SIZE 20

int main() {

    //Declarando as variaveis que irao armazenar os dados da cidade
char estado[BUFFER_SIZE], nome_da_cidade[BUFFER_SIZE], codigo_da_carta[BUFFER_SIZE];
int populacao, num_pontos_turisticos,ordem_carta;
float area, pib;

    //Pedindo os dados da carta ao usuario
    printf("Entre com os dados da carta\n");
    printf("Digite a ordem da carta: ");
    scanf("%i", &ordem_carta);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_da_carta);

    printf("Digite a populacao: ");
    scanf("%i", &populacao);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%i", &num_pontos_turisticos);

    printf("Digite a area: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o estado: ");
    scanf("%s",estado);

    printf("Digite o nome da cidade: ");
    scanf("%s",nome_da_cidade);

    //imprimindo as informacoes da carta
    printf("Carta %i:\n", ordem_carta);
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo_da_carta);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("populacao: %i\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos turisticos: %i\n", num_pontos_turisticos);




    return 0;
}