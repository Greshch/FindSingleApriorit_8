// FindOddApriorit_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
		Description
First of all I creatred a bool array with the name doubles for 
save an no-unique elements. 
Last loops output only unique elements(if this doubles[i] == false)
*/

#include <iostream>

int main()
{
    int arr[] = { 10, -1, 10, 24, -1, -11, 14,  24, 7, 14 };
    const int szArray = sizeof arr / sizeof arr[0];
	int* const pBeg = arr;
	int* const pEnd = arr + szArray;

	bool doubles[szArray] = { false };
	for (int* pI = pBeg; pI != pEnd; ++pI)
	{
		for (int* pJ = pBeg; pJ != pEnd; ++pJ)
		{
			if (pI != pJ && *pI == *pJ)
			{
				//std::cout << *pI << "\n";
				int index = pJ - pBeg;
				*(doubles + index) = true;
			}
		}
	}
	
	for (int* pI = pBeg; pI != pEnd; ++pI)
	{
		int index = pI - pBeg;
		if (*(doubles + index) == false)
		{
			std::cout << *pI << " ";
		}
	}
	std::cout << "\n";
}

