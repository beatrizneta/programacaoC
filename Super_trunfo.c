#include <stdio.h>

int main(){
    char estado [10];
    char codigo [5];
    char cidade [20];
    int populacao;
    int Pontosturistico;
    float area;
    float pib;
    char estado2 [10];
    char codigo2 [5];
    char cidade2 [20];
    int populacao2;
    int Pontosturistico2;
    float area2;
    float pib2;


    printf("Digite Seu Estado: \n");
    scanf("%s", &estado);

    printf("Codigo: \n");
    scanf("%s", &codigo);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("Total de Habitantes: \n");
    scanf("%d", &populacao);

    printf("Area: \n");
    scanf("%f", &area);

    printf("Pib: \n");
    scanf("%f", &pib);

    printf("Quantidade de Pontos Turísticos: \n");
    scanf("%d", &Pontosturistico);

    printf("Digite seu Estado: \n");
    scanf("%s", &estado2);

    printf("Codigo: \n");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade2);

    printf("Total de Habitantes: \n");
    scanf("%d", &populacao2);

    printf("Area: \n");
    scanf("%f", &area2);

    printf("Pib: \n");
    scanf("%f", &pib)2;

    printf("Quantidade de Pontos Turísticos: \n");
    scanf("%d", &Pontosturistico2);


    printf("Carta 1! \n");
    printf("Estado: %s \n", estado);
    printf("Codigo da Carta: %s%s \n", estado, codigo);
    printf("Cidade: %s \n", cidade);
    printf("Habitantes: %d \n", populacao);
    printf("Area: %f \n", area);
    printf("Pib: %f \n", pib);
    printf("Pontos Turísticos: %d \n", Pontosturistico);

    printf("Carta 2! \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo da Carta: %s%s \n", estado2, codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("Habitantes: %d \n", populacao2);
    printf("Area: %f \n", area2);
    printf("Pib: %f \n", pib2);
    printf("Pontos Turísticos: %d \n", Pontosturistico2);

    return 0;
}
