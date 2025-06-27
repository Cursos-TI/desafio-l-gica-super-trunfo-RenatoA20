#include <stdio.h>

int main(){
    char estado1[4] = "RN", estado2[4] = "CE", cod1[10] = "A01", cod2[10]="B01", cidade1[20]="Natal", cidade2[20]= "Fortaleza";
    int populacao1 = 703400, populacao2 = 2428648, turismo1 = 35, turismo2= 35, opcao;
    float area1 = 167.4, area2 = 315.35, pib1=24.18, pib2=73.4, densidade1=4201.91, densidade2=7701.43;     //informações das duas cidades comparadas no código anterior

    printf("\nBem vindo ao modo de jogo *COMPARAÇÃO* do jogo Super Trunfo: Países!\n");  //quis deixar claro que se trata de uma comparação, pq meio que o jogador não tem como escolher a carta dele ainda.
    printf("Escolha qual característica deseja comparar:\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Número de pontos turísticos.\n");
    printf("5. Densidade demográfica.\n");
    scanf("%d", &opcao); 

    switch(opcao){
        case 1:
            printf("Opção selecionada: População\n");
            printf("=====RESULTADO=====\n");
            printf("%s X %s\n", cidade1, cidade2);
            printf("%d X %d\n", populacao1, populacao2);
            if(populacao1>populacao2){
                printf("Carta 1 venceu!\n");
            } else if(populacao2>populacao1){
                    printf("Carta 2 venceu!\n");
            }   else{
                    printf("EMPATE!!\n");
            }
        break;

        case 2:
            printf("Opção selecionada: Área\n");
            printf("=====RESULTADO=====\n");
            printf("%s X %s\n", cidade1, cidade2);
            printf("%.2f km² X %.2f km\n²", area1, area2);
            if(area1>area2){
                printf("Carta 1 venceu!\n");
            } else if(area2>area1){
                    printf("Carta 2 venceu!\n");
            }   else{
                    printf("EMPATE!!");
            }
        break;

         case 3:
            printf("Opção selecionada: PIB\n");
            printf("=====RESULTADO=====\n");
            printf("%s X %s\n", cidade1, cidade2);
            printf("%.2f bilhões X %.2f bilhões\n", pib1, pib2);
            if(pib1>pib2){
                printf("Carta 1 venceu!\n");
            } else if(pib2>pib1){
                    printf("Carta 2 venceu!\n");
            }   else{
                    printf("EMPATE!!\n");
            }
        break;

         case 4:
            printf("Opção selecionada: Número de pontos turísticos\n");
            printf("=====RESULTADO=====\n");
            printf("%s X %s\n", cidade1, cidade2);
            printf("%d X %d\n", turismo1, turismo2);
            if(turismo1>turismo2){
                printf("Carta 1 venceu!\n");
            } else if(turismo2>turismo1){
                    printf("Carta 2 venceu!\n");
            }   else{
                    printf("EMPATE!!\n");
            }
        break;

         case 5:
            printf("Opção selecionada: Densidade demográfica\n"); //pelas regras, ganha quem possuir a menor densidade
            printf("=====RESULTADO=====\n");
            printf("%s X %s\n", cidade1, cidade2);
            printf("%.2f X %.2f\n", densidade1, densidade2);
            if(densidade2>densidade1){
                printf("Carta 1 venceu!\n");
            } else if(densidade1>densidade2){
                    printf("Carta 2 venceu!\n");
            }   else{
                    printf("EMPATE!!\n");
            }
        break;

        default: 
            printf("Opção inválida.\n");
    }

    
}  