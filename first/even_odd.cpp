// Q3.) Number is even or odd using class.
#include<iostream>
#include<conio.h>
class even{
    private:
    int n;
    public:
    void read()
    {
        cout << "Enter number /n";
        cin >>n;
    }
    void print()
    {
        if (n%2 == 0)
        {
            cout << "even";

        }
        else
        cout <<"odd";
        
    }
};
void main()
{
    clrscr();
    even a;
    a.read();
    a.print();
    getch();
}