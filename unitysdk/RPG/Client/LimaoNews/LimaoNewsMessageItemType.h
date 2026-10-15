#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LimaoNews
{
	enum class LimaoNewsMessageItemType : ::System::Int32
	{
		Normal = 0,
		System = 1,
		Image = 2,
		Performance = 3,
		LastLine = 4,
	};
}
