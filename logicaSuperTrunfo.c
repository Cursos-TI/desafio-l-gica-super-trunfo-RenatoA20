#include <stdio.h>

int main(){

    char estado1[3], estado2[3], cod1[10], cod2[10], cidade1[20], cidade2[20];
    int populacao1, populacao2, turismo1, turismo2;
    float area1, pib1, area2, pib2, densidade1, densidade2, pibPerC1, pibPerC2;

    printf("Boas vindas ao cadastro de cartas do jogo Super Trunfo: Cidades!\n");
    printf("Informações da primeira carta:\n");

    printf("Estado da carta: ");
    scanf(" %s", &estado1);

    printf("Código da carta: ");
    scanf(" %s", &cod1);

    printf("Nome da cidade (letra apenas): ");
    scanf(" %s", &cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turismo1);

    printf("Dados cadastrados, insira agora os dados da segunda carta:\n");

    printf("Estado da carta: ");
    scanf(" %s", &estado2);

    printf("Código da carta: ");
    scanf(" %s", &cod2);

    printf("Nome da cidade (letra apenas): ");
    scanf(" %s", &cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turismo2);

    densidade1 = (float) populacao1 / area1; //casting da variavel populacao1 pois ela foi declarada como int no inicio
    densidade2 = (float) populacao2 / area2;

    pibPerC1 = pib1 * 1000000000 / (float) populacao1;
    pibPerC2 = pib2 * 1000000000/ (float) populacao2;

    printf("\n Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", turismo1);
    printf("Densidade demográfica: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n reais", pibPerC1);

    printf("\n Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turismo2);
    printf("Densidade demográfica: %.2f\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPerC2);
    printf("------------------------------------------");
    printf("\n COMPARAÇÃO DE ATRIBUTO: DENSIDADE DEMOGRÁFICA\n");
    printf("Carta 1 - %s (%s): %.2f!\n ", cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%s): %.2f!\n ", cidade2, estado2, densidade2);
    if(densidade1<densidade2){
        printf("Carta 1 (%s) venceu!\n", cidade1);
    }
    else{
        printf("Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}