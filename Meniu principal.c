#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void menu()
{
	int alegere;
	printf("MENIU PRINCIPAL\n");
	printf("Apasati pe tastele de la 1 la 5 pentru a accesa optiunile: \n");
	printf("1.Adaugare persoana noua.\n");
	printf("2.Calculeaza BMI-ul pentru toate persoanele.\n");
	printf("3.Afiseaza numele unei persoane dupa ID.\n");
	printf("4.Afiseaza valorile medii pentru toate persoanele (greutate, inaltime si BMI)\n");
	printf("5.Afiseaza integral toate datele persoanelor\n");
	printf("Introdu tasta: ");
	scanf("%d", &alegere);
	switch (alegere)
	{
	case 1:
	{
		printf("Ai ales prima optiune");
		break;
	}
	case 2:
	{
		printf("Ai ales a doua optiune");
		break;
	}
	case 3:
	{
		printf("Ai ales a treia optiune");
		break;
	}
	case 4:
	{
		printf("Ai ales a patra optiune");
		break;
	}
	case 5:
	{
		printf("Ai ales a cincea optiune");
		break;
	}
	}













}