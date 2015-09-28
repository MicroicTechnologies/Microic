/* 
 * File:   newmain.c
 * Author: User
 *
 * Created on 25 September, 2015, 10:38 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "glue.h"

extern void func(void);

/*
 * 
 */
int main(int argc, char** argv) {

    CClass *t1 = NULL;
    CClass *t2 = NULL;
    t1 = test_new(5);
    test_testfunc(t1);
    
    t2 = test_new(8);
    test_testfunc(t2);
    
    test_testfunc(t1);
    
    func();
    return (EXIT_SUCCESS);
}

