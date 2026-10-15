#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class RPGAnimationEvent_InvokeType : ::System::Int32
	{
		RightAway = 1,
		EndFrame = 2,
		NextFrame = 3,
	};
}
