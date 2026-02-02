#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta do Super Trunfo
typedef struct {
    char estado[50];           // Estado da cidade
    char codigo[10];           // Código da carta
    char nome[50];             // Nome da cidade
    int populacao;             // População
    float area;                // Área em km²
    float pib;                 // PIB
    int pontos_turisticos;     // Número de pontos turísticos
} Carta;

int main() {
    // Definindo duas cartas pré-definidas
    Carta carta1 = {"SP", "A01", "São Paulo", 12300000, 1521.11, 699000000000.0, 50};
    Carta carta2 = {"RJ", "B02", "Rio de Janeiro", 6000000, 437.80, 300000000000.0, 30};

    // Calculando Densidade Populacional e PIB per capita para cada carta
    float densidade1 = (float)carta1.populacao / carta1.area;
    float pib_per_capita1 = carta1.pib / carta1.populacao;

    float densidade2 = (float)carta2.populacao / carta2.area;
    float pib_per_capita2 = carta2.pib / carta2.populacao;

    // Exibindo os dados das cartas
    printf("Dados da Carta 1:\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n\n", pib_per_capita1);

    printf("Dados da Carta 2:\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n\n", pib_per_capita2);

    // Escolhendo o atributo para comparação: População (maior valor vence)
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d\n", carta1.nome, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2.nome, carta2.estado, carta2.populacao);

    // Determinando a carta vencedora
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
