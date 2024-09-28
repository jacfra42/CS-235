#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
#include <fstream>
using std::istream;
using std::ifstream;
#include <string>
using std::string;
#include <set>
using std::set;

int main(int argc, char const* argv[]) {
    if (argc == 1) {
        string item;
        set<string> uniq_set;
        while (getline(cin, item)) {
            if (!uniq_set.count(item)){
                uniq_set.insert(item);
                cout << item << endl;
            }
        }
    }
    if (argc == 2) {
        ifstream input(argv[1]);
        if (input.is_open()) {
            string item;
            set<string> uniq_set;
            while (getline(input, item)) {
                if (!uniq_set.count(item)){
                    uniq_set.insert(item);
                    cout << item << endl;
                }
            }
        }
        input.close();
    }

    return 0;
}
