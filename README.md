# praktikum9
Latihan1#Menentukan nilai maximal&minimal menggunkan array
```
1. Alur algoritmanya
	-Mendeklarasikan int nilai sebagai variabel array
	-mendeklarasikan int a sebagai nilai input
	-int max sebagai nilai maximal
	-int min sebagai nilai minimal
	-membuat perulangan untuk menentukan banyak inputan
```
```c++
for (a=1;a<=5;a++)
        {
        cout<< "Masukan nilai ke-" << a <<": ";
        cin>> nilai[a];
        }
```
```
	-menentukan nilai max dan min
```
```c++
for(a=2;a<=5;a++)
    {
        if (nilai[a]<min)
        {
            min=nilai[a];
        }
        else if (nilai[a]>max)
        {
            max=nilai[a];
        }
    }
```
2.Berikut kode lengkapnya
```c++
#include <iostream>

using namespace std;

int main()
{
    int nilai[5],a,min,max;
    for (a=1;a<=5;a++)
        {
        cout<< "Masukan nilai ke-" << a <<": ";
        cin>> nilai[a];
        }

    min=nilai[1];
    max=nilai[1];
    for(a=2;a<=5;a++)
    {
        if (nilai[a]<min)
        {
            min=nilai[a];
        }
        else if (nilai[a]>max)
        {
            max=nilai[a];
        }
    }
    cout<< "Nilai minimum adalah : "<< min<<endl;
    cout<< "Nilai maximum adalah : "<< max<<endl;

    return 0;
}
```

3.Berikut flowchartnya

![img](https://raw.githubusercontent.com/aseps12/praktikum9/master/flow1.png)

4.Berikut hasilnya
![img](https://raw.githubusercontent.com/aseps12/praktikum9/master/hasil1.png)

Latihan2#Menentukan nilai Modus
1.Alur Algoritmanya
```
	-Membuat fungsi modus dengan void
	-void modus(float bil[],int n,float mod[])
	-mendeklarasikan int n sebagai variabel inputan
	-mendeklarasikan float bil[] sebagai pengingat nilai
	-mendeklrasikan flot mod[] untuk menentukan modus
	-membuat algoritma mengurutkan secara ascending
	-mebuat algoritma untuk menentukan berapa banyak angaka yang muncul
	-membuat algoritma untuk nili yang sering muncul
	-membuat algoritma jika angka sama banyak munculnya
```
2.Berikut kode lengkaapnya
```c++
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

```
3.Berikut Hasilnya
![img](https://raw.githubusercontent.com/aseps12/praktikum9/master/hasil2.png)

Latihan3#Perkalian Matriks
```
1.Alur Algoritmanya
	-Mendeklarasikan int a1,b1,temp sebagai variabel untuk mengambil baris dan kolom
	-Mendeklarasikan char pil sebagai variabel untuk membuat pilihan mengulang atau tidak
	-mendeklarasikan ulang sebagai pilihan ulang
	-mendeklarasikan int hasil untuk hasil perkalian matriks
	-mendeklarasikan int AA sebagai variabel matriksA
	-mendeklrasikan int BB sebagai variabel matriksB
```
2.Berikut kode lengkapnya
```c++
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
```
3.Berikut Hasilnya
![img](https://raw.githubusercontent.com/aseps12/praktikum9/master/hasil3.png)

Latihan4#Trasnpose Matriks
```
1.Alur Algoritmanya
	-Mendeklarasikan int A sebagi variabel array
	-Mendeklarasikan int a,b,baris,kolo sebagai variabel inputan
	-mendeklrasikan cahr pil untuk pilihan mengulang
```
2.Berikut Kode lengkapnya
```c++
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

```
3.Berikut Hasilnya
![img](https://raw.githubusercontent.com/aseps12/praktikum9/master/hasil4.png)