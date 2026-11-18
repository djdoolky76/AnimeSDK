#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Guard_GuardMode_TypeDefinitionIndex = 29268;

	enum class Guard_GuardMode : ::System::Int32
	{
		ReturnFailure = 0,
		WaitUntilReleased = 1,
	};
}
