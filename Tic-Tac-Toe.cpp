#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

bool tic_tac_toe(char a[9])
{
    if(a[0] == a[1] && a[1] == a[2] && a[0]!='\0' && a[1]!='\0' && a[2]!='\0')
        return true;
    else if(a[3] == a[4] && a[4] == a[5] && a[3]!='\0' && a[4]!='\0' && a[5]!='\0')
        return true;
    else if(a[6] == a[7] && a[7] == a[8] && a[6]!='\0' && a[7]!='\0' && a[8]!='\0')
        return true;
    else if(a[0] == a[3] && a[3] == a[6] && a[0]!='\0' && a[3]!='\0' && a[6]!='\0')
        return true;
    else if(a[1] == a[4] && a[4] == a[7] && a[1]!='\0' && a[4]!='\0' && a[7]!='\0')
        return true;
    else if(a[2] == a[5] && a[5] == a[8] && a[2]!='\0' && a[5]!='\0' && a[8]!='\0')
        return true;
    else if(a[0] == a[4] && a[4] == a[8] && a[0]!='\0' && a[4]!='\0' && a[8]!='\0')
        return true;
    else if(a[2] == a[4] && a[4] == a[6] && a[6]!='\0' && a[4]!='\0' && a[2]!='\0')
        return true;
    else
        return false;
}

int display(char a[9])
{
    char b[9];
    for(int i=0;i<9;i++)
    {
        if(a[i]!= '\0') b[i] = a[i];
        else b[i] = ' ';
    }
    cout << b[0] << " | " << b[1] << " | " << b[2] << endl;
    cout << "---------" << endl;
    cout << b[3] << " | " << b[4] << " | " << b[5] << endl;
    cout << "---------" << endl;
    cout << b[6] << " | " << b[7] << " | " << b[8] << endl;
    cout << "---------" << endl;
}

int main()
{
    char a[9] = {'\0'};
    bool win;
    int temp, index = 0;

    while(!win && index < 9)
    {

        cout<<"Enter the position of X: ";
        cin >> temp;
        a[temp] = 'X';
        index++;
        win = tic_tac_toe(a);
        display(a);
        if(win)
        {
            cout << "X wins" << endl;
            break;
        }

        if(index==9) break;

        cout<<"Enter the position of Y: ";
        cin >> temp;
        a[temp] = 'Y';
        index++;
        display(a);
        win = tic_tac_toe(a);
        if(win)
        {
            cout << "Y wins" << endl;
            break;
        }
    }

    if(!win)
        cout << "Draw" << endl;

    return 0;
}
