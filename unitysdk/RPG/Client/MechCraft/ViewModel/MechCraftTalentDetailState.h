#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft::ViewModel
{
	enum class MechCraftTalentDetailState : ::System::Int32
	{
		Default = 0,
		Locked = 1,
		Finished = 2,
	};
}
