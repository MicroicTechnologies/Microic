/* 
 * File:   newClass.cpp
 * Author: User
 * 
 * Created on 25 September, 2015, 10:51 AM
 */

#include "newClass.h"

using namespace std;

newClass::newClass(int i) {
    this->testint = i;
}

void newClass::testfunc() {
//        cout << "test " << this->testint << endl;
    this->testint1 = this->testint;
}

newClass::newClass(const newClass& orig) {
}

newClass::~newClass() {
}

