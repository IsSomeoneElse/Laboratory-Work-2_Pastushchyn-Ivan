#include "cursor.h"

#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

uint Cursor::getX() {
    return x;
}

uint Cursor::getY() {
    return y;
}

void Cursor::setX(uint _x) {
    x = _x;
}

void Cursor::setY(uint _y) {
    y = _y;
}

void Cursor::move(uint _x, uint _y) {
    setX(_x);
    setY(_y);
}

CursorType Cursor::getType() {
    return type;
}

void Cursor::setType(CursorType _type) {
    type = _type;
}

uchar Cursor::getSize() {
    return size;
}

void  Cursor::setSize(uchar _size) {
    size = _size;
}

void Cursor::show() {
    setShown(true);
}

void Cursor::hide() {
    setHidden(true);
}

void Cursor::setShown(bool shown) {
    visible = shown;
}

void Cursor::setHidden(bool hidden) {
    visible = !hidden;
}

bool Cursor::isShown() {
    return visible;
}

bool Cursor::isHidden() {
    return !visible;
}

void Cursor::init(uint _x, uint _y, uchar _size, CursorType _type, bool _visible) {
    x = _x;
    y = _y;

    size = _size;
    type = _type;

    visible = _visible;
}

void Cursor::read() {
    int _type = 0;
    cin >> x >> y >> size >> _type >> visible;

    type = (CursorType)_type;
}

void Cursor::display() {
    cout << toString() << endl;
}

std::string Cursor::toString() {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")"
        + " Size: " + std::to_string(size)
        + " Type: " + (type == Horizontal ? "Horizontal" : "Vertical")
        + " Visible: " + (visible ? "Yes" : "No");
}