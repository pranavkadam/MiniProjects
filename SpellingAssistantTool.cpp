#include <iostream>
#include <map>
#include <fstream>
#include<string>


using namespace std;

bool hammingish(string s, string s1);
pair<string, int> compare(string s, map<string, int> dictionary);




int main(int argc, char* argv[]){

   string s1= argv[1];
      fstream f(s1);
      map<string, int> dict;
      string word;
      int counter;

   while(!f.eof()) {
        f >> word >> counter;
        dict[word] = counter;
    }

    f.close();




  map<string,int>::iterator it;  //iterator for the map
  string s;


  while(cin >> s){

    it = dict.find(s);

  if (it != dict.end()) {
  cout<<s<<" "<<dict[s]<<endl;
  dict[s]=dict[s]+1;
  }
  else{
    pair<string,int> output = compare(s,dict);
    if(output.first=="-"){
      dict[s]=1;
      cout<<"-"<<endl;
    }
    else{
      cout<<output.first<<" "<<output.second<<endl;
    }
  }
}
}




bool hammingish(string s, string s1){
    int a=s.length();                   //function to check for the edit distance
    int b=s1.length();

    if((a-b)>1){
      return false;
    }
    else if((a-b)>1){
      return false;
    }

    int hammingish=0;
    int c=0;
    int d=0;

    while(c<a && d<b){
      if(s[c]!=s1[d]){
        if(hammingish==1){
          return false;
        }
        if(a<b){
          d=d+1;
        }
        else if(b<a){
          c=c+1;
        }
        else{
        c=c+1;
        d=d+1;
      }

      hammingish=hammingish+1;
    }
    else {
    c=c+1;
    d=d+1;
  }
}

    if(c<a || d<b) {
    hammingish=hammingish+1;
  }

        if(hammingish==1){
      return true;
    }
    return false;
    }



  pair<string, int> compare(string s, map<string, int> dictionary){

    map<string,int>::iterator it;


   if(dictionary.count(s)==1){
     pair<string, int> retVal = make_pair(s, dictionary[s]);
     return retVal;
   }
   pair<string, int> temp = make_pair("-",0);
   map<string, int> dict1;

   for(it = dictionary.begin(); it != dictionary.end(); it++) {
    if(hammingish(s, it->first) == true) {
    dict1[it->first] = it->second;
    }
    }


    for(it = dict1.begin(); it != dict1.end(); it++) {
     if(it->second > temp.second){
       temp.first=it->first;
       temp.second=it->second;
     }
   }
   return temp;
     }
