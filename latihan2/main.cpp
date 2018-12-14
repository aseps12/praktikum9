#include <iostream>

using namespace std;

int x;
void modus(float bil[],int n,float mod[])
{
int total[100];
int k=1;
x=0;
for(int c=0;c<n;c++)//mengurutkan secara ascending
{
    for(int i=(n-1);i>0;i--)
    {
        if (bil[i]<bil[i-1])
        {
            int temp;
            temp=bil[i];
            bil[i]=bil[i-1];
            bil[i-1]=temp;
        }
    }
}
//menghitung berpakali muncul tiap angka
for(int c=0;c<n;c++)
{
    total[c]=0;
    for(int i=0;i<n;i++)
    {
        if(bil[c]==bil[i])
        {
            total[c]++;
        }
    }
}
//Menentukan nilai yang sering muncul
for(int c=0;c<n;c++)
{
    if(total[c]>k)
    {
        k=total[c];
    }
}
//Jika modus lebih dari satu
for(int c=0;c<n;c++)
{
    if(x==0)
        mod[x]=0;
    else
        mod[x]=mod[x-1];
    if(total[c]==k)
    {
        if(bil[c]!= mod[x])
        {
            mod[x]=bil[c];
            x++;
        }
    }
}
//Jika angka muncul sama banyak
int y=0;
for(int c=0;c<n;c++)
{
    if(total[c]==k)
    {
        y++;
    }
}
if(y==n)
{
    x=0;
}
}
int main()
{
    int n;
    float bil[100];
    float mod[100];

    cout<<"banyak data :";
    cin>> n;

    for(int c=0;c<n;c++)
    {
        cout<< "Nilai "<<(c+1)<<":";
        cin>> bil[c];
    }
    cout<<endl;
    modus(bil,n,mod);
    if(x==0)
        cout<<"Tidak ada MODUS!"<<endl;
    else
    {
        cout<<"Modus : ";
        for(int c=0;c<x;c++)
        {
            cout<<mod[c]<< "";
        }
    }
}

