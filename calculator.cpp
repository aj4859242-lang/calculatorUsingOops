#include <iostream>
using namespace std;

class calculator
{
private:
    float a, b;
    

public:
    void info()
    {
        cout << "Enter two numbers : ";
        cin >> a >> b;
    }
    void add()
    {
        cout << "Summation  = ";
        cout << a + b<<endl;
    }

    void sub(){
        cout << "Subtraction  = ";
        cout << a - b<<endl;
    }
    void mul(){
        cout << "muktiplication = ";
        cout << a * b<<endl;
    }
    void div(){

        if(b!=0){
            cout << "Division  = ";
        cout << a/b<<endl;
        }else{
            cout<<"Not defined"<<endl;
        }
        
    }
    

    void menu()
    {
        cout << "=====CALCULATOR=====" << endl;
        cout << "1. SUM" << endl;
        cout << "2. SUBTRACT" << endl;
        cout << "3. MULTIPLICATION" << endl;
        cout << "4. DIVISION" << endl;
    }

    void operations()
    {
      while(true){
          menu();
        int choice;
        cout << "Enter choice : ";
        cin >> choice;
        if(choice<1||choice>4){
              cout<<"Invalid choice"<<endl;
             return operations();
        }
        info();

        switch (choice)
        {
        case 1:
            add();
            break;

        case 2:
            sub();
            break;

        case 3:
            mul();
            break;

        case 4:
            div();
            break;

        default:
            cout << "Error" << endl;
        }
      }
    }
};

int main()
{
    calculator c;
    c.operations();
}