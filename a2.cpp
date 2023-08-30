#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

const int MAX_ENTRIES = 100;

struct DataEntry {
    std::string year;
    std::string  inflationRate;
    std::string  interestRate;
};

int main() {
    std::ifstream inputFileStream;
    std::string inputLine;

    std::string year;
    cout << "Enter year: ";
    cin >> year;

    double amount;
    cout << "Enter amount: ";
    cin >> amount;
     


    if(stod(year)<2002){
        amount=amount/166;
    }

    double amt1=amount,amt2=amount;
    
   double finalamt=amount;
    inputFileStream.open("spain_data.csv");

    if (!inputFileStream.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1;
    } else {

        
    double inflationRate;
    double interestRate;
        std::cout << "File read:" << std::endl;
        int flag = 0;
        DataEntry dataEntries[MAX_ENTRIES]; // Array to store data entries
        int entryCount = 0;
        
        while (getline(inputFileStream, inputLine)) {
            if (entryCount >= MAX_ENTRIES) {
                std::cerr << "Array size exceeded." << std::endl;
                break;
            }

            std::istringstream lineStream(inputLine);
            std::string value;
            int column = 0;
            DataEntry entry;

            while (getline(lineStream, value, ',')) {
                if (column == 1) {
                    entry.year = value;
                  //  cout<<value;
                    if (year == value) {
                        flag = 1;
                    }
                } 
                else if (column == 2) {
                    if(flag==1){
                        
                    interestRate = stod(value);
                    //cout<<interestRate;
                    finalamt=finalamt*(1 +interestRate/100);
                    }
                    entry.interestRate = (value);
                } else if (column == 3) {
                    entry.inflationRate = (value);
                }
                column++;
            }

           // if (flag == 1) {
                dataEntries[entryCount++] = entry;
           // }
        }

        inputFileStream.close();
           cout<<finalamt;
        
        //double finalamt = amount;
        
        for (int i = 63; i >= 1; i--) {
            
            finalamt=finalamt*(1-stod(dataEntries[i].inflationRate)/100);
            if(dataEntries[i].year==year)
            {
                break;
            }
        }

        cout<<"Final amount after traversal:"<<finalamt;

           
        for (int i = 63; i >= 19; i--) {
            //cout<<dataEntries[i].year;
             
           amt1=amt1*(1+(stod(dataEntries[i].interestRate)-stod(dataEntries[i].inflationRate))/100);


        }
         
        
        for (int i = 18; i >= 1; i--) {
            //cout<<dataEntries[i].year;
             
           amt2=amt2*(1+(stod(dataEntries[i].interestRate)-stod(dataEntries[i].inflationRate))/100);


        }
         
      cout<<"tese";
      cout<<amt1<<"\n"<<amt2;

      if(amt1>amt2){
          cout<<"republican grew faster";
      }
      else if(amt1<amt2){
          cout<<"dictorial  grew faster";
      }
      else{
          cout<<"both grew at same rate";
      }


    }

    return 0;
}
