#include <stdio.h>

using namespace std;
/* 
    = Task =
    
    Change the XXX, so the output :

    =* Arithmetic Operators *=
    Result: -65
    Result ++a: 13
    Result b--: 21

    =* Relational Operators *=
    a == b : 0
    a != b : 1
    a > b : 0
    a < b : 1
    a >= b : 0
    a <= b : 1

    =* Logical Operators *=
    Result 1: 1
    Result 2: 1
    Result 3: 1
    Result 3: 0

    =* Bitwise Operators*=
    Result 1: 1
    Result 2: 20
    Result 3: 7
    Result 4: 4
    Result 5: 13
    Result 6: 9
    Result 7: 1
    Result 8: 20
    Result 9: -1

*/

int main(){
    int a=XXX,b=XXX,c=93,d=80,e=5,f=76,g=129;

    /* Arithmetic Operators */
    printf("=* Arithmetic Operators *=\n");
    printf("Result: %d\n",a+++--b-c*d/f%g);
    printf("Result ++a: %d\n",++a);
    printf("Result b--: %d\n\n",b--);

    /* Relational Operators */
    printf("=* Relational Operators *=\n");
    printf("a == b : %d\n",a == b);
    printf("a != b : %d\n",a != b);
    printf("a > b : %d\n",a > b);
    printf("a < b : %d\n",a < b);
    printf("a >= b : %d\n",a >= b );
    printf("a <= b : %d\n\n",a <= b);
    
    /* Logical Operators */
    printf("=* Logical Operators *=\n");
    printf("Result 1: %d\n", 21 && 1);
    printf("Result 2: %d\n", 0 || 20);
    printf("Result 3: %d\n", (21 XXX 1 XXX 0));
    printf("Result 3: %d\n\n", (21 && !1 XXX 0));

    /* Bitwise Operators*/
    printf("=* Bitwise Operators*=\n");
    printf("Result 1: %d\n",21 & 1);
    printf("Result 2: %d\n",0 | 20);
    printf("Result 3: %d\n",5 ^ 2);
    printf("Result 4: %d\n",4 XXX 5);
    printf("Result 5: %d\n",9 XXX 5);
    printf("Result 6: %d\n",~(9 | 5) XXX ~(4 & 5));
    printf("Result 7: %d\n",5 >> 2);
    printf("Result 8: %d\n",5 << 2);
    printf("Result 9: %d\n\n",((2 & 3) | ~(4 ^ 5)) XXX 4);
    
    return 0;
}