#include<iostream>
using namespace std;
void ReadData(float& p, float& br, float& er, float& t);
float FutureValue(float p, float r, float t);
float Pwr(float b, int e);
float FutureValue(float p, float r, float t) {
    float futureValue, pwr;
    pwr = Pwr(1 + (r / 100), t);
    futureValue = p * pwr;
    return futureValue;
}
float Pwr(float b, int e) {
    float result = 1;
    while (e != 0) {
        result *= b;
        --e;
    }
    return result;
}
void ReadData(float& p, float& br, float& er, float& t) {
    cout << "Enter The Principle Amount To Be Used to Compute Future Value: ";
    cin >> p;
    cout << "Enter the Beginning Interest to be Used:";
    cin >> br;
    cout << "Enter the Ending Interest to be Used:";
    cin >> er;
    cout << "Enter the Starting Term (number of years) to be Used:";
    cin >> t;
}
int main() {
    float p, br, er, t;
    float i;
    ReadData(p, br, er, t);
    cout << "Rate" << "\t\tYear " << t << "\t\tYear " << t + 1 << "\t\tYear " << t + 2 << "\t\tYear " << t + 3 << "\t\tYear " << t + 4 << "\n\n";

    for (i = br; i < er; i = i + 0.5) {
        cout << i << "\t\t" << FutureValue(p, i, t) << "\t\t" << FutureValue(p, i, t + 1) << "\t\t" << FutureValue(p, i, t + 2) << "\t\t" << FutureValue(p, i, t + 3) << "\t\t" << FutureValue(p, i, t + 4) << endl;
    }
    cout << er << "\t\t" << FutureValue(p, er, t) << "\t\t" << FutureValue(p, er, t + 1) << "\t\t" << FutureValue(p, er, t + 2) << "\t\t" << FutureValue(p, er, t + 3) << "\t\t" << FutureValue(p, er, t + 4) << endl;
    return 0;
}

