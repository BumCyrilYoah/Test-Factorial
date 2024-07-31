#include <iostream>
using namespace std;

class salary{
private:
    int es;
    friend int printsalary(salary s);
    };
    int printsalary(salary s){
    s.es = s.es+1;
    }
int main()
{
    salary s;
    cout<<"\t\t\t\t\t salary is = ";
    cout<<printsalary(s)<<endl;
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
