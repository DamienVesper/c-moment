#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

int main () {
    int a;
    float d;
    float e;

    cout << "Welcome to the vending machine! Lowest prices as long as you get your order right!\n\n";
    e = 1.00;

    cout << "You have $"<< e << ".\n\n";
    cout << " [1] for Coke ($0.50)\n [2] for Sprite ($0.40)\n [3] for Dr. Pepper ($0.70)\n [4] for Pepsi ($0.60)\n [5] Ginger Ale ($0.80)\n [6] for Mountain Dew ($0.60)\n [7] for 7UP ($0.50)\n [8] for Fanta ($0.50)\n [9] for Water ($1.00) \n [10] for Tang ($0.90)\n\n";

    cin >> a;

    if (a == 1) {
        cout << "You chose Coke.";
        d += 0.50;
    } else if (a == 2) {
        cout << "You chose Sprite.";
        d += 0.40;
    } else if (a == 3) {
        cout << "You chose Dr. Pepper.";
        d += 0.70;
    } else if (a == 4) {
        cout << "You chose Pepsi.";
        d += 0.60;
    } else if (a == 5) {
        cout << "You chose Ginger Ale.";
        d += 0.80;
    } else if (a == 6) {
        cout << "You chose Mountain Dew.";
        d += 0.60;
    } else if (a == 7) {
        cout << "You chose 7UP.";
        d += 0.50;
    } else if (a == 8) {
        cout << "You chose Fanta.";
        d += 0.50;
    } else if (a == 9) {
        cout << "You chose Water.";
        d += 1.00;
    } else if (a == 10) {
        cout << "You chose Tang.";
        d += 0.90;
    } else {
        cout << "Your drink could not be found.";
    }

    cout << "\n\nYou must pay $" << d << "\n\nYou have $" << e - d << " left.\n\n";
    cout << "\n\n";
    cout << "Your total was  $" << d << ". \n\nThank you for your money.";
}
