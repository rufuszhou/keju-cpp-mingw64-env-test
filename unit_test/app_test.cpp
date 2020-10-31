
#include <gtest/gtest.h>

#include "app.hpp"

TEST(AppTest, get)
{
   CApp a(-1);
   ASSERT_TRUE(a.get() == -1);
}

TEST(AppTest, set)
{
   CApp a(0);
   a.set(-2);
   ASSERT_TRUE(a.get() == -2);
}

TEST(AppTest, inc)
{
   CApp a(0);
   a.inc();
   ASSERT_TRUE(a.get() == 1);
}

TEST(AppTest, dec)
{
   CApp a(1);
   a.dec();
   ASSERT_TRUE(a.get() == 0);
}


