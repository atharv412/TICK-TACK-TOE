#include<iostream>
#include<cstdlib>
using namespace std;
void getgrid(char grid[3][3]);

int main()
{  
    char grid[3][3]={{' ',' ',' '},
                     {' ',' ',' '},
                     {' ',' ',' '}};
    // {{" "," "," "},
                    // {" "," "," "},
                    // {" "," "," "} };

    // for ( int i = 0; i < 3; i++)
    // {
    //     cout<<"|  ";
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<grid[i][j]<<"  |  ";
    //     }
    //     cout<<"\n";
    //     cout<<"--------------------";
    //     cout<<"\n";

    // }
    int random1, random2;
    // int ub=0,lb=3;
    //     cout<<(rand()% (ub - lb + 1)) + lb;
    //     cout<<(rand()% (ub - lb + 1)) + lb;
// for (int i = 0; i < 5; i++) 
//         cout << rand() << " "; 
    // }
    int user_choice1,user_choice2;
    getgrid(grid);
    for (int i = 0; i < 5; i++)//there are total nine chances
    {   
        srand((unsigned) time(NULL));
        random1=rand() % 3;
        random2=rand() % 3;
            do
            {
                cout<<"enter the location to mark(1-3)";
                cin>>user_choice1>>user_choice2;
                if (grid[user_choice1-1][user_choice2-1]!=' ')
                {
                    cout<<"Enter a another location\n";
                    // cin>>user_choice1>>user_choice2;
                }
                else
                {
                    grid[user_choice1-1][user_choice2-1]='X';
                    break;
                }
            }while (grid[user_choice1-1][user_choice2-1]==' ');
            cout<<"computer's turn...../";


        // for (int m = 0; m < 3; m++)
        // {
        //     for (int n = 0; n < 3; n++)
        //     {
                
        //         if (grid[random1][random2]==' ')
        //         {
        //             grid[random1][random2]='O';
        //             srand((unsigned) time(NULL));
        //             break;
        //         }
        //         //used to place a random mark in a available location
        //         else if (grid[random1][random2]!=' ')
        //         {       
        //             while (true)
        //             {
        //                 /* code */
        //                 srand((unsigned) time(NULL));
        //                 random1=rand() % 3;
        //                 random2=rand() % 3;
        //                 if (grid[random1][random2]==' ')
        //                 {
        //                     srand((unsigned) time(NULL));
        //                     break;
        //                 }
        //             } 
        //         }
        //         //used to pick a random aloaction 
        //         break;
        //     }
        //     break;
        // }
        do
        {
            srand((unsigned) time(NULL));
            random1=rand() % 3;
            random2=rand() % 3;
            // cout<<random1;
            // cout<<random2<<"\n";
            if (grid[random1][random2]==' ')
            {
                grid[random1][random2]='O';
                srand((unsigned) time(NULL));
                break;
            }
            if(i==4)
            {
                break;
            }
            else
            {
                srand((unsigned) time(NULL));
                // random1=rand() % 3;
                // random2=rand() % 3;
                continue;
            }
        } while (true);
        
       getgrid(grid);
       cout<<"\n\n";
    }
    // for ( int i = 0; i < 3; i++)
    // {
    //     for ( int j = 0; j < 3; j++)
    //     {   
    //         cout<<grid[i][j];
    //     }
    //     cout<<"\n";
    // }    
    return 0;
}
void getgrid(char grid[3][3])
{
    for ( int i = 0; i < 3; i++)
    {
        cout<<"|  ";
        for (int j = 0; j < 3; j++)
        {
            cout<<grid[i][j]<<"  |  ";
        }
        cout<<"\n";
        cout<<"--------------------";
        cout<<"\n";

    }
}