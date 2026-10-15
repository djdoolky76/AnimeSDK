#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class LoopGenerateBehavior_PhaseType : ::System::Int32
	{
		Startup = 0,
		Loop = 1,
		Stop = 2,
	};
}
