#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphCrossingPointConfig_StopMode_TypeDefinitionIndex = 75605;

	enum class PathGraphCrossingPointConfig_StopMode : ::System::Int32
	{
		OnStopNodeExit = 0,
		OnStopNodeImmediately = 2,
		OnStartNodeImmediately = 3,
		OnStartNodeEnter = 1,
		OnBothImmediately = 4,
	};
}
