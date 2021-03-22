

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>




typedef struct Persoana
{

    int id;
    float inaltimea, gerutatea, bmi;
    char nume[50];

} Persoana;

Persoana persoana_array[100];
int persoana_id = 0;
bool get_back_to_menu;


float BMI (float weight, float height)
{
    float results = ((weight)/(height*height))*10000;

    return results;
}

Persoana adugarea(int ID)
{

    Persoana aux;
    double gerutatea, inaltimea, bmi_result ;
    char nume[50];


    printf("Va rugam as intraduceti numelelui persoane: ");
    scanf("%s", nume);
    printf("Va rugam as intraduceti gerutatea in kilograme intregi: ");
    scanf("%lf", &gerutatea);
    printf("Va rugam sa intraduceti inaltimea in centimetri intregi:");
    scanf("%lf", &inaltimea);


    bmi_result = BMI(gerutatea, inaltimea);
    aux.id = ID;
    strcpy(aux.nume, nume);
    aux.gerutatea = gerutatea;
    aux.bmi = bmi_result;
    aux.inaltimea = inaltimea;



    return aux;
}

void medii()
{

    float rezult_bmi;
    float rezult_inaltimea;
    float rezult_gerutatea;

    for (int i = 0; i <= persoana_id; ++i)
    {
        rezult_bmi += persoana_array[i].bmi;
        rezult_inaltimea += persoana_array[i].inaltimea;
        rezult_gerutatea += persoana_array[i].gerutatea;
    }
    printf(" medii bmi =  %.5f\n",rezult_bmi/persoana_id );
    printf(" medii inaltimea =  %.5f\n",rezult_inaltimea/persoana_id );
    printf(" medii gerutatea =  %.5f\n",rezult_gerutatea /persoana_id);
}

void menu_adugare()
{
    int  alegere;
    do
    {
        persoana_array[persoana_id] = adugarea(persoana_id);
        persoana_id ++;
        printf("Daca vreti sa adugati alta persoana, va rog apasati pe tastele de 1 sau \n daca verti sa intoarceti la menu perincipal va rog apasati pe tastele de 0:");
        scanf("%d", &alegere);
    }
    while( alegere == 1 );

}


void menu_bmi()
{


    for (int i = 0; i <= persoana_id; ++i)
    {
        if (persoana_array[i].bmi == 0)
        {
            break;
        }
        printf("Persoana cu ID %d si nume %s are BMI = %f\n",persoana_array[i].id, persoana_array[i].nume, persoana_array[i].bmi);
    }
}

void menu()
{
    int alegere;
    bool next;
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
        menu_adugare();
        printf("\n");
        menu();
        break;
    }
    case 2:
    {
        menu_bmi();
        printf("\n Sa intoatceti la menu,va rog apasati pe tastele de 0: \n ");
        scanf("%d", &alegere);
        if(alegere == 0)
        {
            menu();
        }
        break;
    }
    case 3:
    {
        printf("Ai ales a treia optiune");
        break;
    }
    case 4:
    {
        medii();
        printf("\n Sa intoatceti la menu,va rog apasati pe tastele de 0: \n ");
        scanf("%d", &alegere);
        if(alegere == 0)
        {
            menu();
        }
        break;
    }
    case 5:
    {
        printf("Ai ales a cincea optiune");
        break;
    }
    }

}


int main()
{
    menu();
    return 0;
}


