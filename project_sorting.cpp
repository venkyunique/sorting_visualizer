#include<iostream>
#include <cstdlib>
#include<bits/stdc++.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include<unistd.h>

// coustom header files
#include"algorithms.h"
#include"box.h"
#include"random_array.h"

using namespace std;


void menu();
void visualize(vector<int> v);
int select_option();
void clear_graph();

int main() {

	getch();
	boxDD(125,27,5,2);	// main box
	gotoxy(49,10);
	cout << "* S O R T I N G    V I S U A L I Z E R *";
	lineS(51,11,36);
	lineS(51,9,36);
	gotoxy(63,15);
	cout << "Done by:-";
	gotoxy(62,17);
	cout << "K.VENKATESH";
	gotoxy(55,28);
	cout << "press any key to continue...";
	getch();
	system("cls");
	menu();
	return 0;
}
void menu() {
	system("cls");
	boxDD(125,27,5,2);
	gotoxy(54,5);
	cout << "SELECT A SORTING TECHNIQUE :";
	lineS(54,6,28);
	gotoxy(60,10);
	cout << "1. BUBBLE SORT";	//
	gotoxy(60,12);
	cout << "2. SELECTION SORT";	//
	gotoxy(60,14);
	cout << "3. INSERTION SORT";	//
	gotoxy(60,16);
	cout << "4. MERGE SORT";	//
	gotoxy(60,18);
	cout << "5. QUICK SORT";	//
	gotoxy(60,20);
	cout << "6. SHELL SORT";
	int n=select_option();
	boxDD(125,27,5,2);
	// ----------------------------------generating an array-------------------------
	vector<int> v;
	v=random_array_generator();
	// ------------------------------------------------------------------------------
	switch(n) {
		case 1:
			BubbleSort(v);
			system("cls");
			visualize(v);
			break;
		case 2:
			SelectionSort(v);
			system("cls");
			visualize(v);
			break;
		case 3:
			InsertionSort(v);
			system("cls");
			visualize(v);
			break;
		case 4:
			MergSort(v);
			system("cls");
			visualize(v);
			break;
		case 5:
			QuickSort(v);
			system("cls");
			visualize(v);
			break;
		case 6:
			ShellSort(v);
			system("cls");
			visualize(v);
			break;
		default:
			gotoxy(54,22);
			cout << "!! choose correct option :)";
			getch();
			menu();
	}
}
void visualize(vector<int> v) {
	for(int i=0;i<v.size();i++){
		cout << v[i] << " ";
	}
}
//	cout << v.size() << endl;
//	int arr[v.size()/20][20];
//	int in=0;
//	for(int i=0; i<v.size()/20; i++) {
//		for(int j=0; j<20; j++) {
//			arr[i][j]=v[in];
//			in++;
//		}
//	}
//	for(int i=0; i<v.size()/20; i++) {
//		for(int j=0; j<20; j++) {
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
// ------------------------------------------print the graphs------------------
//	cout << endl;
//	cout << endl;
//	for(int i =0;i<20;i++)
//	cout << arr[19][i] << " ";
//	lineS(27,25,80);
//	for(int i=28;i<=107;i=i+4){
//		for(int j=0;j<arr[10][i-28];j++){
//			gotoxy(i,24-j);
//			printf("*");
//			gotoxy(i,26);
//			cout << arr[10][i-28];
//		}
//	}
//}
//---------------------------------------------------------------------------
//void visualize(vector<int> v){
	// bax center (x = 67)
//	boxDD(125,27,5,2);	// main box
//	lineS(27,25,80);
//	int y=24;
//	for(int i=28;i<=107;i=i+4){
//		for(int j=0;j<v[i-28];j++){
//			gotoxy(i,y-j);
//			printf("*");
//			gotoxy(i,26);
//			cout << v[i-28];
//		}
//	}
//	sleep(1);
//	int row=(v.size())/20;
//	int arr[row][20];
//	int p=0;
//	// adjust vector to 2d array;
//	for(int i=0;i<row;i++){
//		for(int j=0;j<20;j++){
//			arr[i][j]=v[p];
//			p++;
//		}
//	}
////	for(int i=0;i<v.size();i++){
////		cout << v[i] << " ";
////	}
//	for(int d=0;d<row;d++){
//		for(int i=28;i<=107;i=i+4){
//			for(int j=0;j<arr[d][i-28];j++){
//				gotoxy(i,y-j);
//				printf("*");
//				gotoxy(i,26);
//				cout << arr[d][i-28];
//			}
//		}
//		sleep(1);
//		clear_graph();
//	}
//	getch();
//}
//----------------------------------------------------------------------------
void clear_graph() {
	gotoxy(27,5);
	for(int i=27; i<=107; i++) {
		for(int j=5; j<=24; j++) {
			gotoxy(i,j);
			cout << " ";
		}
		gotoxy(i,26);
		cout << "  ";
	}
}
int select_option() {
	int n;
	gotoxy(58,24);
	cout << "~ select option: ";
	boxSS(12,2,60,25);
	gotoxy(66,26);
	cin >> n;
	return n;
}
