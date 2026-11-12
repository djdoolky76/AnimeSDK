#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::RoadGenerator
{
	inline static constexpr unsigned int FollowRoadMovement_EndBehavior_TypeDefinitionIndex = 49920;

	enum class FollowRoadMovement_EndBehavior : ::System::Int32
	{
		Loop = 0,
		PingPong = 1,
		Stop = 2,
	};
}
