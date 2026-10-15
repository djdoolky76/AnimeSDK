#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::RelicSmartSuit
{
	enum class PinOperationSourceType : ::System::Int32
	{
		None = 0,
		Compare = 1,
		MoreChoice = 2,
	};
}
