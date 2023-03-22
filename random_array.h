#include<bits/stdc++.h>
#include <cstdlib>
#include<time.h>
using namespace std;
vector<int> random_array_generator(){
  srand(time(0));
  vector<int> v;
  map<int,int>m;
  int ran;
  for(int i=0;i<20;){
    ran=rand()%20;
    if(m[ran+1]==0){
      i++;
      v.push_back(ran+1);
      m[ran+1]++;
    }
  }
  return v;
}
