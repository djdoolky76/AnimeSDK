#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft::ViewModel
{
	enum class MechCraftTalentPointState : ::System::Int32
	{
		Default = 0,
		Ready = 1,
		Activated = 2,
		Locked = 3,
	};
}
