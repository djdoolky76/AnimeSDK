#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class CakeCatchSlotStatus : ::System::Int32
	{
		Invalid = 0,
		NoCat = 1,
		CanConfirm = 2,
		CanCatch = 3,
	};
}
