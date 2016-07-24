#include <stdio.h>

void towers(int,char,char,char);

void main(){
	
	int n;
	scanf("%d",&n);
	towers(n,'A','C','B');
	
}

void towers(int n,char frompeg, char topeg, char auxpeg){
	
	if(n==1){
		
		printf("\n%s%c%s%c","move disk 1 from peg","from peg","to peg","topeg");
		return;
	}
	towers(n-1,frompeg,auxpeg,topeg);
	printf("\n%s%d%s%c%s%c","move disk ",n,"from peg ", frompeg,"topeg ",topeg);
	towers(n-1,auxpeg,topeg,frompeg);
}



