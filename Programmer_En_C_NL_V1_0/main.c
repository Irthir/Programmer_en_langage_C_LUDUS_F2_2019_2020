#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAILLE 100
//Les pointeurs


int sommeEntiers(int, int);
void somEntiers(int, int,int *);
char * tabCar(char cChaine[100]);
int * tabInt(int nEntier[100]);


int main()
{

    //D�claration Pointeur

    //Un pointeur pointe sur une ref m�moire
    //Un pointeur lors de son initialisation doit avoir un r�f�rence NULL

    /*int *pnPointeurEntier=NULL;

    //Pointeur pointe sur r�ference nEntier
    int nEntier=10;

    pnPointeurEntier=&nEntier;

    *pnPointeurEntier=88;

    nEntier=500;

   // int **ppnEntier=&pnPointeurEntier;

   int nEntier2=200;


   nEntier=sommeEntiers(10,88);

   printf("%d\n",nEntier);

   int nResSomme=0;

   somEntiers(56,12,&nResSomme);

   printf("%d\n",nResSomme);

    */

   //char *pChar=NULL;

   char cChaine[TAILLE]="nicolas";

  // pChar=cChaine;









   return 0;
}

//fct sommeEntier
int sommeEntiers(int nA, int nB){


    return nA+nB;

}



void somEntiers(int nA, int nB,int *pnRes){

    *pnRes=nA+nB;


}










