    /*
    ask user for height and width of square/rectangle to be drawn
        use the following ASCII characters to draw
           UL       =       218
           UR       =       191
           LL       =       192
           LR       =       217
          Sides     =       179
        Top/Bottom  =       196
    
    */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{

   int 
        c,
        r,
        row,
        column;

    cout << "\nHow many rows would you like to draw?\t";
    cin >> row;

    cout << "\nHow many columns would you like to draw?\t";
    cin >> column;

    cout << "\n\n";
    cout << char(218);

    for (r = 0; r <= (row*2.5); r++)
    {
        cout << char(196);
    }
    cout << char(191) << endl;

    for (c = 0; c <= column; c++)
    {
        cout << char(179);

        for (r = 0; r <= (row * 2.5); r++)
        {
            cout << " ";
        }

        cout << char(179);

        cout << endl;
    }
    cout << char(192);

    for (r = 0; r <= (row * 2.5); r++)
    {
        cout << char(196);
    }
    cout << char(217) << endl;

}

