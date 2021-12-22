// Euler_031_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int bal = 200;
    int p1 = 1; //index 0 in arr
    int p2 = 2; //index 1 in arr
    int p5 = 5; //index 2 in arr
    int p10 = 10; //index 3 in arr
    int p20 = 20; //index 4 in arr
    int p50 = 50; //index 5 in arr
    int p100 = 100; //index 6 in arr
    int p200 = 200; //index 7 in arr

    int sols = 0;

    vector <vector<int>> fullVect;
    vector<int> tempVect(8,0); //represent counts of each coin //vector size 6, all zeroes
   // while(bal > 0 && count(fullVect.begin(), fullVect.end(), tempVect) == 0)
     //   if ()
    for (int a = 0; a <= bal / p1; a++)
    {
        aLoop:
        if (a * p1 == 200)
        {
            sols++;
            goto enditall;
        }

        for (int b = 0; b <= bal / p2; b++)
        {
            bLoop:
            if (a * p1 + b* p2 == 200)
            {
                sols++;
                goto aLoop;
            }

            for (int c = 0; a <= bal / p5; c++)
            {
                cLoop:
                if (a * p1 + b * p2 + c * p5 == 200)
                {
                    sols++;
                    goto bLoop;
                }

                for (int d = 0; d <= bal / 10; d++)
                {
                    dLoop:
                    if (a * p1 + b * p2 + c * p5 + d * p10 == 200)
                    {
                        sols++;
                        goto cLoop;
                    }

                    for (int e = 0; e <= bal / 20; e++)
                    {
                        eLoop:
                        if (a * p1 + b * p2 + c * p5 + d * p10 + e * p20 == 200)
                        {
                            sols++;
                            goto dLoop;
                        }

                        for (int f = 0; f <= bal / 50; f++)
                        {
                            fLoop:
                            if (a * p1 + b * p2 + c * p5 + d * p10 + e * p20  + f * p50 == 200)
                            {
                                sols++;
                                goto eLoop;
                            }

                            for (int g = 0; g <= bal / 100; g++)
                            {
                                gLoop:
                                if (a * p1 + b * p2 + c * p5 + d * p10 + e * p20 + f * p50 + g * p100 == 200)
                                {
                                    sols++;
                                    goto fLoop;
                                }

                                for (int h = 0; h <= bal / 200; h++)
                                {
                                    if (a * p1 + b * p2 + c * p5 + d * p10 + e * p20 + f * p50 + g * p100 + h * p200 == 200)
                                    {
                                        sols++;
                                        cout << sols << endl;
                                        goto gLoop;
                                    }
                                } //for loop p200
                            } //for loop p100
                        } //for loop p50
                    } //for loop p20
                } //for loop p10
            } //for loop p5
        } //for loop p2
    } //for loop p1
    enditall:
    cout << sols << endl;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
