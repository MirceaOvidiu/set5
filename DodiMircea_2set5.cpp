#include<iostream>
using namespace std;

int n;
///cati biti are un numar
int main(){
cout<<"n=...";
cin>>n;

int nrbiti=0;
if(n==0){cout<<"are 1 bit";}

while(n!=0)
         {
    n=n>>1;
    nrbiti++;
          }

cout<<"are  "<<nrbiti<<"biti";

return 0;
}

