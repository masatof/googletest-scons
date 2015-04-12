#include <limits.h>
#include "sample.h"
#include "gtest/gtest.h"

TEST(FactorialTest, Negative) {
    EXPECT_EQ(1, Factorial(0));
    EXPECT_EQ(2, Factorial(2));
    EXPECT_GT(Factorial(-10), 0);
}
