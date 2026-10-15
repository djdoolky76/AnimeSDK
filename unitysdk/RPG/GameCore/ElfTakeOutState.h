#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ElfTakeOutState : ::System::Int32
	{
		Unknown = 0,
		Order = 1,
		WaitTakeOut = 2,
		WaitDelivery = 4,
		DeliverTakeOut = 3,
		Waiting = 4,
	};
}
