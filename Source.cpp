#include <iostream>
#include "container.h"

int main()
{
    while(true)
    {
        int size;
        std::cout << "enter container size - to exit -1" << '\n';
        cin >> size;
        IntArray array(size);
        try
        {

            for (int i = 0; i < array.getLength(); ++i)
                array[i] = i + 1;

            array.resize(8);
            //array.insertBefore(20, 10);//bad range
            array.remove(3);
            array.insertAtEnd(30);
            array.insertAtBeginning(40);
            {
                IntArray b{ array };
                b = array;
                b = b;
                array = array;
            }

            for (int i{ 0 }; i < array.getLength(); ++i)
                std::cout << array[i] << ' ';

            std::cout << '\n';
        }
        catch (exception& e)
        {
            cout << e.what() << '\n';
        }

        if (size == -1) break;
    }
    return 0;
}