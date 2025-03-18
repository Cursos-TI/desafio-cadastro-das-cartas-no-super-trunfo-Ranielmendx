#include <stdio.h>

typedef struct {
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

void lerCarta(Carta *carta) {
    printf("Digite a população: ");
    scanf("%d", &carta->populacao);

    printf("Digite a área (km²): ");
    scanf("%f", &carta->area);

    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &carta->pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

void exibirCarta(Carta carta, int numero) {
    printf("\nCarta %d:\n", numero);
    printf("População: %d habitantes\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {
    Carta carta1, carta2;

    printf("Cadastro da Carta 1:\n");
    lerCarta(&carta1);

    printf("\nCadastro da Carta 2:\n");
    lerCarta(&carta2);

    printf("\n\nCartas cadastradas:\n");
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}
