#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FollowVisibilityType_TypeDefinitionIndex = 72032;

	enum class FollowVisibilityType : ::System::Int32
	{
		Unkown = 0,
		MainPageShow = 1,
		SpecialVisonIsOn = 2,
	};
}
