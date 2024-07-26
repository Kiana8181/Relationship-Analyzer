# Relationship Analyzer in C++

This project demonstrates how to determine and display different types of relationships (reflexive, symmetric, transitive, equivalence, antisymmetric, irreflexive, partial order, and total order) using a C++ program. The relationships are evaluated on a set \( X \) which consists of pairs of integers. The power set of \( X \) is evaluated using bit patterns to generate all possible subsets.

## Table of Contents
- [Overview](#overview)
- [Setup](#setup)
- [Usage](#usage)
- [Functions](#functions)
- [Details of Each Relationship](#details-of-each-relationship)
  - [Reflexive](#reflexive)
  - [Symmetric](#symmetric)
  - [Transitive](#transitive)
  - [Equivalence](#equivalence)
  - [Antisymmetric](#antisymmetric)
  - [Irreflexive](#irreflexive)
  - [Partial Order](#partial-order)
  - [Total Order](#total-order)

## Overview
The program evaluates different types of reflexive relationships on a predefined set \( X \) with elements:
\[ X = \{ \langle 1,1 \rangle, \langle 1,2 \rangle, \langle 1,3 \rangle, \langle 2,1 \rangle, \langle 2,2 \rangle, \langle 2,3 \rangle, \langle 3,1 \rangle, \langle 3,2 \rangle, \langle 3,3 \rangle \} \]

It generates all subsets of \( X \) using binary numbers, where each bit represents the presence (1) or absence (0) of an element in the subset.

## Setup
To compile and run the program, you need a C++ compiler installed on your system.

1. **Clone the repository:**
   ```bash
   git clone https://github.com/Kiana8181/Relationship-Analyzer.git
   
2. Compile the program

3. Run the program

## Usage
When you run the program, it will prompt you to enter a number between 1 and 8 to choose which relationship you want to evaluate:
- 1: Reflexive
- 2: Symmetric
- 3: Transitive
- 4: Equivalence
- 5: Antisymmetric
- 6: Irreflexive
- 7: Partial Order
- 8: Total Order

The program will then display the subsets that satisfy the chosen relationship.

## Functions
The program contains the following main functions:
- `reflexive(int x[9][2])`
- `symmetric(int x[9][2])`
- `transitive(int x[9][2])`
- `equivalence(int x[9][2])`
- `antisymmetric(int x[9][2])`
- `irreflexive(int x[9][2])`
- `partial_order(int x[9][2])`
- `total_order(int x[9][2])`
- `mabna(int x, int* mabna2)` - Converts a decimal number to its binary representation

## Details of Each Relationship

### Reflexive
A relation \( R \) on a set \( X \) is reflexive if every element is related to itself. In the binary representation, if the bits for \( \langle 1,1 \rangle \), \( \langle 2,2 \rangle \), and \( \langle 3,3 \rangle \) are all 1, the subset is reflexive.

### Symmetric
A relation \( R \) on a set \( X \) is symmetric if for every \( \langle a,b \rangle \in R \), \( \langle b,a \rangle \in R \) as well. The function checks if for every pair, its reverse is also in the subset.

### Transitive
A relation \( R \) on a set \( X \) is transitive if whenever \( \langle a,b \rangle \) and \( \langle b,c \rangle \) are in \( R \), then \( \langle a,c \rangle \) is also in \( R \).

### Equivalence
A relation \( R \) is an equivalence relation if it is reflexive, symmetric, and transitive. The function combines the checks of reflexive, symmetric, and transitive to determine equivalence.

### Antisymmetric
A relation \( R \) on a set \( X \) is antisymmetric if for every \( \langle a,b \rangle \) and \( \langle b,a \rangle \in R \), \( a = b \). The function checks that if \( \langle a,b \rangle \) is in the subset, \( \langle b,a \rangle \) is not, unless \( a = b \).

### Irreflexive
A relation \( R \) on a set \( X \) is irreflexive if no element is related to itself. The function ensures that \( \langle 1,1 \rangle \), \( \langle 2,2 \rangle \), and \( \langle 3,3 \rangle \) are not in the subset.

### Partial Order
A relation \( R \) is a partial order if it is reflexive, antisymmetric, and transitive. The function combines these properties to determine if the subset is a partial order.

### Total Order
A relation \( R \) is a total order if it is a partial order and any two elements are comparable. The function ensures that for any \( a \) and \( b \), either \( \langle a,b \rangle \in R \) or \( \langle b,a \rangle \in R \).

