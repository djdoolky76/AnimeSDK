#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class PhaseContextType : ::System::Int32
	{
		Empty = 0,
		Login = 1,
		Game = 2,
		LocalGame = 3,
	};
}
