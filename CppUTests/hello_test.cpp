#include "CppUTest/CommandLineTestRunner.h"
#include "CppUTest/TestPlugin.h"
#include "CppUTest/TestRegistry.h"
#include "CppUTestExt/MockSupportPlugin.h"
#include "CppUTest/TestHarness.h"

extern "C" {
#include "calculator.h"
}

TEST_GROUP(cal_sqrt){
    void setup(){
    }

    void teardown(){
    }
};

TEST(cal_sqrt, should_return_three_when_input_is_nine){
	CHECK(3 == cal_sqrt(9));
}
