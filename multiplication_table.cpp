/* Algorithm Challenge & Problem Solving
 * 1 - Prints the header of the multiplication table (1 to 10)
 * including column numbers and formatting separators.
 */

#include <iostream>
using namespace std;

void PrintTableHeader()
{
    cout << "\n\n\t\t\t Multiplication Table From 1 To 10\n\n";

    cout << "\t"; // Indentation before the horizontal numbers for better alignment

    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t"; // Print column numbers
    }

    cout << "\n------------------------------------------";
    cout << "--------------------------------------------\n";
}

/*
 * Returns a vertical column separator with spacing
 * adjusted based on the number width (1-digit vs 2-digit).
 */
string ColumnSeparator(int i)
{
    if (i < 10)
        return "   |"; // Extra spaces for aligning single-digit numbers
    else
        return "  |"; // Slightly fewer spaces for two-digit numbers
}

/*
 * Prints the full multiplication table (1 to 10)
 * using nested loops for rows and columns.
 */
void PrintMultiplicationTable()
{
    PrintTableHeader(); // Print the formatted header first

    for (int i = 1; i <= 10; i++) // Outer loop → table rows
    {
        cout << " " << i << ColumnSeparator(i) << '\t'; // Row label + visual separator

        for (int j = 1; j <= 10; j++) // Inner loop → table columns
        {
            cout << i * j << '\t'; // Print multiplication result
        }

        cout << endl; // Move to next row
    }
}

int main()
{
    PrintMultiplicationTable();
    return 0;
}
