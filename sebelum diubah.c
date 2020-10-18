#include<stdio.h>


int main()
{ 
    int hektare, are, m_persegi, cm_persegi;

    printf("masukkan luas dalam satuan hektare : ");
    scanf ("%d" ,&hektare);

    are = hektare * 100;
    m_persegi = are * 100;
    cm_persegi = m_persegi * 1000;

    printf ("konversi satuan luas adalah %d satuan hektare : ", hektare);
    printf ("\n %d are \n %d meter persegi \n %d centimeter persegi \n", are, m_persegi, cm_persegi);
    
    return 0;
}