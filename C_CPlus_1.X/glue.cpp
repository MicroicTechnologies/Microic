#include "glue.h"
#include "newclass.h"

extern "C" {

CClass * test_new(int i) {
       newClass *t = new newClass(i);
       
       return (CClass *)t;
}

void test_testfunc(const CClass *test) {
    int a1;
        newClass *t = (newClass *)test;
        t->testfunc();
        t->testfunc();
        a1 = t->testint1;
}

void test_delete(CClass *test) {
        newClass *t = (newClass *)test;

        delete t;
}
}
