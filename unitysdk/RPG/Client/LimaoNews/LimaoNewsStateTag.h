#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LimaoNews
{
	enum class LimaoNewsStateTag : ::System::Int32
	{
		None = 0,
		UnSearch = 1,
		InProgress = 2,
		Finish = 3,
		CanSubmit = 4,
	};
}
