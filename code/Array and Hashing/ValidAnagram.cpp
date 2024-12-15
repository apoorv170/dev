#include <iostream>
#include <unordered_map>
using namespace std;

bool validAnagram (string str1 , string str2) {
    unordered_map<char,int> umap;
    if (str1.length() != str2.length()) return false;
    for(int i = 0; i < str1.length(); i++) {
        umap[str1[i]]++;
    }
    for(int i = 0; i < str2.length(); i++) {
        umap[str2[i]]--;
        //The character which it does not find in the map , its value is not substracted by 1
    }
    for(auto x: umap){
        if(x.second > 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string s1 = "jar";
    string s2 = "jam";
    bool ans = validAnagram(s1 , s2);
    if (ans == 1) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}
