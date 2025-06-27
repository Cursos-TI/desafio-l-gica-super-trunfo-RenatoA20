#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    char estado1[3] = "RN", estado2[3] = "CE", cod1[10] = "A01", cod2[10]="B01", cidade1[20]="Natal", cidade2[20]= "Fortaleza", atributo1[30], atributo2[30];
    int populacao1 = 703400, populacao2 = 2428648, turismo1 = 35, turismo2= 45, opcao1, opcao2, resultado1, resultado2, resultado3, total;
    float area1 = 167.4, area2 = 315.35, pib1=24.18, pib2=73.4, densidade1=4201.91, densidade2=7701.43, soma1 = 0, soma2 = 0;

    //variáveis já declaradas anteriormente em outras etapas do programa
    //atributo vai receber o nome dos atributos selecionados nos menus, talvez tenha outras maneiras de fazer mas eu ainda não estudei...
    
    //==========================================================
    //inicio do programa com apresentação do primeiro menu

    printf("Boas vindas ao jogo Super Trunfo: Países\n");
    printf("Escolha o primeiro atributo para comparação\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Quantidade pontos turísticos.\n");
    printf("5. Densidade demográfica.\n");
    scanf("%d",&opcao1);

    if(opcao1>=1 && opcao1<=5){
    //já atribuir o primeiro valor a variável resultado1 e atributo1 usando switch-case
        switch(opcao1){
            case 1:
                printf("Atributo selecionado: População\n");
                resultado1 = populacao1>populacao2 ? 1:0;
                strcpy(atributo1, "População");
                soma1 += populacao1;
                soma2 += populacao2;
            break;

            case 2:
                printf("Atributo selecionado: Área\n");
                resultado1 = area1>area2 ? 1:0;
                strcpy(atributo1, "Área");
                soma1 += area1;
                soma2 += area2;
            break;

            case 3:
                printf("Atributo selecionado: PIB\n");
                resultado1 = pib1>pib2 ? 1:0;
                strcpy(atributo1, "PIB");
                soma1 += pib1;
                soma2 += pib2;
            break;

            case 4:
                printf("Atributo selecionado: Densidade demográfica\n");
                resultado1 = densidade1<densidade2 ? 1:0;
                strcpy(atributo1, "Densidade demográfica");
                soma1 += densidade1;
                soma2 += densidade2;
            break;

            case 5:
                printf("Atributo selecionado: Pontos turísticos\n");
                resultado1 = densidade1>densidade2 ? 1:0;
                strcpy(atributo1, "Pontos turísticos");
                soma1 += turismo1;
                soma2 += turismo2;
            break;
        }


        //apresentação do segundo menu
        printf("Agora escolha o segundo atributo para comparação:\n");
        printf("O ATRIBUTO DEVE SER DIFERENTE AO PRIMEIRO ESCOLHIDO!\n");
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Quantidade pontos turísticos.\n");
        printf("5. Densidade demográfica.\n");
        scanf("%d",&opcao2);


        //teste logico para saber se o segundo numero digitado é igual ao primeiro
        if(opcao2>=1 && opcao2<=5){
            if(opcao1==opcao2){
                printf("Você selecionou 2 opções iguais!\n");
            }
            else{

                switch(opcao2){
                case 1:
                    printf("Atributo selecionado: População\n");
                    resultado2 = populacao1>populacao2 ? 1:0;
                    strcpy(atributo2, "População");
                    soma1 += populacao1;
                    soma2 += populacao2; 
                break;

                case 2:
                    printf("Atributo selecionado: Área\n");
                    resultado2 = area1>area2 ? 1:0;
                    strcpy(atributo2, "Área");
                    soma1 += area1;
                    soma2 += area2;
                break;

                case 3:
                    printf("Atributo selecionado: PIB\n");
                    resultado2 = pib1>pib2 ? 1:0;
                    strcpy(atributo2, "PIB");
                    soma1 += pib1;
                    soma2 += pib2;
                break;

                case 4:
                    printf("Atributo selecionado: Densidade demográfica\n");
                    resultado2 = densidade1<densidade2 ? 1:0;
                    strcpy(atributo2, "Densidade demográfica");
                    soma1 += densidade1;
                    soma2 += densidade2;
                break;

                case 5:
                    printf("Atributo selecionado: Pontos turísticos\n");
                    resultado2 = densidade1>densidade2 ? 1:0;
                    strcpy(atributo2, "Pontos turísticos");
                    soma1 += turismo1;
                    soma2 += turismo2;
                break;
                }

                resultado3 = soma1>soma2? 1:0;
                total = resultado1 + resultado2 + resultado3;

                // cabeçalho do resultado

                printf("\n=========================================================\n");
                printf("RESULTADO\n");
                printf("\n=========================================================\n");
                printf("%s X %s\n",cidade1, cidade2);
                printf("Atributos escolhidos: %s e %s\n", atributo1, atributo2);
                
                //switch para conseguir imprimir o número dos respectivos atributos

                switch(opcao1){
                    case 1:
                        printf("%s: %d X %d\n", atributo1, populacao1, populacao2);
                    break;

                    case 2:
                        printf("%s: %.2f km² X %.2f km²\n", atributo1, area1, area2);
                    break;

                    case 3:
                        printf("%s: %.2f bilhões X %.2f bilhões\n", atributo1, pib1, pib2);
                    break;

                    case 4:
                        printf("%s: %d X %d\n", atributo1, turismo1, turismo2);
                    break;

                    case 5:
                        printf("%s: %.2f X %.2f\n", atributo1, densidade1, densidade2);
                    break;
                }

                switch(opcao2){
                    case 1:
                        printf("%s: %d X %d\n", atributo2, populacao1, populacao2);
                    break;

                    case 2:
                        printf("%s: %.2f km² X %.2f km²\n", atributo2, area1, area2);
                    break;

                    case 3:
                        printf("%s: %.2f bilhões X %.2f bilhões\n", atributo2, pib1, pib2);
                    break;

                    case 4:
                        printf("%s: %d X %d\n", atributo2, turismo1, turismo2);
                    break;

                    case 5:
                        printf("%s: %.2f X %.2f\n", atributo2, densidade1, densidade2);
                    break;
                
                }
                printf("Soma dos atributos: %.2f X %.2f\n", soma1, soma2);
                printf("\nCalculando vencedor...\n");
                
                if(total==3 || total==2){
                    printf("A cidade vencedora foi: %s", cidade1);
                }   else{
                        printf("A cidade vencedora foi: %s", cidade2);
                }
            
            }
    }  else{
        printf("Opção inválida!");
    }   }
    else{
        printf("Opção inválida!");
    }
}