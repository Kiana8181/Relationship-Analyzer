# Reflexive Relationships in C++

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
- [Contributing](#contributing)
- [License](#license)

## Overview
The program evaluates different types of reflexive relationships on a predefined set \( X \) with elements:
\[ X = \{ \langle 1,1 \rangle, \langle 1,2 \rangle, \langle 1,3 \rangle, \langle 2,1 \rangle, \langle 2,2 \rangle, \langle 2,3 \rangle, \langle 3,1 \rangle, \langle 3,2 \rangle, \langle 3,3 \rangle \} \]

It generates all subsets of \( X \) using binary numbers, where each bit represents the presence (1) or absence (0) of an element in the subset.

## Setup
To compile and run the program, you need a C++ compiler installed on your system.

1. **Clone the repository:**
   ```bash
   git clone <repository-url>
   cd <repository-directory>
