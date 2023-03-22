#include<iostream>
#include <cstdlib>
#include<bits/stdc++.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
	getch();
	for(int i=0;i<256;i++){
		printf("%c -> %d\t\t",i,i);
		if(i%5==0) printf("\n\n");
	}
}
