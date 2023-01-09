// #include <iostream>

// int main() {
//     std::cout << "Hello World!";
//     return 0;
// }

// Q 1.) WAP IN C++ to display the use of contuine statement

// #include<iostream>
// #include <conio.h>

// void display(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         if (i==6)
//         continue;
//         cout << i << endl;
        
//     }
    
// }
// void main()
// {
//     clrscr();
//     display(10);
//     getch();
// }


// or correct
// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 1; i <= 5; i++) {
//         // condition to continue
//         if (i == 3) {
//             continue;
//         }

//         cout << i << endl;
//     }

//     return 0;
// }

// Q 2.) Wap in c++ to find our Average Salary of 10 employee  using class and also used scope regulation operates.

// #include<iostream>
// #include<conio.h>
// class emp{
//     private:
//     int sal[10];
//     float avg;
//     public:
//     void read();
//     void print();

// };
// void emp ::read(){
//     cout <<"Enter employee Salary " <<endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cin >> sal[i];

//     }
//     void emp :: print()
//     {
//         int sum =0;
//         for (int i = 0; i < 10; i++)
//         sum = sum + sal[i];
//         avg = sum/10;
//         cout <<"Average of 10 employee=" <<avg;
       
        
//     }
//     void main(){
//         clrscr();
//         emp e;
//         e.read();
//         e.print();
//         getch();
//     }
    
// }

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