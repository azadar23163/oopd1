# OOPD Assignment-1
# How to Compile, Debug, and Run the Program

To compile, debug, and run the program, follow these steps:

1. **Compilation:**

   - Run the following command to compile the program:
     ```
     make all
     ```

2. **Debugging:**

     ```
     make debug
     ```
   - This will generate a binary executable for debugging.

3. **Optimized Compilation:**

     ```
     make optimized
     ```
   - This will generate an optimized binary executable.

4. **Running the Program:**

   After successful compilation:

   - For the debug version, run:
     ```
     ./debug_binary
     ```

   - For the optimized version, run:
     ```
     ./optimized_binary
     ```
---


## Question 1

### Program Requirements:

- Read the interest rate and the inflation rate.
- Take input of the amount of investment and the year in which it was invested from the user.
- Compute and print the amount of money actually received.
- Compute and print the value of the money obtained after adding interest in the year it was invested.
- Use the data from the file "india_data.csv".

### Answer 1:

- Code for reading interest rate and inflation rate is provided.
- Code for taking investment amount and year as input is provided.
- Calculation for the amount of money received: `finalamt = finalamt * (1 + interestRate / 100)`.
- Calculation for the value of money after adding interest and accounting for inflation: `finalamt = finalamt * (1 - stod(dataEntries[i].inflationRate) / 100)`.

## Question 2

### Program Requirements:

- Convert all investments to Peseta currency at the rate of 1 euro = 166 Peseta in the beginning of 2002.
- Read the interest rate and the inflation rate.
- Take input of the amount of investment and the year in which it was invested from the user.
- Compute and print the amount of money actually received.
- Compute and print the value of the money obtained after adding interest in the year it was invested.
- Check if the value of money grew faster during the dictatorial era than the republican era.
- Use the data from the file "spain_data.csv".

### Answer 2:

- Conversion of investments to Peseta currency in 2002: 1 euro = 166 Peseta.
- Code for reading interest rate and inflation rate is provided.
- Code for taking investment amount and year as input is provided.
- Calculation for the amount of money received: `finalamt = finalamt * (1 + interestRate / 100)`.
- Calculation for the value of money after adding interest and accounting for inflation: `finalamt = finalamt * (1 - stod(dataEntries[i].inflationRate) / 100)`.
- Calculation to check the growth rate of money during dictatorial era and republican era: `amt1 = amt1 * (1 + (stod(dataEntries[i].interestRate) - stod(dataEntries[i].inflationRate)) / 100)`.

