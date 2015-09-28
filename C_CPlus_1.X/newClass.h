/* 
 * File:   newClass.h
 * Author: User
 *
 * Created on 25 September, 2015, 10:51 AM
 */

#ifndef NEWCLASS_H
#define	NEWCLASS_H

class newClass {
public:
    newClass(int i);
    newClass(const newClass& orig);
    virtual ~newClass();
    void testfunc();
    
    int testint1;
private:
    int testint;

};

#endif	/* NEWCLASS_H */

