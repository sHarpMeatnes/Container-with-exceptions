#pragma once
#include <algorithm> 
#include <cassert> 
#include <exception>
using namespace std;

class IntArray
{
private:
    int m_length{};
    int* m_data{};

public:
    IntArray();
    IntArray(int length);
    IntArray(IntArray& a);
    ~IntArray();
    IntArray& operator=(IntArray& a);
    int getLength();
    void erase();
    int& operator[](int index);
    void reallocate(int newLength);
    void resize(int newLength);
    void insertBefore(int value, int index);
    void remove(int index);
    void insertAtBeginning(int value);
    void insertAtEnd(int value);
};

class bad_lenght : public exception
{
public:
    virtual const char* what() const noexcept override { return "Bad lenght exception "; }
};

class bad_range : public exception
{
public:
    virtual const char* what() const noexcept override { return "Bad range exception "; }
};
