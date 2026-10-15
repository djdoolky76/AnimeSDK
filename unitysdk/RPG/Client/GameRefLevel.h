#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class GameRefLevel : ::System::Int32
	{
		Advanced = 0,
		Newbie = 1,
		Expert = 2,
		All = 3,
	};
}
