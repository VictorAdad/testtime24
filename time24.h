#ifndef __TIME24_H
#define __TIME24_H

#include <iostream>
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>

class InvalidTimeExcept {
};  // an empty class, just for exceptions


class Time24 {
private:
	int hour, min;
public:
	// throws InvalidTimeExcept if object is initialized with invalid arguments
	Time24(int h=0, int m=0);

	// a.minutes2(b) = nr of minutes elapsed from time a to time b
	// if b is earlier than a, then b is considered next day.
	int minutes2(Time24) const;
};


#endif
