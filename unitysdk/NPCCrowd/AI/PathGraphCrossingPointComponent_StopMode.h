#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphCrossingPointComponent_StopMode_TypeDefinitionIndex = 90698;

	enum class PathGraphCrossingPointComponent_StopMode : ::System::Int32
	{
		OnStartNodeImmediately = 3,
		OnBothImmediately = 4,
		OnStopNodeImmediately = 2,
		OnStartNodeEnter = 1,
		OnStopNodeExit = 0,
	};
}
