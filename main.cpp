#include <iostream>
using namespace std;
int main()
{
int num = 1;
int i = 2;
long long  factorial;
     cout<<"\t\t\t\t Enter the number you want to get the factorial"<<endl;
     cin>>factorial;
while(i<= factorial){
        num = num *i;
        cout<<num<<"* ";
        i++;
    }
    return 0;
}
