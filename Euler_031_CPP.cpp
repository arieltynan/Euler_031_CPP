// Euler_031_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Coin Sum
// How many different ways can £2 be made using any number of coins?

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int bal = 200;
    vector <vector<int>> v;
    int arr[8] = { 1, 2, 5, 10, 20, 50, 100, 200 };
    for (int i = 0; i < 8; i++)
    {
        vector<int> tempVect;
        for (int j = 0; j < bal + 1; j++)
        {
            if (j % arr[i] == 0)
                tempVect.push_back(j);
        }
        v.push_back(tempVect);
    }

    int sols = 0;
    
    for (int a = 0; a < v[0].size(); a++) // 1 cent
    {
        for (int b = 0; b < v[1].size() - a/2; b++) // 2 cent
        {
            for (int c = 0; c < v[2].size() - 2*b/5 - a/5; c++) // 5 cent
            {
                for (int d = 0; d < v[3].size() - c/2 - b/5 - a/10; d++) // 10 cent
                {
                    for (int e = 0; e < v[4].size() - d/2 - c/4 - b/10 - a/20; e++) // 20 cent
                    {
                        for (int f = 0; f < v[5].size() - 2*e/5 - d/5 - c/10 - b/25 - a/50; f++) // 50 cent
                        {
                            for (int g = 0; g < v[6].size() - f/2 - e/5 - d/10 - c/20 - b/50 - a/100 ; g++) // 100 cent
                            {
                                for (int h = 0; h < v[7].size() - g/2 - f/4 - e/10 - d/20 - c/40 - b/100 - a/200 ; h++) // 200 cent
                                {
                                    if (v[0][a] + v[1][b] + v[2][c] + v[3][d] + v[4][e]  + v[5][f]  + v[6][g] + v[7][h]  == 200)
                                    {
                                        sols++;
                                        //cout << sols << " ";
                                        //cout << "p1: " << a << "| p2: " << b << "| p5: " << c << "| p10: " << d << "| p20: " << e << "| p50: " << f << "| p100: " << g << "| p200: " << h << endl;
                                    }
                                } //for loop p200
                            } //for loop p100
                        } //for loop p50
                    } //for loop p20
                } //for loop p10
            } //for loop p5
        } //for loop p2
    } //for loop p1

    cout << sols << endl;
}
