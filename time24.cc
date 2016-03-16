#include <iostream>
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>

#include "time24.h"


Time24::Time24(int h, int m) {
	hour = h; 
	min = m;
}


int Time24::minutes2(Time24 to) const {
	return 0;
}