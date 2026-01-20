#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

  // Área para definição das variáveis para armazenar as propriedades das cidades

struct carta
{
  char estado;
char codigo [10];
char cidade [50];
int populacao;
float area;
float pib;
int pontos_turisticos;
};

  // Área para entrada de dados
int main () {

// Carta 01
struct carta carta1;

printf ("\n-----PRIMEIRA CARTA------\n");

printf ("Digite o estado (A a H)  ");
scanf ("%c", &carta1.estado);

scanf ("%*c");

printf ("Digite o codigo: (Ex: A01)");
scanf (" %s", carta1.codigo);

printf ("Digite o nome da cidade: ");
scanf (" %s", carta1.cidade);

printf ("Digite a população: ");
scanf (" %d", &carta1.populacao);

printf ("Digite a area: (em km²) ");
scanf (" %f", &carta1.area);

printf ("Digite o pib: ");
scanf (" %f", &carta1.pib);

printf ("Digite o numero de pontos turisticos: ");
scanf (" %d", &carta1.pontos_turisticos);

// Carta 02
struct carta carta2;

printf ("\n----SEGUNDA CARTA-----\n");

printf ("Digite o estado (A a H):  ");
scanf (" %c", &carta2.estado);

scanf ("%*c");

printf ("Digite o codigo (Ex: A01): ");
scanf (" %s", carta2.codigo);

printf ("Digite o nome da cidade: ");
scanf (" %s", carta2.cidade);

printf ("Digite a população: ");
scanf (" %d", &carta2.populacao);

printf ("Digite a area: (em km2) ");
scanf (" %f", &carta2.area);

printf ("Digite o pib: ");
scanf (" %f", &carta2.pib);

printf ("Digite o numero de pontos turisticos: ");
scanf (" %d", &carta2.pontos_turisticos);

  // Área para exibição dos dados da cidade

printf ("\n ----- Dados da Carta 01 -----\n");
printf ("Estado: %c\n" , carta1.estado);
printf ("Codigo: %s\n" , carta1.codigo);
printf ("Cidade: %s\n" , carta1.cidade);
printf ("Populacao: %d habitantes\n" , carta1.populacao);
printf ("Area: %.2fkm2\n", carta1.area);
printf ("PIB: %f bilhoes de reais\n", carta1.pib);
printf ("Pontos turisticos: %d\n", carta1.pontos_turisticos);

printf ("\n ----- Dados da Carta 02 -----\n");

printf ("Estado: %c\n" , carta2.estado);
printf ("Codigo: %s\n" , carta2.codigo);
printf ("Cidade: %s\n" , carta2.cidade);
printf ("Populacao: %d habitantes\n" , carta2.populacao);
printf ("Area: %.2fkm2\n", carta2.area);
printf ("PIB: %f bilhoes de reais\n", carta2.pib);
printf ("Pontos turisticos: %d\n", carta2.pontos_turisticos);

return 0;
}
