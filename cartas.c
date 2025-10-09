#include <stdio.h>

struct Carta {
    char estado[30];
    char nome_da_cidade[30];
    char codigo_da_carta[5];
    int populacao;
    float area_km2;
    double PIB;
    int pontos_turisticos;
};

int main() {
    struct Carta cartas[2] = {
        {"São Paulo", "Guarulhos", "A01", 1349100, 319.19, 55084.22, 1035},
        {"Minas Gerais", "Ouro Preto", "B02", 77601, 1245.3, 3146107, 50}
    };

    printf("Cartas cadastradas:\n\n");

    for (int i = 0; i < 2; i++) {
        printf("Carta %d:\n", i + 1);
        printf(" Estado: %s\n", cartas[i].estado);
        printf(" Cidade: %s\n", cartas[i].nome_da_cidade);
        printf(" Código: %s\n", cartas[i].codigo_da_carta);
        printf(" População: %d\n", cartas[i].populacao);
        printf(" Área: %.2f km²\n", cartas[i].area_km2);
        printf(" PIB: %.2f\n", cartas[i].PIB);
        printf(" Pontos turísticos: %d\n\n", cartas[i].pontos_turisticos);
    }

    return 0;
}
