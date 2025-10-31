#include <stdio.h>

int main(){

    //Declaração das variaveis de populaçao e Numero de pontos turisticos
    int  populacao1, pontos1, populacao2, pontos2;
    //Declaração das variaveis de area e PIB
    float area1, PIB1, area2, PIB2;
    //Declaração das variaveis de Densidade demográfica e PIB per capita
    float densidade_populacional1, densidade_populacional2, pib_percapta1, pib_percapta2;
    //Declaração da variável do menu interativo
    int atributo_comp;

    //Cadastros das cartas (sem inicialização do usuário para focar no menu interativo)
    char pais1[] = "Argentina";
    char pais2[] = "Brasil";

    populacao1 = 30000;
    pontos1 = 5000;
    area1 = 30000;
    PIB1 = 600000;

    populacao2 = 240000;
    pontos2 = 5000;
    area2 = 50000;
    PIB2 = 6400000;

    //cálculo da Densidade Demográfica
    densidade_populacional1 = populacao1/area1;
    densidade_populacional2 = populacao2/area2;

    //cálculo do PIB per capita
    pib_percapta1 = PIB1/populacao1;
    pib_percapta2 = PIB2/populacao2;

    //Exibição das cartas cadastradas
    printf("Bem vindo ao super trunfo! \n");
    printf("Cartas cadastradas:\n\n");
    
    printf("========= Carta 1 ==========\n");
    printf("País: %s\n", pais1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %f\n", densidade_populacional1);
    printf("PIB per capita: %f\n\n", pib_percapta1);

    printf("========= Carta 2 ==========\n");
    printf("País: %s\n", pais2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade Populaciona2: %f\n", densidade_populacional2);
    printf("PIB per capita: %f\n\n", pib_percapta2);

    //Inicio do menu interativo
    printf("========= Menu de Comparação de cartas =========\n");
    printf("Qual atributo deseja utilizar para realizar a comparação entre as cartas ?\n\n");
    printf("1-População \n2-Área \n3-PIB \n4-Número de pontos turísticos \n5-Densidade demográfica \n\n");
    printf("Digite o numero do atributo desejado: \n");
    //Armazenamento da opção escolhida pelo usuário
    scanf("%d", &atributo_comp);
    //Estrutura de decisao baseada na opção escolhida usando switch
    switch (atributo_comp){
        case 1:
            if(populacao1 > populacao2){   
                printf("Carta 1 - [País: %s] População: %d\nCarta 2 - [País: %s] População: %d\n Resultado: Carta 1 vencedora!",pais1,populacao1,pais2,populacao2);
            }
            else if(populacao1 == populacao2){
                printf("Carta 1 - [País: %s] População: %d\nCarta 2 - [País: %s] População: %d\n Resultado: Empate!",pais1,populacao1,pais2,populacao2);
            }
            else{
                printf("Carta 1 - [País: %s] População: %d\nCarta 2 - [País: %s] População: %d\n Resultado: Carta 2 vencedora!",pais1,populacao1,pais2,populacao2);
            }
            break;

        case 2:
            if(area1 > area2){   
                printf("Carta 1 - [País: %s] Área: %f\nCarta 2 - [País: %s] Área: %f\n Resultado: Carta 1 vencedora!",pais1,area1,pais2,area2);
            }
            else if(area1 == area2){
                printf("Carta 1 - [País: %s] Área: %f\nCarta 2 - [País: %s] Área: %f\n Resultado: Empate!",pais1,area1,pais2,area2);
            }
            else{
                printf("Carta 1 - [País: %s] area: %f\nCarta 2 - [País: %s] area: %f\n Resultado: Carta 2 vencedora!",pais1,area1,pais2,area2);
            }
            break;

        case 3:
            if(PIB1 > PIB2){   
                printf("Carta 1 - [País: %s] PIB: %f\nCarta 2 - [País: %s] PIB: %f\n Resultado: Carta 1 vencedora!",pais1,PIB1,pais2,PIB2);
            }
            else if(PIB1 == PIB2){
                printf("Carta 1 - [País: %s] PIB: %f\nCarta 2 - [País: %s] PIB: %f\n Resultado: Empate!",pais1,PIB1,pais2,PIB2);
            }
            else{
                printf("Carta 1 - [País: %s] PIB: %f\nCarta 2 - [País: %s] PIB: %f\n Resultado: Carta 2 vencedora!",pais1,PIB1,pais2,PIB2);
            }
            break;

        case 4:
            if(pontos1 > pontos2){   
                printf("Carta 1 - [País: %s] Número de pontos turísticos: %d\nCarta 2 - [País: %s] Número de pontos turísticos: %d\n Resultado: Carta 1 vencedora!",pais1,pontos1,pais2,pontos2);
            }
            else if(pontos1 == pontos2){
                printf("Carta 1 - [País: %s] Número de pontos turísticos: %d\nCarta 2 - [País: %s] Número de pontos turísticos: %d\n Resultado: Empate!",pais1,pontos1,pais2,pontos2);
            }
            else{
                printf("Carta 1 - [País: %s] Número de pontos turísticos: %d\nCarta 2 - [País: %s] Número de pontos turísticos: %d\n Resultado: Carta 2 vencedora!",pais1,pontos1,pais2,pontos2);
            }
            break;

        case 5:
            if(densidade_populacional1 < densidade_populacional2){   
                printf("Carta 1 - [País: %s] Densidade demográfica: %f\nCarta 2 - [País: %s] Densidade demográfica: %f\n Resultado: Carta 1 vencedora!",pais1,densidade_populacional1,pais2,densidade_populacional2);
            }
            else if(densidade_populacional1 == densidade_populacional2){
                printf("Carta 1 - [País: %s] Densidade demográfica: %f\nCarta 2 - [País: %s] Densidade demográfica: %f\n Resultado: Empate!",pais1,densidade_populacional1,pais2,densidade_populacional2);
            }
            else{
                printf("Carta 1 - [País: %s] Densidade demográfica: %f\nCarta 2 - [País: %s] Densidade demográfica: %f\n Resultado: Carta 2 vencedora!",pais1,densidade_populacional1,pais2,densidade_populacional2);
            }
            break;

        default:
            printf("Você escolheu um valor inválido!\nPor favor, tente novamente e escolha um valor válido dentre os apresentados!");

    }

    return 0;
}