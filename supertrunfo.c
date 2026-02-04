#include <stdio.h>

int main() {

    char estado[8];
    char codigoCarta[4];
    char nomeCidade[50];
    int numeroHabitantes;
    float area;
    float pib;
    int pontosTuristicos;

    printf("Digite o estado (sigla): ");
    scanf("%7s", estado);

    printf("Digite o codigo da carta: ");
    scanf("%3s", codigoCarta);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade);

    printf("Digite o numero de habitantes: ");
    scanf("%d", &numeroHabitantes); 

    printf("Digite a area (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em R$): ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos); 

    printf("\n--- Carta de Super Trunfo ---\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da Carta: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade); 
    printf("Numero de Habitantes: %d\n", numeroHabitantes);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos);
    return 0;
}