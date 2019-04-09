#include <stdio.h>

int main(){
    short myShort=5;
    short *shortPtr = &myShort;

    /*  Jika sudah mengerti dasar pointer di 3 baris ini, maka seharusnya sudah mengerti pointer of pointer, pointer of pointer of pointer, dst :D 
        Jadi, baca baik2 3 baris ini.
    */
    printf("myShort nilainya %hd dengan alamat %p\n", myShort, &myShort);
    printf("*shortPtr menyimpan alamat var myShort, dimana alamat shortPtr adalah %p dan nilainya %p dimana sama dengan alamat myShort yang disimpannya %p\n",&shortPtr, shortPtr,&myShort);
    printf("Karena kita memiliki alamat myShort yg disimpan di shortPtr, maka kita dapat mengakses value myShort melalui alamatnya yang sudah disimpan di shortPtr. Nilai myShort melalui shortPtr %d\n",*shortPtr);
    printf("\n\n");


    float myF = 32112.123;
    float *fPtr = &myF;
    float **fPtrPtr = &fPtr;
    printf("Alamat myF: '''%p''' Value myF: `%f`\n",&myF, myF);
    printf("Alamat fPtr: --%p-- Value fPtr: '''%p''', get value of address stored in fPtr: `%f` \n",&fPtr, fPtr, *fPtr);
    printf("Alamat fPtrPtr: %p Value fPtrPtr: --%p--, get value of address stored in fPtrPtr: `%f` \n",&fPtrPtr, fPtrPtr, **fPtrPtr);
    printf("Karena fPtrPtr nyimpan fPtr, maka cara tau alamat myF melaui fPtrPtr adalah : '''%p''', dimana ini adalah value yang disimpan oleh fPtr.\n",*fPtrPtr);
    printf("\n\n");
    printf("Pertanyaannya apakah pointer bisa menyimpan variable yang tipenya berbeda?\nDo it yourself!\nHere the example!\n");

    char x = 'X';
    float *xPtr = (float *)&x;
    printf("hai %c",((int)*xPtr)%65 + 55);
}