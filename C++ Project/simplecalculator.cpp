#include<iostream>
#include<stdlib.h>
using namespace std;
void menuofoperations()
{
    cout<<"\nChoose any one of the following operation:\n";
    cout<<"Enter 1 To Perform Addition\n";
    cout<<"Enter 2 To Perform Subtraction\n";
    cout<<"Enter 3 To Perform Multiplication\n";
    cout<<"Enter 4 To Perform Division\n";
    cout<<"Enter 5 To Exit\n";
    cout<<"Enter: ";
}
int main()
{
    float choice, num1, num2;
    system("cls");
    cout<<"WELCOME TO THE SIMPLE CALCULATOR\n\n";
    while (1)
    {
        menuofoperations();
        cin>>choice;
        if(choice==5)
        {
            break;
        }
        cout<<"\nEnter The First Number: ";
        cin>>num1;
        cout<<"Enter The Second Number: ";
        cin>>num2;
        if(choice==1)
        {
            cout<<"\n**************************\n";
            cout<<"Result of "<<num1<<" + "<<num2<<" = "<<num1+num2;
            cout<<"\n**************************\n";
        }
        else if(choice==2)
        {
            cout<<"\n**************************\n";
            cout<<"Result of "<<num1<<" - "<<num2<<" = "<<num1-num2;
            cout<<"\n**************************\n";
        }
        else if(choice==3)
        {
            cout<<"\n***************************\n";
            cout<<"Result of "<<num1<<" * "<<num2<<" = "<<num1*num2;
            cout<<"\n***************************\n";
        }
        else if(choice==4)
        {
            if(num2==0)
            {
                cout<<"\n************************\n";
                cout<<"Result of "<<num1<<" / "<<num2<<" = Invalid";
                cout<<"\n************************\n";
            }
            else
            {
                cout<<"\n*************************\n";
                cout<<"Result of "<<num1<<" / "<<num2<<" = "<<num1/num2;
                cout<<"\n*************************\n";
            }
        }
    }
    cout<<"\n\nDeveloped By: ADARSH KANT\n\n";
    return 0;
}