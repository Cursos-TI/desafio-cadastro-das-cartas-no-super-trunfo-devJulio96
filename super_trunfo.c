#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado01, codigo01[3], cidade01[20];
    unsigned long int populacao01;
    int pontosTuristicos01;
    float area01, PIB01, densidade01, percapta01;
    float superPoder01;
    
    char estado02, codigo02[3], cidade02[20];
    unsigned long int populacao02;
    int pontosTuristicos02;
    float area02, PIB02, densidade02, percapta02;
    float superPoder02;

    printf("SUPER TRUNFO - Cadastre suas cartas\n\n");
    printf("Instruções:\n\n");
    printf("Para o Estado, digite uma letra maiúscula de 'A' a 'H'.\n");
    printf("Para o Código da carta, digite um número de '1' a '4'.\n");
    printf("Para o Nome da Cidade, digite o nome desejado sem espaços e acentos.\n");
    printf("Para o População, Área, PIB e Pontos Turísticos, digite apenas números.\n\n");

    printf("Carta 1\n");
    printf("Estado: ");
    scanf(" %c", &estado01);
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
    densidade01 = (float) populacao01 / area01;
    percapta01 = (float) PIB01 / populacao01;
    superPoder01 = (float) populacao01 + area01 + PIB01 + (float) pontosTuristicos01 + percapta01 + (1/densidade01);
    printf("\n");
    
    printf("Carta 2\n");
    printf("Estado: ");
    scanf(" %c", &estado02);
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
    densidade02 = (float) populacao02 / area02;
    percapta02 = (float) PIB02 / populacao02;
    superPoder02 = (float) populacao02 + area02 + PIB02 + (float) pontosTuristicos02 + percapta02 + (1/densidade02);
    
    int resultadoPopulacao = populacao01 > populacao02;
    int resultadoArea = area01 > area02;
    int resultadoPIB = PIB01 > PIB02;
    int resultadoPontosTuristicos = pontosTuristicos01 > pontosTuristicos02;
    int resultadoDensidade = densidade01 < densidade02;
    int resultadoPercapta = percapta01 > percapta02;
    int resultadoSuperPoder = superPoder01 > superPoder02;

    printf("\nComparação de cartas:\n");
    printf("*** Carta 1 vence se o resultado for 1, Carta 2 vence se o resultado for 0\n");
    printf("População: %d\n", resultadoPopulacao);
    printf("Área: %d\n", resultadoArea);
    printf("PIB: %d\n", resultadoPIB);
    printf("Pontos Turísticos: %d\n", resultadoPontosTuristicos);
    printf("Densidade Populacional: %d\n", resultadoDensidade);
    printf("PIB per Capita: %d\n", resultadoPercapta);
    printf("Super Poder: %d\n", resultadoSuperPoder);
    return 0;
}
