#include<iostream>
#include<fstream>
using namespace std;
int G[100][100];
int n;
int C1[10000];
int nc1;
int C2[10000];
int nc2;
int V[100];
int grades[100];

int read_data()
{
  ifstream f;
  f.open("input.txt");
f>>n;
for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
f>>G[i][j];
    f.close();
return 1;}



int insertion(int C1[],int *nc1,int C2[],int nc2,int k)
{
   int ncf=*nc1+nc2;
   int V[10000];
   for(int i=k; i<=10000; i++)
    if(C1[i]!=0) V[i-k+1]=C1[i];
}

int init_data()
{

}

int explore(int G[100][100],int n,int node,int solution[100])
{

}

int euler()
{
int gasit=1;
while  (gasit==1)
  {
        gasit=0;
        for(int i=1;i<=n;i++)
        {
            if ( V[i]==0 ) {   int counter;
                                    counter=explore(G,n,i,C1);
                                    for (int j=1;j<=counter;j++)
                                       {
                                            if (grades[C1[j]]>0) {
                                                int numbers;
                                                numbers=explore(G,n,j,C2);
                                                insertion(C1,&counter,C2,numbers,j);
                                                                          }
                                       }
                                }
        }
  }
}

int print_data()
{

}

int main()
{
read_data();
init_data();
euler();
print_data();
}
