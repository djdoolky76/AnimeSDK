#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class AlleyOrderStatus : ::System::Int32
	{
		None = 0,
		OrderDoing = 1,
		OrderFinish = 2,
		OrderClose = 3,
	};
}
