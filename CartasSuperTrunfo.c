#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
    //Declaração das variáveis das duas cartas
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    char estado1, estado2;
    char codigo1[2], codigo2[2];
    char cidade1[20], cidade2[20];
    float area1, area2, pib1, pib2;
    
    //Cadastro da carta 1
    printf("Estado: \n");
    scanf("%c", &estado1);

    printf("Código da carta: \n");
    scanf("%s", &codigo1);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área(km²): \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    //Exibição da carta 1
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %c%s \n", estado1, codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de pontos turisticos: %d \n", pontos_turisticos1);

    //Cadastro da carta 2
    printf("Estado: \n");
    scanf(" %c", &estado2);

    printf("Código da carta: \n");
    scanf("%s", &codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área(km²): \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    //exibição dos dados da carta 2
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %c%s \n", estado2, codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de pontos turisticos: %d \n", pontos_turisticos2);

    return 0;
}
