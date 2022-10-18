#include <stdio.h>

/* Déclaration de constante Booléenne */
const int VRAI = 1;
const int FAUX = 0;

/*********************************************************************************/
/*                              Programme principal                              */
/*                                  Calculatrice                                 */
/*********************************************************************************/

void main()
{
    /* Déclaration des opérandes */
    int iEntier1, iEntier2;
    
    int iResultat;
    
    /* Déclaration de l'opérateur */
    char cOperateur;
    
    /* Déclaration d'un booléen d'impression du résultat */
    int iAutorisationImp;

    /* Boucle infinie */
    while(1)
    {   
        /* Sasie de l'opération */
        scanf("%d %c %d", &iEntier1, &cOperateur, &iEntier2);

        /* Initialisation de iAutorisationImp */
        iAutorisationImp = VRAI;

        /* Test sur l'opérateur */
        switch(cOperateur)
        {
            case '+': iResultat = iEntier1 + iEntier2; break;
            case '-': iResultat = iEntier1 - iEntier2; break;
            case '*': iResultat = iEntier1 * iEntier2; break;
            case '/':
                /* Si iEntier2 est nul */
                if(iEntier2 == 0)
                {
                    /* Impression d'un message d'erreur */
                    printf("Division par zero.");
                    
                    /* Affectation de FAUX à iAutorisationImp */
                    iAutorisationImp = FAUX;
                }
                /* Si iEntier2 est non nul */
                else iResultat = iEntier1 / iEntier2; break;
            case '%': iResultat = iEntier1 % iEntier2; break;
            default: {printf("L'operateur %c est incorrect.", cOperateur); iAutorisationImp = FAUX;}
        } /* Fin du switch */

    /* Si on peut imprimer le résultat, on l'imprime */
    if(iAutorisationImp) printf("Le resultat de l'operation %d %c %d est : %d\n", iEntier1, cOperateur, iEntier2, iResultat);

    } /* Fin du while(1) */
}