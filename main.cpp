#include "cursor.h"

#include <iostream>
using namespace std;

int main() {
    Cursor cursor;

    cursor.init(40, 55, 10, CursorType::Horizontal, true);
    cursor.display();

    cursor.read();
    cursor.display();
}