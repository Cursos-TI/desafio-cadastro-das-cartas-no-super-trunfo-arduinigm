#include <stdio.h>

int main() {
    char estado, codigo[3], cidade[20], estado2, codigo2[3], cidade2[20];
    int populacao, pontos_turisticos, populacao2, pontos_turisticos2;
    float area, pib, area2, pib2, pib_per_capita, pib_per_capita2, densidade, densidade2;

    printf("Insira os dados da Carta 1.\n");
    printf("Digite o Estado: ");
    scanf("%s", &estado);

    printf("Digite o Código: ");
    scanf("%s", &codigo);

    printf("Digite a Cidade: ");
    scanf("%s", &cidade);

    printf("Digite a População: ");
    scanf("%d", &populacao);

    printf("Digite a Área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos);

    densidade = populacao/area;
    pib_per_capita = pib/populacao;
        

    printf("Insira os dados da Carta 2.\n");
    printf("Digite o Estado: ");
    scanf("%s", &estado2);

    printf("Digite o Código: ");
    scanf("%s", &codigo2);

    printf("Digite a Cidade: ");
    scanf("%s", &cidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade2 = populacao2/area2;
    pib_per_capita2 = pib2/populacao2;
    

    printf("Cartas carregadas com sucesso. Dados das cartas:\n");
    printf("Carta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n", estado, codigo, cidade, populacao, area, pib, pontos_turisticos, densidade, pib_per_capita);
    printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontos_turisticos2, densidade2, pib_per_capita2);

    return 0;
}
