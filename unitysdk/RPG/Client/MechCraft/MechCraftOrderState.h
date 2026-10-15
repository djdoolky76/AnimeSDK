#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft
{
	enum class MechCraftOrderState : ::System::Int32
	{
		Locked = 0,
		Unlocked = 1,
		Finished = 2,
	};
}
