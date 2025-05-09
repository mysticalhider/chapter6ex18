/*
File neame: chapter6ex18.cpp
Programmer: Perrin D
Requirements;
make a cost calulator for a painting buisness
*/

#include <iostream>
#include <iomanip>
using namespace std;

int sqftcalc()
{
    int rooms;
    cout << "How many rooms need painting?" << endl;
    cin >> rooms;
    if (rooms <= 0)
    {
        cout << "Invalid input. Must be greater than 0" << endl;
        cin >> rooms;
    }
    return rooms;

}

void costest(int sqft)
{
    int gallonscost, labor, laborcost, total, gallonstotal;
    cout << "How much is one gallon of paint? Enter a whole nmumber." << endl;
    cin >> gallonscost;
    if (gallonscost <= 10)
    {
        cout << "Invalid input. Must be greater than 10" << endl;
        cin >> gallonscost;
    }

    labor = sqft * 8;
    gallonstotal = sqft * gallonscost;
    laborcost = labor * 25;
    total = laborcost + gallonstotal;


    cout << "Painting an estimated " << sqft * 110 << "sqft, will take us " << labor << "hrs. " << endl;
    cout << "The total cost of paint is $" << fixed << setprecision(2) << gallonstotal << endl;
    cout << "The total cost of labor is $" << fixed << setprecision(2) << laborcost << endl;
    cout << "The total cost is $" << fixed << setprecision(2) << total << endl;

}


int main()
{
    bool quit = 0;
    do
    {
        costest(sqftcalc());
        cout << "Press 0 to cont, 1 to quit"<< endl;
        cin >> quit;
        if (!quit == 0)
            terminate;
    } while (quit == 0);
}

