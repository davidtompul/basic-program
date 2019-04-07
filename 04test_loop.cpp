#include <stdio.h>

using namespace std;
/* 
    = Task =
    
    Change the XXX, so the output :
    
    Hello
    Current i: 128
    Current i: 64
    Current i: 32
    Current i: 16
    Current i: 8
    Current i: 4
    Current i: 2
    My Long is 128
    My Long is 256
    My Long is 512
    end
*/

int main(){
    int x = 0;

    while(++x){
        printf("Hello\n");
        int i;
        for(i=128; i XXX 1; i >>= 1 ){
            printf("Current i: %d\n",i);
        }

        do{
            if(i==1)
                x XXX;
        }while(!(i==1) || (x<27));
      
        long l = 128;
        for(;true; x=2){
            if(l==1024 ){
                XXX;
            } 
            printf("My Long is %ld\n",l);
            l<<=1;
        }

        if(!(x%2))
            break;
        else 
            continue;
    }
    
    printf("end");
    return 0;
}