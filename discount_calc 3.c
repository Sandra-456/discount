#include <stdio.h>
#include <stdlib.h>

//Unit of fruits sold by Madam Hanson

  #define WATERMELON 4.0
  #define PINEAPPLE  5.0
  #define ORANGE     1.0
  #define GRAPES     7.0


int main()
{
   int w, p, o, g, N ;
   printf("**********************************************************************************************\n");

 printf ("Quantity of Watermelon: ");
   scanf("%d",&w);

   printf("Quantity of Pineapple: ");
   scanf("%d" ,&p);

   printf("Quantity of Orange: ");
   scanf("%d" ,&o);

   printf("Quantity of Grapes: ");
   scanf("%d",&g);

   printf("*********************************************************************************************\n");

   float totalamount;
   totalamount = (WATERMELON*w)+(PINEAPPLE*p)+(ORANGE*o)+(GRAPES*g);
   printf("Total Amt. (GHC):  %.2f\n" , totalamount);

   // Discount attracted

   N = w + p + o + g ;
   float discount;

   if (N<=2)
   {
    (discount = totalamount*0);

   }
   else if (N>2  && N<=5)
   {
    (discount = totalamount*0.02);
   }

    else if ( N>5  && N<=10)
   {

    (discount = totalamount*0.05);

   }
    else
    {
          (discount = totalamount*0.1);

    }

    printf("Discount. (GHC) : %.2f\n", discount);

    // Total amount to be paid
    float payableamount;
    payableamount = totalamount-discount;
    printf("Amount Payable. (GHC): %.2f\n" ,payableamount);
    printf("*********************************************************************************************\n");




    return 0;
}
