//
// @author raver119@gmail.com
//

#ifndef LIBND4J_NDARRAYFACTORY_H
#define LIBND4J_NDARRAYFACTORY_H

#include "NDArray.h"
#include <graph/ArrayList.h>

namespace nd4j {
    template<typename T>
    class NDArrayFactory {
    public:

        static NDArray<T>* createUninitialized(NDArray<T>* other);

        static ArrayList<T>* multipleTensorsAlongDimension(NDArray<T>* ndArray, std::vector<int> &indices, std::vector<int> &dimensions);

        static ArrayList<T>* allTensorsAlongDimension(NDArray<T>* ndArray, std::vector<int> &dimensions);

        static ArrayList<T>* allExamples(NDArray<T>* ndArray);

        static ArrayList<T>* allTensorsAlongDimension(NDArray<T>* ndArray, std::initializer_list<int> dimensions);

        static NDArray<T>* tile(NDArray<T> *original, std::vector<int>& dimensions);

        static NDArray<T>* repeat(NDArray<T> *original, std::vector<int>& repeats);

        static nd4j::NDArray<T>* mmulHelper(nd4j::NDArray<T>* A, nd4j::NDArray<T>* B, nd4j::NDArray<T>* C = nullptr, T alpha = 1.0f, T beta = 0.0f);

        static nd4j::NDArray<T>* tensorDot(const nd4j::NDArray<T>* A, const nd4j::NDArray<T>* B, const std::initializer_list<int> axesA, const std::initializer_list<int> axesB = {});

        static nd4j::NDArray<T>* tensorDot(const nd4j::NDArray<T>* A, const nd4j::NDArray<T>* B, std::vector<int>& axesA, std::vector<int>& axesB);

        static void tensorDot(const nd4j::NDArray<T>* a, const nd4j::NDArray<T>* b, nd4j::NDArray<T>* c, std::vector<int>& axesA, std::vector<int>& axesB);

        static NDArray<T>* linspace(T from, T to, Nd4jIndex numElements);
        
        static void linspace(T from, NDArray<T>& arr);


        static NDArray<T>* scalar(T value);

        static NDArray<T>* valueOf(std::initializer_list<int> shape, T value, char order = 'c');
    };
}


#endif //LIBND4J_NDARRAYFACTORY_H
