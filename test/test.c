#include "ctest.h"
#include <math.h>
#include <STreug.h>

CTEST(vvod, data_1)
{
	
    // Given
    const float a = 0;
    const float b = 15;
    const float y = 60;
    // When
    	double S;
   const int expected = -1;
   const int result = st(a, b, y, &S);


    // Then
    ASSERT_EQUAL(expected, result);
}

CTEST(vvod, data_2)
{
	
    // Given
    const float a = -15;
    const float b = 15;
    const float y = 60;
    // When
    	double S;
   const int result = st(a, b, y, &S);
   const int expected = -1;

    // Then
    ASSERT_EQUAL(expected, result);
}

CTEST(vvod, data_3)
{
	
    // Given
    const float a = 30;
    const float b = 0;
    const float y = 60;
    // When
    	double S;
   const int result = st(a, b, y, &S);
   const int expected = -1;

    // Then
    ASSERT_EQUAL(expected, result);
}

CTEST(vvod, data_4)
{
	
    // Given
    const float a = 10;
    const float b = -23;
    const float y = 60;
    // When
    	double S;
   const int result = st(a, b, y, &S);
   const int expected = -1;

    // Then
    ASSERT_EQUAL(expected, result);
}

CTEST(vvod, data_5)
{
	
    // Given
    const float a = 50;
    const float b = 56;
    const float y = 0;
    // When
    	double S;
   const int result = st(a, b, y, &S);
   const int expected = -1;

    // Then
    ASSERT_EQUAL(expected, result);
}

CTEST(vvod, data_6)
{
	
    // Given
    const float a = 50;
    const float b = 56;
    const float y = 180;
    // When
    	double S;
   const int result = st(a, b, y, &S);
   const int expected = -1;

    // Then
    ASSERT_EQUAL(expected, result);
}

CTEST(vvod, data_7)
{
	
    // Given
    const float a = 50;
    const float b = 56;
    const float y = -15;
    // When
    	double S;
   const int result = st(a, b, y, &S);
   const int expected = -1;

    // Then
    ASSERT_EQUAL(expected, result);
}

CTEST(vvod, data_8)
{
	
    // Given
    const float a = 50;
    const float b = 56;
    const float y = 0.1;
    // When
    	double S;
   const int result = st(a, b, y, &S);
   const int expected = 1;

    // Then
    ASSERT_EQUAL(expected, result);
}

CTEST(S_test, data_1)
{
	
    // Given
    const float a = 10;
    const float b = 15;
    const float y = 60;
    // When
    	double S;
   const int result = st(a, b, y, &S);


    // Then
    const double exp = 64.9519;
    ASSERT_DBL_NEAR(exp, S);
}

CTEST(S_test, data_2)
{
    // Given
    const float a = 1;
    const float b = 5;
    const float y= 30;
    // When
    	double S;
    const int result = st(a, b, y, &S);
	
    // Then
    const float exp = 1.25;
    ASSERT_DBL_NEAR(exp, S);
}

CTEST(S_test, data_3)
{
    // Given
    const float a = 30;
    const float b = 18;
    const float y= 7;
    // When
    	double S;
    const int result = st(a, b, y, &S);
	
    // Then
    const float exp = 32.90472;
    ASSERT_DBL_NEAR(exp, S);
}


CTEST(S_test, data_4)
{
    // Given
    const float a = 80;
    const float b = 80;
    const float y= 130;
    // When
    	double S;
    const int result = st(a, b, y, &S);
	
    // Then
    const float exp = 2451.34222 ;
    ASSERT_DBL_NEAR(exp, S);
}

CTEST(S_test, data_5)
{
    // Given
    const float a = 0.5;
    const float b = 0.7;
    const float y= 90;
    // When
    	double S;
    const int result = st(a, b, y, &S);
	
    // Then
    const float exp = 0.175;
    ASSERT_DBL_NEAR(exp, S);
}

CTEST(S_test, data_6)
{
    // Given
    const float a = 30;
    const float b = 80;
    const float y= 0.3;
    // When
    	double S;
    const int result = st(a, b, y, &S);
	
    // Then
    const float exp = 6.28316; 
    ASSERT_DBL_NEAR(exp, S);
}

CTEST(S_test, data_7)
{
    // Given
    const float a = 80;
    const float b = 50;
    const float y= 179;
    // When
    	double S;
    const int result = st(a, b, y, &S);
	
    // Then
    const float exp = 34.90481;
    ASSERT_DBL_NEAR(exp, S);
}
