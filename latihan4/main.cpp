#include <iostream>

using namespace std;

int main()
{
    int A [10][10],b,c,baris,kolom;
    char pil;

    do
    {
        cout<<"=======TRANSPOSE MATRIKS======="<< endl;
        cout<<"Masukan Jumlah Baris";
        cin>> baris;
        cout<<endl;
        cout<<"Masukan Jumlah Kolom";
        cin>> kolom;
        cout<<endl;

        for(b=0;b<baris;b++)
        {
            for(c=0;c<kolom;c++)
            {
                cout<<"Matriks ["<<b+1<<","<<c+1<<"]=";
                cin>>A[b][c];
            }
        }
        cout<<endl;
        cout<<"Matriks Pertama : "<<endl;
        for(b=0;b<baris;b++)
        {
            for(c=0;c<kolom;c++)
            {
                cout<<" "<< A[b][c]<<" ";
            }
            cout<<endl;
        }
        cout<<"Matriks Transpose : "<<endl;
        for(b=0;b<kolom;b++)
        {
            for(c=0;c<baris;c++)
            {
                 cout<<" " << A[c][b]<< " ";
            }
            cout<<endl;
        }

    cout<<"Ingin Mengulang Program ? (Y/N) : ";
    cin>>pil;
    }
    while(pil=='Y'||pil=='y');
}

