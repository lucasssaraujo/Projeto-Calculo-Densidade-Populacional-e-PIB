#include <stdio.h>
#include <string.h>

int main() {
    char sigla[5], cidade[30], codigo[5];
    int populacao1, populacao2, pontosTuristicos;
    float area1, area2, pib1, pib2, densidade1, pibPerCapta1, densidade2, pibPerCapta2;
    

    printf("Jogo de Cartas Super Trunfo!! \n\n");
    printf("Este jogo será baseado em cidades, você irá preencher as informações das cidade conforme é solicitado \n\n");
    

    //printf("Carta 1\n");
    printf("Estado: ");
    fgets(sigla, sizeof(sigla), stdin);
    sigla[strcspn(sigla, "\n")] = 0;

    /* Foi preciso utilizar getchar e limpar o /n, pois estava dando conflito entre fgets e o scanf.
    haviam campos que estavam sendo ignorados */

    printf("Código: ");    
    fgets(codigo, sizeof(codigo), stdin);
    codigo[strcspn(codigo, "\n")] = 0;

    printf("Cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("População: ");
    scanf("%d", &populacao1);
    getchar();

    printf("Área: ");
    scanf("%f", &area1);
    getchar();

    printf("PIB: ");
    scanf("%f", &pib1);
    getchar();

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);
    getchar();

    densidade1 = populacao1 / area1;     //implementação do desafio
    pibPerCapta1 =  pib1 / populacao1;


    printf("\n\n\nPrimeira Carta\n"
        "Estado: %s\n"
        "Código: %s\n"
        "Cidade: %s\n"
        "População: %d\n"
        "Área: %.2fkm²\n"
        "PIB: %.2f\n"
        "Número de Pontos Turísticos: %d\n"
        "Densidade Populacional: %.2f hab/km²\n"
        "PIB per Capita: %.2f reais"
        , sigla, codigo, cidade, populacao1, area1, pib1, pontosTuristicos, densidade1, pibPerCapta1);




    //printf("\n\nCarta 2\n");
    printf("\n\n\n\nEstado: ");
    fgets(sigla, sizeof(sigla), stdin);
    sigla[strcspn(sigla, "\n")] = 0;

    printf("Código: ");    
    fgets(codigo, sizeof(codigo), stdin);
    codigo[strcspn(codigo, "\n")] = 0;

    printf("Cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("População: ");
    scanf("%d", &populacao2);
    getchar();

    printf("Área: ");
    scanf("%f", &area2);
    getchar();

    printf("PIB: ");
    scanf("%f", &pib2);
    getchar();

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);
    getchar();

     densidade2 = populacao2 / area2;  //implementação do desafio
    pibPerCapta2 =  pib2 / populacao2;

    printf("\n\n\n\nSegunda Carta\n"
        "Estado: %s\n"
        "Código: %s\n"
        "Cidade: %s\n"
        "População: %d\n"
        "Área: %.2fkm²\n"
        "PIB: %.2f\n"
        "Número de Pontos Turísticos: %d\n"
        "Densidade Populacional: %.2f hab/km²\n"
        "PIB per Capita: %.2f reais"
        , sigla, codigo, cidade, populacao2, area2, pib2, pontosTuristicos, densidade2, pibPerCapta2);

    return 0;    
}
