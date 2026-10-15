#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class Effect_Transform_PauseReason : ::System::Int32
	{
		TimeRewindPause = 0,
		Floating = 1,
	};
}
