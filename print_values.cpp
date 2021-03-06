#include "test_runner.h"

#include <ostream>
using namespace std;

#define PRINT_VALUES(out, x, y) out << (x) << endl << (y) << endl

int main() {
  TestRunner tr;
  tr.RunTest(
      [] {
        ostringstream output;
        int x = 0;
        if (x)
          PRINT_VALUES(output, 5, "red belt");
        else
          PRINT_VALUES(output, 5, "red belt");

        ASSERT_EQUAL(output.str(), "5\nred belt\n");
      },
      "PRINT_VALUES usage example");
}
