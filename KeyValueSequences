// Pranav
// Kadam
#ifndef A3_HPP
#define A3_HPP
#include <algorithm>
#include <list>
#include <vector>

class key_value_sequences {
public:
    // YOU SHOULD USE C++ CONTAINERS TO AVOID RAW POINTERS
    // IF YOU DECIDE TO USE POINTERS, MAKE SURE THAT YOU MANAGE MEMORY PROPERLY

    // IMPLEMENT ME: SHOULD RETURN SIZE OF A SEQUENCE FOR GIVEN KEY
    // IF NO SEQUENCE EXISTS FOR A GIVEN KEY RETURN 0
    int size(int key) const {

        std::vector<int>::const_iterator it=std::find(keys.begin(), keys.end(), key);

        if (it == keys.end()) {
            return 0;
        }

            int idx = it - keys.begin();
            return values[idx].size();

            // int size(int key) const {
            //
            //     for(int i=0;i<keys.size();i++){
            //         if(keys[i]==key){
            //             return values[i].size();
            //         }
            //     }
            //
            //     return 0;

    }

    // IMPLEMENT ME: SHOULD RETURN POINTER TO A SEQUENCE FOR GIVEN KEY
    // IF NO SEQUENCE EXISTS FOR A GIVEN KEY RETURN nullptr
    const int* data(int key) const {

        std::vector<int>::const_iterator it=std::find(keys.begin(), keys.end(), key);
        if (it == keys.end()) {
            return nullptr;
        }

        int idx=it-keys.begin();
        const int* p=values[idx].data();
        return p;

        // for (int i=0;i<keys.size();++i) {
        //     if (keys[i] == key) {
        //         const int* p = values[i].data();
        //         return p;
        //     }
        // }
        // return nullptr;
    }



    // IMPLEMENT ME: INSERT VALUE INTO A SEQUENCE IDENTIFIED BY GIVEN KEY
    void insert(int key, int value){
    std::vector<int>::const_iterator it=std::find(keys.begin(), keys.end(), key);

    if(it==keys.end()){
     keys.push_back(key);
     std::vector<int> newvalue;
     newvalue.push_back(value);
     values.push_back(newvalue);
         return;
   }


      int idx=it-keys.begin();

      values[idx].push_back(value);
}
private:
    std::vector<int> keys;
    std::vector<std::vector<int>> values;
}; // class key_value_sequences

#endif // A3_HPP
