#include <limits.h>
#include "sample.h"
#include "Turtle.h"
#include "Painter.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"

using ::testing::AtLeast;

TEST(FactorialTest, Negative) {
    EXPECT_EQ(1, Factorial(0));
    EXPECT_EQ(2, Factorial(2));
    EXPECT_GT(Factorial(-10), 0);
}


class MockTurtle : public Turtle {
public:
    MOCK_METHOD0(PenUp, void());
    MOCK_METHOD0(PenDown, void());
};

TEST(PainterTest, CanDrawSomething)
{
    MockTurtle turtle;
    EXPECT_CALL(turtle, PenDown()).Times(AtLeast(1));

    Painter painter(&turtle);

    EXPECT_TRUE(painter.DrawCircle(0, 0, 10));
}
