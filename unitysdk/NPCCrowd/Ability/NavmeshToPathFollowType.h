#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NavmeshToPathFollowType_TypeDefinitionIndex = 53662;

	enum class NavmeshToPathFollowType : ::System::Int32
	{
		AlreadyRes = 3,
		IgnoreObstacle = 1,
		Default = 0,
		CalcObstacle = 2,
	};
}
