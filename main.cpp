// APT_chart_length.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>

int main()
{
    double x, min = 6000, max = 30000;
    for (;;)
    {
        std::cout << "Type SamplePerSecond parameter from APT\n25, 50, 100, 200, 250, 500, 1000: ";
        x = 0;
        std::cin >> x;

        while (x != 25 && x != 50 && x != 100 && x != 200 && x != 250 && x != 500 && x != 1000)
        {
            std::cout << "WRONG INPUT!\nType SamplePerSecond parameter from APT\n25, 50, 100, 200, 250, 500, 1000: ";
            std::cin >> x;
        }

        std::cout << std::endl << "Required and adequate amount of measured dots on screen is between: " << min << " to " << max << std::endl;

        std::cout << "\nfor 5min chart number of dots should be devided on : " << (5 * 60 * x) / max << " to " << (5 * 60 * x) / min << std::endl;
        std::cout << "\nfor 15min chart number of dots should be devided on : " << (15 * 60 * x) / max << " to " << (15 * 60 * x) / min << std::endl;
        std::cout << "\nfor 30min chart number of dots should be devided on : " << (30 * 60 * x) / max << " to " << (30 * 60 * x) / min << std::endl;
        std::cout << "\nfor 60min chart number of dots should be devided on : " << (60 * 60 * x) / max << " to " << (60 * 60 * x) / min << std::endl;

        std::cout << "\nEND OF CALCULATION. TRY AGAIN:\n\n";
    }

}
