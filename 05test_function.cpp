#include <stdio.h>

using namespace std;
/* 
    = Task =
    
    Change the XXX, so the output :
    
    -801-801-
    -
    -
    -0-
    880881-
    -
    -0-
    -841-
    -0-
    -0-
*/
float func2(char karakter, int key){
    karakter = karakter << (key % 9);

    int  dev=1, bin=1;
    for(;key/bin;){
        printf("%d%d",karakter%255,(key/bin)%2);
        dev*=10;
        bin*=2;
    }

    return (float)karakter*(key/(float)dev);
}

int func3(float f, bool b, int x){
    if (x<=0){
        return x;
    }
    printf("-\n");
    return func3(f,b,--x);
}

void func1(char karakter, int key){
    do{
        printf("-%d-\n",func3(func2(karakter,key),!(key%5%2),key));
    }while(key--);
}

int main(){
    func1(XXX,XXX);
    return 0;
}