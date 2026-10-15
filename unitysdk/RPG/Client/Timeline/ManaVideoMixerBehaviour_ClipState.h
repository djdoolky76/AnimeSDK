#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Timeline
{
	enum class ManaVideoMixerBehaviour_ClipState : ::System::Int32
	{
		Idle = 0,
		Prepare = 1,
		Play = 2,
		Seek = 3,
	};
}
