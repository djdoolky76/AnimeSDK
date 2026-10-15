#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	enum class CableLightState : ::System::Int32
	{
		UnConnect = 0,
		ActiveIn = 1,
		ActiveOut = 2,
	};
}
