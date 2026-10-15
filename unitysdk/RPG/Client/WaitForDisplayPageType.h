#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class WaitForDisplayPageType : ::System::Int32
	{
		None = 0,
		NextRound = 1,
		Success = 2,
		Fail = 3,
		Quit = 4,
	};
}
