#include <stdio.h>
#include <stdlib.h>
#include "SampleLib.c"
int main() {
 int result = power( 2, 3 );
 printf( "2³ == %d\n", result );
 result = fact( 6 );
 printf( "6! == %d\n", result );
 printf("\tExercice 1\n");
 direbonjour();
 printf("\tExercice 2\n");
 int e, f;
 printf("Entrer un nombre entier a 3 chiffres:");
 scanf("%d",&e);
 f=inverse(e);
 printf("l inverse est %d",f);
 printf("\n");
 printf("\tExercice 3\n");
 printf("Entrer deux reels a et b:");
 float a,b;
 scanf(" %f%f",&a,&b);
 float p=produit(a, b);
 printf("le produit est %.2f\n",p);
 printf("\tExercice 4\n");
 int n;
 printf("Entrer un nombre entier n:");
 scanf("%d",&n);
 parite(n);
 printf("\n");
 printf("\tExercice 5\n");
 int c, d;
 printf("Entrer deux entiers dont vous voulez comparer:");
 scanf("%d%d",&c,&d);
 comparaison(c, d);
 printf("\n");
 printf("\tExercice 6\n");
 int x, y, z;
 printf("Entrer trois entiers dont vous voulez classer dans l ordre croissant:");
 scanf("%d%d%d",&x,&y,&z);
 classement(x, y, z);
 printf("\n");
 printf("\tExercice 16\n");
 char v,w;
 printf("Donner un caractere a v et w:");
 scanf(" %c %c",&v,&w);
 permutation( &v, &w );
 printf("\n");
 printf("\tExercice 17\n");
 int g, h, somme;
 printf("Entrer deux entiers pour effectuer la somme:");
 scanf("%d%d",&g,&h);
 somme=Somme(g, h);
 printf("la somme est egale a: %d",somme);
 
 return EXIT_SUCCESS;

}

