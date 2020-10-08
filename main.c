#include <stdio.h>

int main() {
    /******************************Exercice n°1*********************************************/
    for(int i=0;i<105;i=i+=5)
    {
        printf("%d\n",i);
    }
    /*****************************Exercice n°2************************************************/
   for(int i=100;i>0;i-=10)
    {
      printf("%d\n",i);
    }
   /*****************************Exercice n°3**************************************************/
   int pas,debut,fin;
   printf("Veuillez saisir le debut");
   scanf("%d",&debut);
   printf("Veuillez saisir la fin");
   scanf("%d",&fin);
   printf("Veuillez saisir le pas");
   scanf("%d",&pas);
   for(int i=debut;i<fin;i+=pas)
   {
       printf("%d\n",i);
   }





    return 0;
}
