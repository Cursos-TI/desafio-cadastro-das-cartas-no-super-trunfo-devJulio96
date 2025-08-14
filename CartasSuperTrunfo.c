#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
        char estado01;
    char codigo01[3];
    char cidade01[20];
    int populacao01;
    float area01;
    float PIB01;
    int pontosTuristicos01;

    char estado02;
    char codigo02[3];
    char cidade02[20];
    int populacao02;
    float area02;
    float PIB02;
    int pontosTuristicos02;

    printf("SUPER TRUNFO - Cadastre suas cartas\n\n");
    printf("Instruções:\n\n");
    printf("Para o Estado, digite uma letra maiúscula de 'A' a 'H'.\n");
    printf("Para o Código da carta, digite um número de '1' a '4'.\n");
    printf("Para o Nome da Cidade, digite o nome desejado sem espaços e acentos.\n");
    printf("Para o População, Área, PIB e Pontos Turísticos, digite apenas números.\n\n");

    printf("Carta 1\n");
    printf("Estado: ");
    scanf("%c", &estado01);
    printf("Código: ");
    scanf("%s", codigo01);
    printf("Nome da Cidade: ");
    scanf("%s", cidade01);
    printf("População: ");
    scanf("%d", &populacao01);
    printf("Área: ");
    scanf("%f", &area01);
    printf("PIB: ");
    scanf("%f", &PIB01);
    printf("Numero de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos01);
    printf("\n");
    
    printf("Carta 2\n");
    printf("Estado: ");
    scanf("\n%c", &estado02);
    printf("Código: ");
    scanf("%s", codigo02);
    printf("Nome da Cidade: ");
    scanf("%s", cidade02);
    printf("População: ");
    scanf("%d", &populacao02);
    printf("Área: ");
    scanf("%f", &area02);
    printf("PIB: ");
    scanf("%f", &PIB02);
    printf("Numero de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos02);
    printf("\n");
    
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado01);
    printf("Código: %c0%s\n", estado01, codigo01);
    printf("Nome da Cidade: %s\n", cidade01);
    printf("População: %d\n", populacao01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2f bilhões de reais\n", PIB01);
    printf("Numero de Pontos Turísticos: %d\n\n", pontosTuristicos01);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado02);
    printf("Código: %c0%s\n", estado02, codigo02);
    printf("Nome da Cidade: %s\n", cidade02);
    printf("População: %d\n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: %.2f bilhões de reais\n", PIB02);
    printf("Numero de Pontos Turísticos: %d\n", pontosTuristicos02);
    return 0;
}
