#include <iostream>

using namespace std;
char name[]="Memory";

int main()
{
int i=5;
//   // cout<<"Hello World";
//     for (i=5; i>=0; i--)
    // {
    //     cout<<name[i];
    //   cout<<"\n";
    // }
    i=5;
    while (i>=0)
    {
        cout<<name[i];
        cout<<"\n";
        if (name[i]=='m')
        {
            cout<<"Found the E";
            break;
        }
        i--;
    }
    return 0;
}