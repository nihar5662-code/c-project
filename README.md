# 🔧 Unit Converter in C

A simple, interactive **Unit Converter** written in **C** that helps
users convert between different units of **Length**, **Temperature**,
and **Weight**. This program is menu-driven, easy to navigate, and ideal
for beginners learning C programming fundamentals.

------------------------------------------------------------------------

## 📌 Features

-   🧭 **Length Conversion**
    -   Meters ↔ Kilometers
    -   Meters ↔ Centimeters
-   🌡️ **Temperature Conversion**
    -   Celsius ↔ Fahrenheit
-   ⚖️ **Weight Conversion**
    -   Kilograms ↔ Grams
    -   Kilograms ↔ Pounds
-   🔁 **Continuous Menu Loop** -- converts multiple values until the
    user chooses to exit.
-   🧼 Clear, structured, beginner-friendly code.

------------------------------------------------------------------------

## 🧠 How the Program Works

1.  The program displays a menu with three main categories:
    -   Length Converter
    -   Temperature Converter
    -   Weight Converter
    -   Exit
2.  The user selects one category.
3.  The program displays options related to the chosen converter.
4.  The user enters a numeric value.
5.  A conversion formula is applied.
6.  The output is displayed with precise formatting.
7.  The menu repeats until the user chooses **Exit**.

------------------------------------------------------------------------

## 🔢 Conversion Formulas Used

### **Length**

-   **Meters → Kilometers**: `value / 1000`
-   **Kilometers → Meters**: `value * 1000`
-   **Meters → Centimeters**: `value * 100`
-   **Centimeters → Meters**: `value / 100`

### **Temperature**

-   **Celsius → Fahrenheit**: `(value * 9 / 5) + 32`
-   **Fahrenheit → Celsius**: `(value - 32) * 5 / 9`

### **Weight**

-   **Kilograms → Grams**: `value * 1000`
-   **Grams → Kilograms**: `value / 1000`
-   **Kilograms → Pounds**: `value * 2.20462`
-   **Pounds → Kilograms**: `value / 2.20462`

------------------------------------------------------------------------

## 💻 Sample Output

    ==============================
            UNIT CONVERTER
    ==============================
    1. Length Converter
    2. Temperature Converter
    3. Weight Converter
    4. Exit

    Enter your choice: 1

    --- LENGTH CONVERTER ---
    1. Meters to Kilometers
    2. Kilometers to Meters
    3. Meters to Centimeters
    4. Centimeters to Meters

    Enter option: 1
    Enter value: 1500
    1500.00 meters = 1.50 kilometers

------------------------------------------------------------------------

## ⚙️ How to Compile & Run

### **Compile the Program**

``` bash
gcc unit_converter.c -o unit_converter
```

### **Run the Program**

``` bash
./unit_converter
```

------------------------------------------------------------------------

## 🚀 Possible Improvements

-   Add support for:
    -   Time conversion
    -   Speed conversion
    -   Area & volume conversion
-   Implement input validation
-   Add color-coded terminal UI
-   Store previous conversions in a file
-   Use functions with return values instead of void for cleaner design

------------------------------------------------------------------------

## 🎯 Conclusion

This unit converter project is an excellent starting point for C
beginners. It covers: - Functions - Loops - Switch cases - Input/Output

You can expand it into a full scientific converter by adding more units
and improving the interface.

If you want, I can provide a **flowchart**, **documentation**, or a
**PDF** version of this README!
 ## output
 
