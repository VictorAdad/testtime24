#include "testtime24.h"
// test cases

// void TestTime24_fixture::testSameDay(){
// 	CPPUNIT_ASSERT( t1->minutes2(*t2) == 70 );
// }

//void TestTime24_fixture::testInvalidInstance(){}

void TestTime24_fixture::test5(){
	CPPUNIT_ASSERT( t1->minutes2(*t2) == 5 );
}

// void TestTime24_fixture::test10(){
// 	CPPUNIT_ASSERT( t1->minutes2(*t2) == 10 );
// }