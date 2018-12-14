#include <iostream>

using namespace std;

int main()
{
    int a1[2],b1[2],temp=-1; //Variabel yang digunakan untuk mengambil jumlah kolom dan baris
    char pil; // variabel untuk membuat pilihan mengulang atau berkhir
    ulang:  // deklerasi untuk pilihan mengulang
/////////////  Proses Memasukkan jumlah baris dan kolom matrik  /////////////////
cout<<"--------------------------------------------------\n";
for (char u='A'; u<='B'; u++)
    {
    temp+=1;

    cout<<"Masukan baris matrik "<<u<<" : "; cin>>a1[temp];
    cout<<"Masukan kolom Matrik "<<u<<" : "; cin>>b1[temp];
    cout<<endl;
    }
    if(b1[0]==a1[1])
    {
    cout<<"--------------------------------------------------\n";
    int AA [a1[0]][b1[0]];   //Variabel matrik A
    int BB [a1[1]][b1[1]];   // Variable Matrik B
    int hasil[a1[0]][b1[1]]; // Variabel untuk Hasil Perkalian Matrik
////////------- Memasukkan Array A --------////////////
    cout<<"\nMasukkan data array A\n";
    for(int i=0; i<a1[0]; i++)
    {
        for (int c=0;c<b1[0];c++)
        {
            cout<<"A ["<<i+1<<"]["<<c+1<<"] = ";
            cin>>AA[i][c];
        }
            cout<<endl;
    }
////////------- Memasukkan Array B --------////////////
cout<<"--------------------------------------------------\n";
cout<<"\nMasukkan data array B\n";
for(int i=0; i<a1[1]; i++)
    {
        for (int c=0;c<b1[1];c++)
        {
            cout<<"B ["<<i+1<<"]["<<c+1<<"] = ";
            cin>>BB[i][c];
        }
    cout<<endl;
    }
///////////////-------- Proses Perhitungan --------////////////////////////////
for(int i=0; i<a1[0]; i++)
    {
        for (int c=0;c<b1[1];c++)
        {
            hasil [i][c] = (AA[i][0] * BB[0][c] )+( AA[i][1] * BB[1][c]);
        }
            cout<<endl;
    }
cout<<"-----------------------------------------------\n";
cout<<"Hasil Perkalian Matrik A dan B adalah : \n";
cout<<"--------------------------------------------------\n";
///////// -------- Memampilkan hasil Perkalian Matrik ---------- ///////////
for(int i=0; i<a1[0]; i++)
    {
    cout<<endl;
        for (int c=0;c<b1[1];c++)
        {
            cout<<"["<<hasil[i][c]<<"] ";
        }
    }
cout<<"\n\nATAU\n";
for(int i=0; i<a1[0]; i++)
    {
    cout<<endl;
        for (int c=0;c<b1[1];c++)
        {
            cout<<"["<<i+1<<"]["<<c+1<<"] = "<<hasil[i][c]<<endl;
        }
    }
}
else
{
 /////////-------- Menanyakan Pilihan ---------//////////////////
 cout<<"Kolom Matrik A harus sama dengan Baris Matrik B";
 cout<<"\nUlangi..? (Y/N) : "; cin>>pil;
 if (pil=='Y'||pil=='y')
    {
        goto ulang;
    }
}
}
