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
