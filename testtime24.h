#ifndef __TESTTIME24_H
#define __TESTTIME24_H
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>
#include <stdexcept>
#include "time24.h"

/*
TODO:
1. Create a new branch
Create test cases that fail
2. Another branch
Make minutes2() correct
All test cases should pass
3. Create branch 3
change minutes2() to return hour instead of minutes
*/

class TestTime24_fixture: public CppUnit::TestFixture {
	public:
		// add testcases according to the commented model
		CPPUNIT_TEST_SUITE(TestTime24_fixture);

			//CPPUNIT_TEST(testSameDay);
			//CPPUNIT_TEST_EXCEPTION(testInvalidInstance, InvalidTimeExcept);
			CPPUNIT_TEST(test5);
			//CPPUNIT_TEST(test10);

		CPPUNIT_TEST_SUITE_END();

	private:
		  Time24 *t1, *t2, *t3;

	public:

		void setUp() {
		  t1 = new Time24(1, 0);
		  t2 = new Time24(1, 5);
		  t3 = new Time24(1, 10);
		}

		void tearDown() {
		  delete t1;  
		  delete t2;
		  delete t3;
		}

		//void testSameDay();
		//void testInvalidInstance();
		//void InvalidTimeExcept();
		void test5();
		//void test10();
};

#endif