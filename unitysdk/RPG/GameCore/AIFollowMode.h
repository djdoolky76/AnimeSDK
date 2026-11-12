#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIFollowMode_TypeDefinitionIndex = 25076;

	enum class AIFollowMode : ::System::Int32
	{
		Default = 0,
		AdvancedFollow = 1,
	};
}
