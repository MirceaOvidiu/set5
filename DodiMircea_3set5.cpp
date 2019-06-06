#include<iostream>
#include<math.h>
using namespace std;
///test palindromitate (ex.2)

int n;

int main(){
cout<<"n=...";
cin>>n;

if(n==0){cout<<"0";}
unsigned int z;
int k=0;
unsigned int y=n;
int h=0;

while(y!=0)
    {
    y=y>>1;
    k+=1;
         }

for(int i=1; i<=k; i+=1)
{
    z=n;
    z=z<<(32-i);
    z=z>>31;
    h++;
    cout<<z<<endl;



}
return 0;
}
