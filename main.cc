#include <iostream>
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>

#include "testtime24.h"

int main() {
   CppUnit::TextTestRunner runner;
   runner.addTest(TestTime24_fixture::suite());
   runner.run();
 
  return 0;
}
