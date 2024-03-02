#include "LongC.h"
#include <iostream>
#include <string>

using namespace std;

void LongC::Init(const Pair& num) {
    number = num;
}

void LongC::setFirst(int f) {
    number.setFirst(f);
}
void LongC::setSecond(int s) {
    number.setSecond(s);
}

void LongC::Read() {
    int f, s;
    cout << "Enter the first part of the number: ";
    cin >> f;
    cout << "Enter the second part of the number: ";
    cin >> s;
    number.setFirst(f);
    number.setSecond(s);
}

void LongC::Display() const {
    cout << "Number: (" << number.getFirst() << ", " << number.getSecond() << ")" << endl;
}

LongC LongC::add(const LongC& other) const {
    LongC result;
    result.Init(number.add(other.number));
    return result;
}

LongC LongC::multiply(const LongC& other) const {
    LongC result;
    int firstPart = number.getFirst() * other.number.getFirst();
    int secondPart = number.getSecond() * other.number.getSecond();
    Pair pairResult;
    pairResult.setFirst(firstPart);
    pairResult.setSecond(secondPart);
    result.Init(pairResult);
    return result;
}

LongC LongC::subtract(const LongC& other) const {
    LongC result;
    Pair pairResult;
    pairResult.setFirst(number.getFirst() - other.number.getFirst());
    pairResult.setSecond(number.getSecond() - other.number.getSecond());
    result.Init(pairResult);
    return result;
}

LongC::Pair LongC::Pair::add(const Pair& other) const {
    Pair result;
    result.setFirst(first + other.getFirst());
    result.setSecond(second + other.getSecond());
    return result;
}
