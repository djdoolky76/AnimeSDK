#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Iterator_TerminationConditions_TypeDefinitionIndex = 29967;

	enum class Iterator_TerminationConditions : ::System::Int32
	{
		FirstSuccess = 1,
		None = 0,
		FirstFailure = 2,
	};
}
