#include<iostream>
extern "C" {
#include "calculator.h"
}
#include "CppUTest/CommandLineTestRunner.h"
using namespace std;
IMPORT_TEST_GROUP(cal_sqrt);
int main(int argc, char** argv)
{
    double num, result;
    cin >> num;
    result = cal_sqrt(num);
    cout << result <<endl;
    return CommandLineTestRunner::RunAllTests(argc, argv);
}
