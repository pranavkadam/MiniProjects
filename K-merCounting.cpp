// Pranav
// Kadam

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(int argc, char* argv[]) {

    string dna_seq = "";

    string fil_name = argv[1];
    //because 2 command line arguments?

    ifstream f(fil_name);
    getline(f,dna_seq);


    int k=atoi(argv[2]);
    f.close();
    //input completed and values stored in k and dna_seq

    int l=dna_seq.length();


    //l is the length of the string

    cout<<0<<" "<<k<<" "<<l<<endl;

    int* lettercount=new int[5];
    lettercount[0]=0;
    lettercount[1]=0;
    lettercount[2]=0;
    lettercount[3]=0;
    lettercount[4]=0;

    //try fill here

    for(int x=0;x<l;x++){
        if(dna_seq.at(x)=='A'){
            lettercount[0]++;
        }
        if(dna_seq.at(x)=='C'){
            lettercount[1]++;
        }
        if(dna_seq.at(x)=='G'){
            lettercount[2]++;
        }
        if(dna_seq.at(x)=='T'){
            lettercount[3]++;
        }
        if(dna_seq.at(x)=='N'){
            lettercount[4]++;
        }


    }
  cout<<1<<" "<<lettercount[0]<<" "<<lettercount[1]<<" "<<lettercount[2]<<" "<<lettercount[3]<<" "<<lettercount[4]<<endl;
  delete[] lettercount;
    //deallocation

    if (k>l){
        cout<<"error"<<endl;
        return 0;
    }
}
