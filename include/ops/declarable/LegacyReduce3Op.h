//
// Created by raver119 on 17.10.2017.
//

#ifndef LIBND4J_LEGACYREDUCE3OP_H
#define LIBND4J_LEGACYREDUCE3OP_H

#include <ops/declarable/LegacyOp.h>

namespace nd4j {
    namespace ops {
        /**
        *   This class provides wrapper for Reduce3 operations (i.e. dot, cosineDistance etc)
        */
        template <typename T>
        class LegacyReduce3Op : public LegacyOp<T> {
        protected:
            Nd4jStatus validateAndExecute(Block<T>& block);
        public:
            LegacyReduce3Op();
            LegacyReduce3Op(int opNum);

            ShapeList* calculateOutputShape(ShapeList* inputShape, nd4j::graph::Block<T>& block);
        };
    }
}


#endif //LIBND4J_LEGACYREDUCE3OP_H
