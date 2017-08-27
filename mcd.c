#include <stdio.h>
int mcd(int a,int b);
int main(){
	int a,b;
	scanf("%d,%d",&a,&b);
	printf("out:%d\n",mcd(a,b));
}

int mcd(int a,int b){
	if(b==0)
		return a;
	return mcd(b,a%b);
}

