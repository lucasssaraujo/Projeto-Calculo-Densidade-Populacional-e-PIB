#include <stdio.h>
#include <string.h>

int main() {
    char sigla[5], cidade[30], codigo[5];
    int populacao, pontosTuristicos;
    float area, pib;
    

    printf("Jogo de Cartas Super Trunfo!! \n\n");
    printf("Este jogo será baseado em cidades, você irá preencher as informações das cidade conforme é solicitado \n\n");
    

    printf("Carta 1\n");
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
    scanf("%d", &populacao);
    getchar();

    printf("Área: ");
    scanf("%f", &area);
    getchar();

    printf("PIB: ");
    scanf("%f", &pib);
    getchar();

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);
    getchar();




    printf("\n\nCarta 2\n");
    printf("Estado: ");
    fgets(sigla, sizeof(sigla), stdin);
    sigla[strcspn(sigla, "\n")] = 0;

    printf("Código: ");    
    fgets(codigo, sizeof(codigo), stdin);
    codigo[strcspn(codigo, "\n")] = 0;

    printf("Cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("População: ");
    scanf("%d", &populacao);
    getchar();

    printf("Área: ");
    scanf("%f", &area);
    getchar();

    printf("PIB: ");
    scanf("%f", &pib);
    getchar();

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);
    getchar();

    return 0;    
}
