#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int main(){
    /// Declaração de variáveis da primeira carta 
    char Estado1, Codigo1[4], Cidade1[50];
    int Turisticos1; // Turisticos é uma abreviação para os pontos turísticos
    float PIB1, Area1;
    unsigned long int Populacao1;

    /// Declaração de variáveis da segunda carta 
    char Estado2, Codigo2[4], Cidade2[50];
    int Turisticos2;
    float PIB2, Area2;
    unsigned long int Populacao2;

    /// Entrada de dados da primeira carta
    printf("--Cadastro da Primeira Carta--\n");
    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &Estado1); 

    printf("Digite o Código da Carta (ex: H04): \n"); 
    scanf(" %s", &Codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", &Cidade1);

    printf("Digite a População: \n");
    scanf(" %lu", &Populacao1);

    printf("Digite a Área: \n");
    scanf(" %f", &Area1);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf(" %d", &Turisticos1);

    printf("\n");

    /// Entrada de dados da segunda carta
    printf("--Cadastro da Segunda Carta--\n");
    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &Estado2);

    printf("Digite o Código da Carta (ex: H04): \n");
    scanf(" %s", &Codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", &Cidade2);

    printf("Digite a População: \n");
    scanf(" %lu", &Populacao2);

    printf("Digite a Área: \n");
    scanf(" %f", &Area2);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf(" %d", &Turisticos2);

    /// Calculoos de Pib per Capta e Densidade populacional
    float PerCapta1 = PIB1 / Populacao1;
    float DensiPop1 = Populacao1 / Area1;

    float PerCapta2 = (float) PIB2 / Populacao2;
    float DensiPop2 = (float) Populacao2 / Area2;

    /// DensiPopIn: Densidade populacional ao contrario, requisito do Super Poder
    float DensiPopIn1 = Area2 / Populacao1;
    float DensiPopIn2 = Area2 / Populacao2;


    float SuperPoder1 = (Populacao1 + Area1 + PIB1 + Turisticos1 + PerCapta1 + DensiPopIn1);
    float SuperPoder2 = (Populacao2 + Area2 + PIB2 + Turisticos2 + PerCapta2 + DensiPopIn2);

    printf("\n");

    /// Exibição das informações introduzidas
    printf("-Carta 1-\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Quantidade de Pontos Turísticos: %d\n", Turisticos1);
    printf("Densidade populacional: %.2f\n", DensiPop1);
    printf("Pib per Capta: %.2f\n", PerCapta1);


    printf("\n");

    printf("-Carta 2-\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Quantidade de Pontos Turísticos: %d\n", Turisticos2);
    printf("Densidade populacional: %.2f\n", DensiPop2);
    printf("Pib per Capta: %.2f\n", PerCapta2);

    /*printf("\n");
    /// Comparação das cartas
    printf("--Comparação de Cartas--\n");
    printf("População: Carta 1 Venceu %d\n", População1 > População2);
    printf("Área: Carta 1 Venceu %d\n", Área1 > Área2);
    printf("PIB: Carta 1 Venceu %d\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 Venceu %d\n", Turisticos1 > Turisticos2);
    printf("Densidade Populacional: Carta 1 Venceu %d\n", DensiPop1 > DensiPop2);
    printf("PIB per Capita: Carta 1 Venceu %d\n", PerCapta1 > PerCapta2);
    printf("Super Poder: Carta 1 Venceu %d\n", SuperPoder1 > SuperPoder2);*/

    printf("\n");

    int opcao;

    printf("Escolha o Atributo a ser comparado\n");
    printf("1. Pontos Turisticos\n");
    printf("2. Pib\n");
    printf("3. Área\n");
    printf("4. População\n");
    printf("5. Densidade Populacional\n");
    printf("6. Pib per Capta\n");
    printf("7. Super Poder\n");
    scanf("%d", &opcao);

    printf("\n");

    printf("Cidades Escolhidas:\n");
    printf(" %s E %s\n", Cidade1, Cidade2);
    printf("Atributo escolhido para comparação:\n");

    switch(opcao)
    {
        case 1:
            printf("Pontos Turísticos\n");
            break;
        case 2:
            printf("PIB\n");
            break;
        case 3:
            printf("Área\n");
            break;
        case 4:
            printf("População\n");
            break;
        case 5:
            printf("Densidade Populacional\n");
            break;
        case 6:
            printf("PIB per Capta\n");
            break;
        case 7:
            printf("Super Poder\n");
            break;
        default:
            printf("Opção Inválida\n");
            break;
    }

    switch(opcao)
    {
        case 1:
            printf("Pontos Turísticos:\n");
            printf("Carta 1: %d\n", Turisticos1);
            printf("Carta 2: %d\n", Turisticos2);

            if (Turisticos1 > Turisticos2) 
            {
                printf("Jogador 1 ganhou\n");
            }
            else if (Turisticos1 == Turisticos2)
            {
                printf("Atributos Empatados\n");
            }
            else 
            {
                printf("Jogador 2 ganhou\n");
            }
            break;

        case 2:
            printf("PIB:\n");
            printf("Carta 1: %.2f\n", PIB1);
            printf("Carta 2: %.2f\n", PIB2);

            if (PIB1 > PIB2) 
            {
                printf("Jogador 1 ganhou\n");
            }
            else if (PIB1 == PIB2)
            {
                printf("Atributos Empatados\n");
            }
            else 
            {
                printf("Jogador 2 ganhou\n");
            }
            break;

        case 3:
            printf("Área:\n");
            printf("Carta 1: %.2f\n", Area1);
            printf("Carta 2: %.2f\n", Area2);

            if (Area1 > Area2) 
            {
                printf("Jogador 1 ganhou\n");
            }
            else if (Area1 == Area2)
            {
                printf("Atributos Empatados\n");
            }
            else 
            {
                printf("Jogador 2 ganhou\n");
            }
            break;

        case 4:
            printf("População:\n");
            printf("Carta 1: %lu\n", Populacao1);
            printf("Carta 2: %lu\n", Populacao2);

            if (Populacao1 > Populacao2) 
            {
                printf("Jogador 1 ganhou\n");
            }
            else if (Populacao1 == Populacao2)
            {
                printf("Atributos Empatados\n");
            }
            else 
            {
                printf("Jogador 2 ganhou\n");
            }
            break;

        case 5:
            printf("Densidade Populacional:\n");
            printf("Carta 1: %.2f\n", DensiPop1);
            printf("Carta 2: %.2f\n", DensiPop2);

            if (DensiPop1 > DensiPop2) 
            {
                printf("Jogador 1 ganhou\n");
            }
            else if (DensiPop1 == DensiPop2)
            {
                printf("Atributos Empatados\n");
            }
            else 
            {
                printf("Jogador 2 ganhou\n");
            }
            break;

        case 6:
            printf("PIB per Capta:\n");
            printf("Carta 1: %.2f\n", PerCapta1);
            printf("Carta 2: %.2f\n", PerCapta2);

            if (PerCapta1 > PerCapta2) 
            {
                printf("Jogador 1 ganhou\n");
            }
            else if (PerCapta1 == PerCapta2)
            {
                printf("Atributos Empatados\n");
            }
            else 
            {
                printf("Jogador 2 ganhou\n");
            }
            break;

        case 7:
            printf("Super Poder:\n");
            printf("Carta 1: %.2f\n", SuperPoder1);
            printf("Carta 2: %.2f\n", SuperPoder2);

            if (SuperPoder1 > SuperPoder2) 
            {
                printf("Jogador 1 ganhou\n");
            }
            else if (SuperPoder1 == SuperPoder2)
            {
                printf("Atributos Empatados\n");
            }
            else 
            {
                printf("Jogador 2 ganhou\n");
            }
            break;

        default:
            printf("Opção Inválida\n");
            break;
    }

    return 0;

}