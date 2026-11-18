#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Parallel_ParallelPolicy_TypeDefinitionIndex = 30689;

	enum class Parallel_ParallelPolicy : ::System::Int32
	{
		FirstSuccess = 1,
		FirstSuccessOrFailure = 2,
		FirstFailure = 0,
	};
}
