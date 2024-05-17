#include<iostream>
using namespace std;
void getgrid(char grid[3][3]);
bool checkWin(char board[3][3], char player);

int main()
{
    char grid[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    int random1, random2,i;
    int user_choice1,user_choice2;

    getgrid(grid);
    for ( i = 0; i < 5; i++)//there are total five rounds starting from user
    {   
        srand((unsigned) time(NULL));
        random1=rand() % 3;
        random2=rand() % 3;

        // user's turn
        do
        {
            cout<<"enter the location to mark(1-3)";
            cin>>user_choice1>>user_choice2;
            if (grid[user_choice1-1][user_choice2-1]!=' ')
            {
                cout<<"Enter a another location\n";
            }
            else
            {
                grid[user_choice1-1][user_choice2-1]='X';
                break;
            }
        }while (grid[user_choice1-1][user_choice2-1]!=' ');

        // to check the winner after user's turn
        if (checkWin(grid,'X')==true)
        {
            cout<<"  User Wins  \n";
            getgrid(grid);
            break;
        }

        // PC's turn
        cout<<"PC's turn...../\n";
        do
        {
            srand((unsigned) time(NULL));
            random1=rand() % 3;
            random2=rand() % 3;
            if (grid[random1][random2]==' ')
            {
                cout<<random1<<' '<<random2<<"\n";
                grid[random1][random2]='O';
                getgrid(grid);
                cout<<"\n\n";
                break;
            }
            if(i==4)
            {
                break;
            }
            else
            {
                srand((unsigned) time(NULL));
                continue;
            }
        } while (true);
        
        // to check the winner after PC's turn
        if(checkWin(grid,'O')==true)
        {
            cout<<"  PC Wins  \n";
            getgrid(grid);

            break;
        }
    }
    // to check if its a draw
    if (i=5&&checkWin(grid,'X')==false &&checkWin(grid,'O')==false)
    {
        cout<<"its a draw!\n";
        getgrid(grid);
    }
    return 0;
}
void getgrid(char grid[3][3])
{   
    cout<<"--------------------\n";
    for ( int i = 0; i < 3; i++)
    {
        cout<<"|  ";
        for (int j = 0; j < 3; j++)
        {
            cout<<grid[i][j]<<"  |  ";
        }
        cout<<"\n";
        cout<<"--------------------\n";
    }
}
bool checkWin(char board[3][3], char player) 
{ 
    // Check rows, columns, and diagonals 
    for (int i = 0; i < 3; i++) 
    { 
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) 
            // to check each column of the grid for similar pattern
            return true; 
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) 
            // to check each row of the grid for similar pattern
            return true; 
    } 
        if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
            // to check the grid for similar pattern diagonaly from top left to bottom right 
            return true; 
        if (board[0][2] == player && board[1][1] == player && board[2][0] == player) 
            // to check the grid for similar pattern diagonaly from top right to bottom left
            return true; 
        return false; 
} 