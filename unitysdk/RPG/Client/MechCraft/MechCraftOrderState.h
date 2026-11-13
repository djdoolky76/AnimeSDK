#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft
{
	inline static constexpr unsigned int MechCraftOrderState_TypeDefinitionIndex = 42633;

	enum class MechCraftOrderState : ::System::Int32
	{
		Locked = 0,
		Unlocked = 1,
		Finished = 2,
	};
}
