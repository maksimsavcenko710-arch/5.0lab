#include <gtest/gtest.h>

#define main program_main
#include "5.1.cpp"
#undef main

TEST(GTest, Equal)
{
    EXPECT_NEAR(g(1, 1), 0.5, 0.0000001);
}

TEST(GTest, Zero)
{
    EXPECT_NEAR(g(0, 5), 0.0, 0.0000001);
}

TEST(GTest, Negative)
{
    EXPECT_NEAR(g(-1, 1), -0.5, 0.0000001);
}