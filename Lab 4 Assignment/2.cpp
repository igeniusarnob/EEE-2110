/*
Name: Arnob Karmokar
ID: 16-01-05-055
Group: B1
Year: 2nd
Semester: 1st
*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=i;j<n;j++){
      cout<<"  ";
    }
    for(int k=1;k<=i;k++){
      cout<<k<<" ";
    }
    cout<<"\n";
  }
  return 0;
}