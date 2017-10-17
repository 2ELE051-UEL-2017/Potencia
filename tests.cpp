#include "CppUTest/TestHarness.h"

extern "C" {
	double potencia(double base, int expoente);
}

TEST_GROUP(potencia)
{
};

TEST(potencia, DoisElevadoAUm)
{
	DOUBLES_EQUAL(2.0, potencia(2.0, 1), 1e-6);
}

TEST(potencia, TresElevadoAUm)
{
	DOUBLES_EQUAL(3.0, potencia(3.0, 1), 1e-6);
}

TEST(potencia, DoisElevadoADez)
{
	DOUBLES_EQUAL(1024.0, potencia(2.0, 10), 1e-6);
}

TEST(potencia, DoisElevadoAZero)
{
	DOUBLES_EQUAL(1.0, potencia(2.0, 0), 1e-6);
}

TEST(potencia, ZeroElevadoAZero)
{
	DOUBLES_EQUAL(1.0, potencia(0.0, 0), 1e-6);
}

TEST(potencia, ZeroElevadoADois)
{
	DOUBLES_EQUAL(0.0, potencia(0.0, 2), 1e-6);
}

TEST(potencia, MenosDoisElevadoATres)
{
	DOUBLES_EQUAL(-8.0, potencia(-2.0, 3), 1e-6);
}

TEST(potencia, MenosDoisElevadoADois)
{
	DOUBLES_EQUAL(4.0, potencia(-2.0, 2), 1e-6);
}

TEST(potencia, DoisElevadoAMenosUm)
{
	DOUBLES_EQUAL(0.5, potencia(2.0, -1), 1e-6);
}