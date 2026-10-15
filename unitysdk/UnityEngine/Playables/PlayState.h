#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Playables
{
	enum class PlayState : ::System::Int32
	{
		Paused = 0,
		Playing = 1,
		Delayed = 2,
	};
}
