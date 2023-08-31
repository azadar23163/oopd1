# OOPD Assignment-1
## Question 1
Program is required to :-
(i) Read the interest rate and the inflation rate.
(ii) Take input of the amount of investment and the year in which it was invested from the user.
(iii) Compute and print how much is the money actually received.
(iv) Compute and print how much value the money obtained after adding interest had in the year it was invested.
using file india_data.csv
## Answer 1
(i) Code is mentioned.
(ii) Code is mentioned.
(iii)  finalamt=finalamt*(1 +interestRate/100)
(iv)  finalamt=finalamt*(1-stod(dataEntries[i].inflationRate)/100)
## Question 2
Program is required to :-
(i) convert all investments automatically to new currency i.e; Peseta in the beginning of 2002 at the rate of 1 euro = 166 Peseta.
(ii) Read the interest rate and the inflation rate.
(iii) Take input of the amount of investment and the year in which it was invested from the user.
(iv) Compute and print how much is the money actually received.
(v) Compute and print how much value the money obtained after adding interest had in the year it was invested.
(vi) Check if the value of money grew faster during the dictatorial era than the republican era.
using file spain_data.csv

## Answer 2
(iv) finalamt=finalamt*(1 +interestRate/100)
(v) finalamt=finalamt*(1-stod(dataEntries[i].inflationRate)/100)
(vi)  amt1=amt1*(1+(stod(dataEntries[i].interestRate)-stod(dataEntries[i].inflationRate))/100);













