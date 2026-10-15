#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ChimeraDuelGameSessionState : ::System::Int32
	{
		Invalid = 0,
		Shop = 1,
		Battle = 2,
		Settle = 3,
	};
}
