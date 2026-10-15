#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Playables
{
	enum class DirectorUpdateMode : ::System::Int32
	{
		DSPClock = 0,
		GameTime = 1,
		UnscaledGameTime = 2,
		Manual = 3,
	};
}
