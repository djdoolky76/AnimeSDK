#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int CrowdConditionLogic_TypeDefinitionIndex = 64808;

	enum class CrowdConditionLogic : ::System::Int32
	{
		Or = 1,
		And = 0,
	};
}
