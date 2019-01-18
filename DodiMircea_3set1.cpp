///select sort
#include<iostream>
using namespace std;
int n;
int V[100];
int main(){
    cout<<"n=";
    cin>>n;

    for(int i=n; i<=n; i++){cout<<"V["<<i<<"]";
                                 cin>>V[i];
                                 }



 for(int i=1; i<=n; i++){cout<<V[i];}
for(int i=1; i<=n; i++)
    {
    int minim=V[i];
    int loc=1;
        if(V[j]<minim){minim=V[j];
                          loc=j;
                          }}
    int aux;
    aux=V[i];
    V[i]=V[loc];

    cout<<"sortate:";
    for(int i=1; i<=n; i++)
    {
        cout<<V[i]<<" ";

    }
return 0;}
