/* 
 * File:   glue.h
 * Author: User
 *
 * Created on 25 September, 2015, 11:02 AM
 */

#ifndef GLUE_H
#define	GLUE_H

#ifdef	__cplusplus
extern "C" {
#endif

typedef void CClass;

CClass * test_new(int i);
void test_testfunc(const CClass *t);
void test_delete(CClass *t);


#ifdef	__cplusplus
}
#endif

#endif	/* GLUE_H */

