#include <stdio.h>

// Desafio Super Trunfo - Nível Novato
// Tema 2 - Comparação das Cartas

int main(){
    //Declaração das variaveis necessárias para armanezar os atributos das duas cartas
    int  populacao1, pontos1, populacao2, pontos2;
    char carta1[50], nome1[50], estado1[50], carta2[50], nome2[50], estado2[50];
    char codigo1[5], codigo2[5];
    float area1, PIB1, area2, PIB2;
    float densidade_populacional1, densidade_populacional2, pib_percapta1, pib_percapta2;

    //Cadastro da carta 1
    printf("Carta 1:\n");

    printf("Digite o Estado referente a Carta 1:\n");
    //Uso do operador %[^n] para conseguir ler uma linha inteira incluindo espaços
    //esse operador lê todos os caracteres até que um anova linha (\n) seja encontrada
    //permitindo assim armazenar nomes compostos.
    scanf("%[^\n]", estado1);
    //Foi necessario usar getchar() para limpar o input buffer removendo \n caractere indesejado
    //O programa não estava parando em alguns 'scanf', já executando o próximo printf
    //Essa função resolveu esse problema.
    getchar();

    printf("Digite o Código do Estado:\n");
    scanf("%s", codigo1);
    getchar();

    printf("Digite o Nome da cidade:\n");
    scanf("%[^\n]", nome1);
    getchar();   
    
    printf("Digite a População:\n");
    scanf("%d", &populacao1);

    printf("Digite a Área do Estado:\n");
    scanf("%f", &area1);

    printf("Digite o PIB do Estado:\n");
    scanf("%f", &PIB1);

    printf("Digite o Número de pontos Turísticos do Estado:\n");
    scanf("%d", &pontos1);

    //Cadastro da carta 2
    printf("Carta 2:\n");
    getchar();
    printf("Digite o Estado referente a Carta 2:\n");
    scanf("%[^\n]", estado2);
    getchar();

    printf("Digite o Código do Estado:\n");
    scanf("%s", codigo2);
    getchar();
    printf("Digite o Nome da cidade:\n");
    scanf("%[^\n]", nome2);
    getchar();   
    
    printf("Digite a População:\n");
    scanf("%d", &populacao2);

    printf("Digite a Área do Estado:\n");
    scanf("%f", &area2);

    printf("Digite o PIB do Estado:\n");
    scanf("%f", &PIB2);

    printf("Digite o Número de pontos Turísticos do Estado:\n");
    scanf("%d", &pontos2);

    //Calculo da Densidade demográfica
    densidade_populacional1 = populacao1/area1;
    densidade_populacional2 = populacao2/area2;

    //Calculo do PIB per capita
    pib_percapta1 = PIB1/area1;
    pib_percapta2 = PIB2/area2;
    
    //Exibição dos atributos da carta 1
    printf("========= Carta 1 ==========\n");
    printf("Estado: %s\n", estado1);
    printf("Código do estado: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %f\n", densidade_populacional1);
    printf("PIB per capita: %f\n\n", pib_percapta1);

    //Exibição dos atributos da carta 2
    printf("========= Carta 2 ==========\n");
    printf("Estado: %s\n", estado2);
    printf("Código do estado: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade Populaciona2: %f\n", densidade_populacional2);
    printf("PIB per capita: %f\n\n", pib_percapta2);

    //Comparação entre as cartas cadastradas
    //O atributo escolhido para comparação foi o PIB per capita
    printf("Comparação de cartas (Atributo: PIB per capita)\n");
    if(pib_percapta1 > pib_percapta2){   
        printf("Carta 1 - %s(%s): %f\nCarta 2 - %s(%s): %f\n Resultado: Carta 1 vencedora!",nome1,codigo1,pib_percapta1,nome2,codigo2,pib_percapta2);
    }
    else{
        printf("Carta 1 - %s(%s): %f\nCarta 2 - %s(%s): %f\n Resultado: Carta 2 vencedora!",nome1,codigo1,pib_percapta1,nome2,codigo2,pib_percapta2);
    }
    return 0;
}

