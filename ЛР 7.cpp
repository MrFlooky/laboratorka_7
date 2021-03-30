//C++
#include <iostream.h>
#include <conio.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE, "Russian");
    system("cls");
    float f,a,b,c,x;
    char nv = '2';
    short int flag=0;
    cout<<endl<<"Введите x, c:"<<endl<<endl;
    cin>>x>>c;
    system("cls");
    if (x+5==0 && c==0) nv='1';
    if (x+5!=0 && c!=0) nv='2';
    switch (nv)
    {
        case '1':
        {
            float a,b;
            cout<<endl<<"Введите a, b: "<<endl<<endl;
            cin>>a>>b;
            if((a*x)==0) cout<<endl<<"Нет решений по первой ветке";
            else
            {
                f=((1/(a*x))-b);
                flag=1;
            }
            break;
        }
        case '2':
        {
            if(x==0) cout<<endl<<"Нет решений по второй ветке";
            else
            {
                float a;
                cout<<endl<<"Введите a: "<<endl<<endl;
                cin>>a;
                f=((x-a)/x);
                flag=2;
            }
            break;
        }
    }
    if(!(flag==0))cout<<endl<<"По ветке №"<<flag<<" f = "<<f;
    getch();
    return 0;
}
