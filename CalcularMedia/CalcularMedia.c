#include<stdio.h>

int main() {

        //Declarando as variaveis
    int nota1, nota2, nota3;
    float media;

        printf("Programa para calcular a media de 3 notas\n");
        printf("Digite a primeira nota: ");
        scanf("%d", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%d", &nota2);

        printf("Digite a terceira nota: ");
        scanf("%d", &nota3);
        //Calculando a media
        //A media e a soma das notas dividida por 3
    media = (nota1 + nota2 + nota3)/3;

        //Exibindo o resultado
        printf("A media é %.2f", media);
        return 0;
}
    