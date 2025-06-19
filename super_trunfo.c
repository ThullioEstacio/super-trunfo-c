
#include <stdio.h>

// Estrutura para armazenar os dados de uma carta
struct Carta {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
};

int main() {
    // Declaração de duas cartas
    struct Carta carta1;
    struct Carta carta2;

    // Instruções para o usuário - Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^
]", carta1.nomeCidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.numPontosTuristicos);

    // Instruções para o usuário - Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o código da carta (ex: B03): ");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^
]", carta2.nomeCidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.numPontosTuristicos);

    // Impressão dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.numPontosTuristicos);

    // Impressão dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.numPontosTuristicos);

    return 0;
}
