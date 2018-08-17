#include "gtest/gtest.h"
#include "int_lib/message.hpp"

TEST(message_test,content)
{
  EXPECT_EQ(get_message(),"Hello World!");
}
