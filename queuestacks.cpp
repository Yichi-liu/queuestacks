/* Alex Liu (Yi-Chi) */

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

class Simple_list{
    string name;
    public:
        virtual void push();
        virtual void pop();
    protected:
        int insert_end();
        int intsert_start();
        int remove();
};
void read_input(string filein, string fileout, vector<Simple_list*> &vector){
    string line;
    ifstream myfile(filein);
    ofstream output(fileout);
    if(myfile.is_open() && output.is_open()){
        while(getline(myfile,line) ){
            string name, command, type, value, stackqueue;
            stringstream stream;
            
            stream << line;

            output << "PROCESSING COMMAND: " << line << " \n";

            stream >> command >> name;
            
            if(command.compare("pop") == 0){ //Pop
            } else if(command.compare("push")){
                stream >> value;
            } else {
                stream >> stackqueue;
            }
        }
        myfile.close();
        output.close();
    }
}

int main(){
    string in, out;
    cout << "Enter the input file: ";
    cin >> in;
    cout << "Enter the output file: ";
    cin >> out;
    vector<Simple_list*> vector;
    read_input(in, out, vector);
}