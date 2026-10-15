#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FollowState : ::System::Int32
	{
		Wait = 0,
		Follow = 1,
		Stopping = 2,
	};
}
