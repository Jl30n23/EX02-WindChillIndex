//
// Created by jlpantaleon on 2/25/19.
//

#include <iostream>
#include <cmath>
#include "windchillindex.h"

using namespace std;
namespace edu{
    namespace sbcc{
        namespace cs140{

            double ComputeWindChillIndex(double v, double t) {
                if (t <= 10) {
                    cout << "Enter temperature of 10 degrees Celsius or Less;" << t << endl;
                    cin >> t;
                    cout << "Enter wind speed in meters per sec;" << v << endl;
                    cin >> v;
                    double w = 33 - ((((10 * sqrt(v)) - v + 10.5) * (33 - t)) / 23.1);
                    return w;
                } else {
                    cout << "invalid Input" << endl;
                }
                return -1;
            }

        };
    }
}