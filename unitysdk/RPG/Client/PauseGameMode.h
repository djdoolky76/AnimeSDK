#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class PauseGameMode : ::System::Int32
	{
		Inherit = 0,
		Resume = 1,
		Pause = 2,
	};
}
