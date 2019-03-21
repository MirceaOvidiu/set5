#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

int n;
int V[1000];

int init_data()
{
srand(time(0));
do { n=rand()%10; } while (n==0);
for(int i=1;i<=n;i++) V[i]=rand()%100;
}

int print_data()
{
cout<<" Elements : "<<n<<endl;
for(int  i=1;i<=n;i++) cout<<V[i]<<" ";
}

int sort_data()
{
for(int xD=1; xD<=n; xD++)
    {
int descend;
int father;
int i=2;
while (i<=n)
    {
    descend=i;
    father=descend/2;
            while ((father>=1)&&(V[father]<V[descend]))
            { swap(V[father],V[descend]);
               descend=father;
               father=(descend/2); }
            i++;
        //   }
    }
xD++;}
}
int main()
{
n=5;

V[1]=233;
V[2]=73;
V[3]=543;
V[4]=144;
V[5]=104;

cout<<"Initial  ";
print_data();
sort_data();
cout<<endl<<"Final  ";
print_data();
}
