//
// Created by raver119 on 14.10.2017.
//

#include "Scope.h"

namespace nd4j {
    namespace graph {
        template <typename T>
        Scope<T>::Scope(int id, const char *name) {
            _id = id;

            if (name != nullptr)
                _name = name;
        }

        template <typename T>
        Scope<T>::~Scope() {

        }

        template <typename T>
        void Scope<T>::push_back(Node<T> *node) {
            _nodes.emplace_back(node);
        }

        template <typename T>
        std::vector<Node<T> *>* Scope<T>::nodes() {
            return &_nodes;
        }

        template <typename T>
        int Scope<T>::size() {
            return (int) _nodes.size();
        }


        template class Scope<float>;
        template class Scope<float16>;
        template class Scope<double>;
    }
}

