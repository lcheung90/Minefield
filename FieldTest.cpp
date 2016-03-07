/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"
 
class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}

TEST(FieldTest, inBoundsSafeCheck)
{
    Field minefield;
    ASSERT_TRUE(minefield.isSafe(0,0));
}

TEST(FieldTest, outBoundsSafeCheck)
{
    Field field;
    ASSERT_FALSE(field.isSafe(0,1000));
}
