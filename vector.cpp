/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:17:14 by macbook           #+#    #+#             */
/*   Updated: 2023/10/22 02:38:20 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a program that initializes a vector of integers.
// Implement functions to perform the following operations:
    // Add an element to the end of the vector.
    // Retrieve an element from a specific index.
    // Remove an element from a specific index.
    // Find and remove a specific value from the vector (remove the first occurrence only).
    // Display the entire vector.
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include <exception>
#include <algorithm>


void add_element(std::vector<int> &vec, int el)
{
    vec.push_back(el);
}

void print_vec(std::vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << "Vec[" << i << "] = " << vec.at(i) << std::endl;    
    }
}

int get_element(std::vector<int> &vec, unsigned int ix)
{
    if (ix >= vec.size())
        throw std::runtime_error("Index out of bounds");
    return vec.at(ix);
}

void remove_element(std::vector<int> &vec, unsigned int ix)
{
    if (ix >= vec.size())
        throw std::runtime_error("Index out of bounds");
    vec.erase(vec.begin() + ix);
}

void remove_first_occurrence(std::vector<int> &vec, int element)
{
    std::vector<int>::iterator it = std::find(vec.begin(), vec.end(), element);
    if (it != vec.end())
        vec.erase(it);
    else
        throw std::runtime_error("Element not found in vector");
}

int main(void)
{
    std::vector<int> vec;
    add_element(vec, 10);
    add_element(vec, 20);
    add_element(vec, 30);
    add_element(vec, 40);
    add_element(vec, 50);
    // 
    try
    {
        int x = get_element(vec, 2);
        std::cout << "x = " << x << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "-----------------" << std::endl;
    // 
    try
    {
        remove_element(vec, 1);
        print_vec(vec);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "-----------------" << std::endl;
    // 
    try
    {
        remove_first_occurrence(vec, 30);
        print_vec(vec);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // 
    return 0;
}
