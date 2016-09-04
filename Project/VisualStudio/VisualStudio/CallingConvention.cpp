#include <iostream>

void __cdecl function();


void /*__attribute__((__stdcall__)) */function()
{
	std::cout << "This is a function." << std::endl;
}

//int __stdcall add(int a, int b);

//int __cdecl add(int a, int b)
//{
//	return a + b;
//}

//void ShowResult()
//{
//	std::cout << add(5, 10) << std::endl;
//}



//#define WriteLine(...) { printf(__VA_ARGS__); putchar('\n');}
////#define WriteLine (...) printf(__VA_ARGS__) + (putchar('\n') != EOF ? 1: 0);
//
//void TestVarList()
//{
//	int i = WriteLine("MoreWindows");
//
//	WriteLine("%d", i);
//
//	int j = printf("%s\n", "MoreWindows");
//
//	WriteLine("%d", j);
//}

int __cdecl GetA()
{
	return 5;
}

long __cdecl GetB()
{
	return 10;
}

double __cdecl GetC()
{
	return 20.5;
}

double __stdcall Sum(int a, long b, double c)
{
	return a + b + c;
}

#include <stdarg.h>

int __cdecl sum2(int count, ...)
{
	int nSum = 0;

	va_list args;
	va_start(args, count);
	while (count--)
	{
		nSum += va_arg(args, int);
	}
	va_end(args);

	return nSum;
}

#include "Cdecl.h"
#include "Stdcall.h"
#include "GetTT.h"

int main()
{
	//std::cout << "Add:" << add(5, 10) << std::endl;
	//int n = 3;
	//std::cout << "Sum2:" << Sum(5, 10, 20) << std::endl;

	//int r1 = add(10, 5);
	//int r2 = sub(10, 5);
	double r3 = GetTT(5);
	return 0;
}


//std::cout << "Sum:" << Sum(GetA(), GetB(), GetC()) << std::endl;