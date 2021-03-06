//
// Created by raver119 on 16.10.2017.
//

#ifndef LIBND4J_LEGACYREDUCEOP_H
#define LIBND4J_LEGACYREDUCEOP_H

#include <ops/declarable/LegacyOp.h>

namespace nd4j {
    namespace ops {
        template <typename T>
        class LegacyReduceOp : public LegacyOp<T> {
        protected:
            Nd4jStatus validateAndExecute(Block<T>& block);
        public:
            LegacyReduceOp();
            LegacyReduceOp(int opNum);

            ShapeList* calculateOutputShape(ShapeList* inputShape, nd4j::graph::Block<T>& block);
        };
    }
}


#endif //LIBND4J_LEGACYREDUCEOP_H
