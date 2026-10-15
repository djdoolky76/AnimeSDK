#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class InstanceArrayV2AnimationTimeMode : ::System::Int32
	{
		Default = 0,
		AutoPlay = 1,
		FollowMonoEffectTime = 2,
	};
}
