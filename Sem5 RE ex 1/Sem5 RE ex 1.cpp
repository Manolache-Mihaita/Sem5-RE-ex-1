// Sem5 RE ex 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>

int main()
{
	
	int x = GetTickCount();
	while (x) {
		
		switch (x%5)
		{
		case 0:x += 1; break;
		case 1:x -= 1; break;
		case 2:x += 2; break;
		case 3:x += 3; break;
		case 4:x &= 1; break;
		default:
			break;
		}
		x /= 5;
	}
    return 0;
}

