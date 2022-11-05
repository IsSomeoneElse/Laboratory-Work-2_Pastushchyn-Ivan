#include "cursor.h"

#include <iostream>
using namespace std;

int main() {
    Cursor cursor;

    cursor.init(40, 55, 10, CursorType::Horizontal, true);
    cout << "Results with Init() method:" << endl;
    cursor.display();
    cout << endl;

    cursor.read();
    cout << "Results with Read() method:" << endl;
    cursor.display();

    system("PAUSE");
    return 0;
}