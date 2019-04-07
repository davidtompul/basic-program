#include <stdio.h>

using namespace std;
    /*
        === Task === 

        1. What is the difference of unsigned and signed char?

        2. How if we store negative number in unsigned int?
        Run this code!
        unsign int myUI = -123;
        Then print it! What is the output?

        3. Why output of float different with double and long double?

        4. What the difference of double and long double?

        5. Is int size is according to the system architecture?

        6. Can we print hexadecimal of float?
    */
   
int main(){
    char c=65;
    unsigned char uc='R';
    signed char sc='E';

    short s=32767;
    unsigned short us=6535;
    
    int i=-32768;
    unsigned int ui=65535;

    long l=-2147483648;
    unsigned long ul=4294967295;

    float f=3.145674;
    double d=3.145674;
    long double ld=3.145674;




    printf("Char c is %c \n",c);
    printf("Unsigned Char uc is %c \n",uc);
    printf("Signed Char sc is %c \n",sc);
    printf("Short s is %hd \n",s);
    printf("Unsigned short us is %hd \n",us);
    printf("int i is %d \n",i);
    printf("Unsigned int ui is %u \n",ui);
    printf("long l is %ld \n",l);
    printf("Unsigned long ul is %lu \n",ul);
    printf("float f is %.40f \n",f);
    printf("double d is %.40lf \n",d);
    printf("long double ld is %.40Lf \n",ld);
    printf("unsigned int in hexa is %X\n",ui);



    return 0;

}