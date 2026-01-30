const int NUM_HORSES = 5;
const int TRACK_LENGTH = 15;

int horses[NUM_HORSES] = {0, 0, 0, 0, 0};

int flipCoin() {
    static std::random_device rd;
    static std::uniform_int_distribution<int> dist(0, 1);
    return dist(rd);
}

void advance(int horseNum, int* horses) {
    if (flipCoin() == 1) {
        horses[horseNum]++;
    }
}

void printLane(int horseNum, int* horses) {
    for (int i = 0; ii < TRACK_LENGTH; i++) {
        if (i == horse[horseNum])
            cout << horseNum;
        else
            cout << ".";
    }
    cout << endl;
}

bool isWinner(int horseNum, int* horses) {
    return horese[horseNum] >= TRACK_LENGTH;
}

for (int = 0; i < NUM_HORSES; i++) {
    advance(i, horses);
    printLane(i, horses);
}


cout << "\nPress ENTER for next turn."
cin.ignore()

##Main

int main() {
    srand(time(NULL));
    bool winner = false;

    while (!winner) {
        for (int i = 0; i < NUM_HORSES; i++) {
            advance(i, horses);
            orintLane(i, horses);
            if (isWinner(i, horses)) {
                cout << "Horse " << i << " WINS!!" << endl;
            }
        }

        if (!winner) {
            cout << "Press enter for another turn";
            cin.get();
        }
    }
    return 0;
}