// ### 🌼 **Story 1: The Gardener's Daily Work**

// **Story:**

// In a peaceful village, a kind gardener plants flowers every day. She follows some special rules that her grandmother gave her. She writes in her notebook what she plants from Day 1 to Day N.

// **Your Work:**

// Help her find how many flowers she planted by following these rules.

// **Hints:**

// - If the day number is divisible by 2 → plant 2 Sunbuds.
// - If divisible by 3 → plant 3 Moonblossoms.
// - If divisible by 4 → plant 4 Starroots.
// - If divisible by both 2 and 3 → plant 1 Crystal Flower.
// - If divisible by 2, 3, and 4 → no flower (soil is resting).
// - If none of these → plant 1 Wildleaf.

// **Tasks:**

// - Count how many of each flower she planted.
// - Find how many days soil was resting.
// - Find total number of flowers.

//=====================================================================
#include <iostream>
using namespace std;

void gardenerWork(int N) {
    int moon = 0;
    int star = 0;
    int sun = 0;
    int crystalFlowers = 0;
    int wildleafs = 0;
    int wait = 0;

    for (int day = 1; day <= N; ++day) {
        if (day % 12 == 0) {
            wait++;
        }
        else if (day % 6 == 0) {  // divisible by 2 and 3
            crystalFlowers++;
        }
        else if (day % 4 == 0) {
            star += 4;
        }
        else if (day % 3 == 0) {
            moon += 3;
        }
        else if (day % 2 == 0) {
            sun += 2;
        }
        else {
            wildleafs++;
        }
    }

    int totalFlowers = sun + moon + star + crystalFlowers + wildleafs;

    cout << "🌻 Sunbuds: " << sun << endl;
    cout << "🌙 Moonblossoms: " << moon << endl;
    cout << "⭐ Starroots: " << star << endl;
    cout << "💎 Crystal Flowers: " << crystalFlowers << endl;
    cout << "🍃 Wildleafs: " << wildleafs << endl;
    cout << "🛏 Rest Days: " << wait << endl;
    cout << "🌼 Total Flowers Planted: " << totalFlowers << endl;
}

int main() {
    int N;
    cout << "Enter number of days (N): ";
    cin >> N;

    gardenerWork(N);
    return 0;
}