#include <iostream>
#include <vector>

using namespace std;

vector<int> KMPFunction(string text) {
    
    vector<int> prefix_array(text.size());
    int j = 0;
    for (int i=1; i<text.size(); i++) {
        for (;j>0 && text[j]!=text[i];)
            j = prefix_array[j-1];

        if (text[i] == text[j])
            j++;
            
        prefix_array[i] = j;
    }
    /*
    for(int i=0; i<text.size();i++) {
        cout<<prefix_array[i]<<endl;
    }
    */
    return prefix_array;
}

int main()
{
   KMPFunction("aabaabcab");
   return 0;
}