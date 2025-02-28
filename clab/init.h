/**
 * init.h
 * Core definitions and constants for the spreadsheet application
 * Defines maximum dimensions and error values for the spreadsheet
 */

#ifndef __SHEET_SIZE__
#define __SHEET_SIZE__  

// Maximum number of rows in the spreadsheet (1-999)
#define MAXROW 999

// Maximum number of columns in the spreadsheet (A-ZZZ, converts to 18278)
#define MAXCOL 18278

// Maximum width of each cell for display purposes
#define MAXCOLWIDTH 5

// Special value to represent calculation errors or invalid operations
#define ERROR_VALUE -999999

#endif

#ifndef __SHEET__
#define __SHEET__  

// Global 2D array representing the spreadsheet
// Each cell contains an integer value
extern int** sheet;

#endif
