#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Point3D[49][3];
    int i, j, p;

    for( i=0; i<49; i++)
    {
        Point3D[i][0] = 0;
        Point3D[i][1] = 0;
        Point3D[i][2] = 0;
    }

    printf("Entrez les valeurs : \n");

    for( i=0; i<10; i++)
    {
        printf("\nPoint %d :\n", i+1);

        printf("\tx = ");
        scanf("%d",&Point3D[i][0]);

        printf("\ty = ");
        scanf("%d",&Point3D[i][1]);

        printf("\tz = ");
        scanf("%d",&Point3D[i][2]);

    }

    for( i=0; i<10; i++){
        printf("\nPoint %d : ",i+1);
        printf("x= %d  y= %d  z= %d  ", Point3D[i][0], Point3D[i][1], Point3D[i][2]);
    }

}
