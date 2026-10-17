# Florist Ordering System

A console-based C++ application that lets customers order flower bouquets and lets the shop view daily sales statistics.

## Features
- Choose bouquet size (Small, Medium, Large)
- Choose flower type (Rose, Lily, Carnations, Daffodils, Gerbera, Chrysanthemum, Assorted)
- Choose flower color (White, Red, Pink, Yellow, Blue, Mixed)
- Automatic price calculation: (type price + color price) x size price
- Sales statistics: bouquets sold by size, type and color, plus total, minimum, maximum and average sales
- Daily limit of 10 orders
- AI greeting card: uses the open-weight Gemma 4 model via Ollama to write a personalised card message for each bouquet

## Concepts Used
Classes and objects, static members, arrays, loops, conditionals, input validation, recursion

## How to Run
Compile and run with g++:
Install Ollama first and run: ollama pull gemma4:e2b

    g++ "Florist Ordering System.cpp" -o florist
    ./florist

Note: the program uses `system("cls")` to clear the screen , so it works best on Windows.

## Author
Muhammad Hamza
