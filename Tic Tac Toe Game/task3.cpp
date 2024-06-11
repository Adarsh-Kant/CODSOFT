#include<iostream>
#include<stdlib.h>
using namespace std;
char arr[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
int i,j,count=0,row,col,game=1,temp=0,player1_wins=0,player2_wins=0,draw=0;
string name1,name2;
void gamebeginningtemplate()
{
    system("cls");
    cout<<"TIC TAC TOE\n\n";
    cout<<"SCORE\n"<<name1<<": "<<player1_wins<<endl<<name2<<": "<<player2_wins<<"\nDraw"<<": "<<draw<<endl<<"\n";
    cout<<" "<<arr[0][0]<<" "<<"|"<<" "<<arr[0][1]<<" "<<"|"<<" "<<arr[0][2]<<" "<<"\n";
    cout<<"-----------"<<"\n";
    cout<<" "<<arr[1][0]<<" "<<"|"<<" "<<arr[1][1]<<" "<<"|"<<" "<<arr[1][2]<<" "<<"\n";
    cout<<"-----------"<<"\n";
    cout<<" "<<arr[2][0]<<" "<<"|"<<" "<<arr[2][1]<<" "<<"|"<<" "<<arr[2][2]<<" "<<"\n";
}
void gamewinner(string name)
{
    cout<<"\n***********************\n";
    cout<<name<<" Wins The Game!!";
    cout<<"\n***********************\n";
}
int main()
{
    system("cls");
    cout<<"TIC TAC TOE\n\n";
    cout<<"Enter name of Player 1: ";
    cin>>name1;
    cout<<"Enter name of Player 2: ";
    cin>>name2;
    while(game==1)
    {
        while(count<9)
        { 
            if(count<9)
            {
                gamebeginningtemplate();
                cout<<endl<<name1<<" Turn\n";
                cout<<"Enter row and column: ";
                cin>>row>>col;
                arr[row-1][col-1]='X';
                count++;
                if(((arr[0][0]=='X' && arr[0][1]=='X') && (arr[0][1]=='X' && arr[0][2]=='X')) || ((arr[1][0]=='X' && arr[1][1]=='X') && (arr[1][1]=='X' && arr[1][2]=='X')) || 
                ((arr[2][0]=='X' && arr[2][1]=='X') && (arr[2][1]=='X' && arr[2][2]=='X')) || ((arr[0][0]=='X' && arr[1][0]=='X') && (arr[1][0]=='X' && arr[2][0]=='X')) ||
                ((arr[0][1]=='X' && arr[1][1]=='X') && (arr[1][1]=='X' && arr[2][1]=='X')) || ((arr[0][2]=='X' && arr[1][2]=='X') && (arr[1][2]=='X' && arr[2][2]=='X')) ||
                ((arr[0][0]=='X' && arr[1][1]=='X') && (arr[1][1]=='X' && arr[2][2]=='X')) || ((arr[0][2]=='X' && arr[1][1]=='X') && (arr[1][1]=='X' && arr[2][0]=='X')))
                {
                    gamebeginningtemplate();
                    ++player1_wins;
                    gamewinner(name1);
                    temp=1;
                    break;
                }
            }
            if(count<9)
            {
                gamebeginningtemplate();
                cout<<endl<<name2<<" Turn\n";
                cout<<"Enter row and column: ";
                cin>>row>>col;
                arr[row-1][col-1]='O';
                count++;
                if(((arr[0][0]=='O' && arr[0][1]=='O') && (arr[0][1]=='O' && arr[0][2]=='O')) || ((arr[1][0]=='O' && arr[1][1]=='O') && (arr[1][1]=='O' && arr[1][2]=='O')) || 
                ((arr[2][0]=='O' && arr[2][1]=='O') && (arr[2][1]=='O' && arr[2][2]=='O')) || ((arr[0][0]=='O' && arr[1][0]=='O') && (arr[1][0]=='O' && arr[2][0]=='O')) ||
                ((arr[0][1]=='O' && arr[1][1]=='O') && (arr[1][1]=='O' && arr[2][1]=='O')) || ((arr[0][2]=='O' && arr[1][2]=='O') && (arr[1][2]=='O' && arr[2][2]=='O')) ||
                ((arr[0][0]=='O' && arr[1][1]=='O') && (arr[1][1]=='O' && arr[2][2]=='O')) || ((arr[0][2]=='O' && arr[1][1]=='O') && (arr[1][1]=='O' && arr[2][0]=='O')))
                {
                    gamebeginningtemplate();
                    ++player2_wins;
                    gamewinner(name2);
                    temp=1;
                    break;
                }
            }
        }
        if(temp!=1)
        {
            gamebeginningtemplate();
            ++draw;
            cout<<"\n**********\n";
            cout<<"Game Draw";
            cout<<"\n**********\n";
        }
        arr[0][0]=' ',arr[0][1]=' ',arr[0][2]=' ',arr[1][0]=' ',arr[1][1]=' ',arr[1][2]=' ',arr[2][0]=' ',arr[2][1]=' ',arr[2][2]=' ';
        count=0,temp=0;
        string ntemp=name1;
        name1=name2;
        name2=ntemp;
        int stemp=player1_wins;
        player1_wins=player2_wins;
        player2_wins=stemp;
        cout<<"\nEnter 1: To play the game again\n";
        cout<<"Enter 0: To exit the game\n";
        cout<<"Enter: ";
        cin>>game;
    }
    system("cls");
    cout<<"TIC TAC TOE\n\n";
    cout<<"FINAL SCORE\n"<<name1<<": "<<player1_wins<<endl<<name2<<": "<<player2_wins<<endl<<"Draw"<<": "<<draw;
    cout<<"\n\n\n\nBye Bye, Thanks for playing\n\n";
    cout<<"Developed By: ADARSH KANT\n\n";
    return 0;
}