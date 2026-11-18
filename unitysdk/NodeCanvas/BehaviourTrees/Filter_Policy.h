#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Filter_Policy_TypeDefinitionIndex = 30267;

	enum class Filter_Policy : ::System::Int32
	{
		SuccessOnly = 1,
		FailureOnly = 2,
		SuccessOrFailure = 0,
	};
}
