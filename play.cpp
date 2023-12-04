/*
 * play.cpp
 *
 *  Created on: Dec 4, 2023
 *      Author: andi
 */


#include <iostream>

using namespace std;

int main()
{
      int m,n,r;
    cin>> n;
    cin>> m;
    cout<< n << "\n";
    cout<< m << "\n";
    if (m==0)
    {
        r=1;
        cout<<r;
        return 0;
    }
    r=1;
    for (int i=1; i<=m; i++){
        cout<< i << "\n";
        r=r*n;
    }
    cout<<r<< "\n";

    return 0;
}



