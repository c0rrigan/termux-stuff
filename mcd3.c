#include <stdio.h>
int mcd3(int,int,int);
int max(int x,int y);
int main(){
    printf("max:%d\n",max(6,11));
}
int mcd3(int a,int b,int c){
    int temp;
    if(max(a,b)>c){
        
}
int max(int x,int y){
    return (x>y)?x:y;
}
