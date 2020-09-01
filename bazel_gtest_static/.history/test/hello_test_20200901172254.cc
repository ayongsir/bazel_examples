#include "gtest/gtest.h"

#include "hello/hello.h"

TEST(TestHello, HelloMethod0) {
    ASSERT_TRUE(0);
}

TEST(TestHello, HelloMethod1) {
    ASSERT_TRUE(1);
}

TEST(TestHello, HelloMethod2) {
    ASSERT_TRUE(1 > 0);
}

TEST(TestHello, HelloMethod3) {
    ASSERT_TRUE(1 < 0);
}

TEST(TestHello, HelloMethod4) {
    ASSERT_TRUE(1 - 1);
}

TEST(TestHello, HelloMethod5) {
    ASSERT_TRUE(1 + 1);
}
