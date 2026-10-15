#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class BindTimeRewindMultiControlType : ::System::Int32
	{
		None = 0,
		FoundationAndBall = 1,
		DestructibleBridge = 2,
		ContainerAndSeed = 3,
		PerformanceSplitObject = 4,
	};
}
