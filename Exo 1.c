#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void conversion(char *line, char *resultat);

int main(void)
{
    char line[255];
    char resultat[255];

    printf("Entrez une phrase: ") ;
    scanf("%s", line ) ;

    conversion(line, resultat);
    printf("%s", resultat) ;

    return (0);
}

void conversion(char *line, char *resultat)
{
    int maj = 0;
    int i ;
    for(i = 0; i < strlen(line); i++)
    {

        resultat[i] = line[i];
        if (resultat[i] >= 'A' && resultat[i] <= 'Z')
        {
            resultat[i] += 32;
            maj ++;
        }
    }
    resultat[i] = 0;    // Termine la cha�ne r�sultat.
    printf("text apr�s modification:",maj);

}
