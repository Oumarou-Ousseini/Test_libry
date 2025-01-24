#include "SampleLib.h"
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
 unsigned int result = 1;
 while ( value > 1 ) {
 result *= value;
 value --;
 }
 return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
 if ( pow == 0 ) return 1;
 if ( pow == 1 ) return value;
 int accumulator = 1;
 while( pow > 0 ) {
 accumulator *= value;
 pow--;
 }
 return accumulator;
}
// Definition d'une fonction qui affiche bonjour(exercice 1)
void direbonjour(){
	printf("bonjour\n");
}
// Définition d'une fonction qui donne l'inverse d'un nombre entier à 3 chiffres(Exercice 2)
int inverse(int x){
int inverse, centaine, dizaine, unite ;
    if(x >= 100 && x<= 999){
        centaine = x/100;
        dizaine = (x/10)%10;
        unite = x%10;
        inverse = unite*100 + dizaine*10 + centaine;
	}
    return inverse;
}
// Définition d'une fonction de calcul de produit de deux reels(Exercice 3)
float produit(float a, float b){
	float p;
	p=a*b;
	return p;
}
// Définition d'une fonction qui donne la parité d'un entier(Exercice 4)
void parite(int x){
	if(x%2==0)
	printf("le nombre est paire");
	else 
	printf("le nombre est impaire");
}
// Définition d'une fonction qui compare deux entiers(Exercice 5)
void comparaison(int a, int b){
	if(a==b)
	printf("%d=%d",a,b);
	else if(a<b)
	printf("%d<%d",a,b);
	else
	printf("%d>%d",a,b);
}
// Définition d'une fonction qui classe trois nombres entiers par ordre croissant(Exercice 6)
void classement(int x, int y, int z){
	if(x<y && y<z)
	printf("%d<%d<%d", x,y,z);
	else if(y<x && x<z)
	printf("%d<%d<%d", y,x,z);
	else if(z<x && x<y)
	printf("%d<%d<%d", z,x,y);
	else if(z<y && y<x)
	printf("%d<%d<%d", z,y,x);
	else if(y<z && z<x)
	printf("%d<%d<%d", y,z,x);
	else
	printf("%d<%d<%d", x,z,y);
}
// Définition d'une fonction de permutation du contenu de deux variables de type char en utilisant les pointeurs(Exercice 16)
void permutation(char *v, char *w){
char u = *v;
*v = *w;
*w = u;
printf("v= %c , w= %c\n", *v, *w);
}
// Définition d'une fonction qui renvoie la somme de deux entiers(Exercice 17)
int Somme(int a, int b){
	int somme;
	somme=a+b;
	return somme;
}

