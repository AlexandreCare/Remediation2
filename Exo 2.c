#include <stdio.h>
#include <math.h>
 main()
{
 int a, b, c;

 printf("Calcul des solutions reelles d'une équation du second \n");
 printf("degre de la forme   ax^2 + bx + c = 0 \n\n");

 saisie(a,b,c);

 calcul(a,b,c);
}


void saisie(float *a,float *b,float *c)
 {
    printf("Introduisez les valeurs pour a, b, et c : \n");

    printf("\na : ");
    scanf("%i",&a);

    printf("\nb : ");
    scanf("%i",&b);

    printf("\nc : ");
    scanf("%i",&c);
 }

 void calcul(float a,float b,float c)
 {
 double d; /* Discriminant */
      /* Calcul du discriminant b^2-4ac */
 d = pow(b,2) - 4.0*a*c;

 /* Distinction des différents cas */
 if (a==0 && b==0 && c==0) /* 0x = 0 */
         printf("Tout reel a une solution.\n");
 else if (a==0 && b==0)  /* Contradiction: c # 0 et c = 0 */
         printf("Cette equation n'a pas de solutions.\n");
 else if (a==0) /* bx + c = 0 */
    {
     printf("La solution est :\n");
     printf(" x = %.4f\n", (double)c/b);
    }
 else if (d<0)  /* b^2-4ac < 0 */
     printf("Cette equation n'a pas de solutions.\n");
 else if (d==0) /* b^2-4ac = 0 */
    {
     printf("Cette equation a une seule solution:\n");
     printf(" x =  %.4f\n", (double)-b/(2*a));
    }
 else /* b^2-4ac > 0 */
    {
     printf("Les solutions reelles sont :\n");
     printf(" x1 = %.4f\n", (-b+sqrt(d))/(2*a));
     printf(" x2 = %.4f\n", (-b-sqrt(d))/(2*a));
    }
  return 0;
 }
