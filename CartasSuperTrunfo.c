#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura para uma carta
typedef struct {
    char codigo[4]; // Exemplo: A01
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

int main() {
    // Declarando duas cartas
    Carta carta1, carta2;

    // Entrada de dados para a primeira carta
    printf("\n--- Cadastro da Carta 1 ---\n");
    printf("Código da cidade (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Calculando novos atributos para a primeira carta
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib * 1000000000 / carta1.populacao;

    // Entrada de dados para a segunda carta
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Código da cidade (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Calculando novos atributos para a segunda carta
    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib * 1000000000 / carta2.populacao;

    // Limpar a tela
    system("clear");

    // Exibindo os dados das cartas
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade_populacional);
    printf("PIB per Capita: %.2f\n", carta1.pib_per_capita);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Código: %s\n", carta2.codigo);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade_populacional);
    printf("PIB per Capita: %.2f\n", carta2.pib_per_capita);

    return 0;
}
