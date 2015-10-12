#include <iostream>
#include "kontroler.h"

using namespace std;

int main() {
    cout << "Chcesz wygrac? (y/n)" << endl;

    char check;
    cin >> check;

    kontroler winer;

    if(winer.check_win(check))
        cout << "Wygrales!" << endl;
    else
        cout << "Przegrales" << endl;

    return 0;
}