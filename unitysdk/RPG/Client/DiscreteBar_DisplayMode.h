#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DiscreteBar_DisplayMode_TypeDefinitionIndex = 74604;

	enum class DiscreteBar_DisplayMode : ::System::Int32
	{
		AllNodesBelow = 0,
		SingleNodeCurrent = 1,
	};
}
