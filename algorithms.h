#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Merg_Sort(vector<int> &arr, int l, int r,vector<int> &v);
void merge(vector<int> &arr, int p, int q, int r,vector<int> &v);

void swap(int *a, int *b);
int partition(vector<int> &array, int low, int high,vector<int> &v);
void quickSort(vector<int> &array, int low, int high,vector<int> &v);

void shellSort(vector<int> &array, int n,vector<int> &v);

vector<int> BubbleSort(vector<int> &v){
	vector<int> arr;
	arr=v;
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<20-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		for(int j=0;j<20;j++){
			v.push_back(arr[j]);
		}
	}
	return v;
}
vector<int> SelectionSort(vector<int> &v){
	vector<int> array;
	array=v;
	for (int step = 0; step < 20 - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < 20; i++) {
      if (array[i] < array[min_idx])
        min_idx = i;
    }
    int temp;
    temp=array[min_idx];
    array[min_idx]=array[step];
    array[step]=temp;
    for(int k=0;k<20;k++){
    	v.push_back(array[k]);
	}
  }
	return v;
}
vector<int> InsertionSort(vector<int> &v){
	vector<int> arr;
	arr=v;
	for(int i=1;i<20;i++)
	{
		int j=i-1;
		int k=arr[i];
		while(j>=0 && arr[j]>k)
		{
				arr[j+1]=arr[j];
				j--;
		}
		arr[j+1]=k;
		for(int p=0;p<20;p++){
			v.push_back(arr[p]);
		}
	}
	
	return v;
}
//------------------------------------------------------------------------
vector<int> MergSort(vector<int> &v){
	vector<int> arr;
	arr=v;
	Merg_Sort(arr,0,19,v);
	return v;
}
void Merg_Sort(vector<int> &arr, int l, int r,vector<int> &v) {
  if (l < r) {
    int m = l + (r - l) / 2;
    Merg_Sort(arr, l, m,v);
    Merg_Sort(arr, m + 1, r,v);
    merge(arr, l, m, r,v);
  }
}
void merge(vector<int> &arr, int p, int q, int r,vector<int> &v) {
  int n1 = q - p + 1;
  int n2 = r - q;
  int L[n1], M[n2];
  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];
  int i, j, k;
  i = 0;
  j = 0;
  k = p;
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
  for(int z=0;z<20;z++){
  	v.push_back(arr[z]);
  }
}
//-----------------------------------------------------------------
vector<int> QuickSort(vector<int> &v){
	vector<int> arr;
	arr=v;
	quickSort(arr, 0, 19,v);
	return v;
}
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int partition(vector<int> &array, int low, int high,vector<int> &v) {
  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  for(int k=0;k<20;k++){
  	v.push_back(array[k]);
  }
  return (i + 1);
}

void quickSort(vector<int> &array, int low, int high,vector<int> &v) {
  if (low < high) {
    int pi = partition(array, low, high,v);
    quickSort(array, low, pi - 1,v);
    quickSort(array, pi + 1, high,v);
  }
}
//---------------------------------------------------------------------------
vector<int> ShellSort(vector<int> &v){
	vector<int> arr;
	arr=v;
	shellSort(arr, 20,v);
	return v;
}
void shellSort(vector<int> &array, int n,vector<int> &v) {
  for (int interval = n / 2; interval > 0; interval /= 2) {
    for (int i = interval; i < n; i += 1) {
      int temp = array[i];
      int j;
      for (j = i; j >= interval && array[j - interval] > temp; j -= interval) {
        array[j] = array[j - interval];
      }
      for(int g=0;g<20;g++){
      	v.push_back(array[g]);
	  }
      array[j] = temp;
    }
  }
}
