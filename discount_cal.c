#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Garibeans, Ripeplantain, Plainrice;
    float Egg;

    printf("Gari and Beans (GHC):");
    scanf("%d" ,&Garibeans);// input the price of gari and beans

    printf("Ripe plantain (GHC) :");
    scanf ("%d", &Ripeplantain); // input the price of ripe plantain

    printf ("Plain Rice (GHC): ");
    scanf ("%d" ,&Plainrice); // input the price of plain rice

    printf("Egg (GHC): ");
    scanf ("%f" ,&Egg);     // input the price of egg

    float discount;
    printf("Discount (percentage): "); // input the discount applied
    scanf ("%f", &discount);

    float subtotal;
    subtotal = Garibeans + Ripeplantain + Plainrice + Egg;
    printf("SubTotal (GHC): %.2f\n",discount);
    printf("*****************************************************\n");

    discount = (subtotal*0.05);
    printf("Discount (GHC): % .2f\n",discount);
    printf("*****************************************************\n");

    float total;
    total = subtotal-discount;
    printf("Total (GHC): % .2f\n" ,total);








    return 0;
}
