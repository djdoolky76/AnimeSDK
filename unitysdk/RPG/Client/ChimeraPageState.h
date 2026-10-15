#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ChimeraPageState : ::System::UInt32
	{
		None = 0,
		Entrance = 1,
		Goals = 2,
		NewMembers = 3,
		Arrangement = 4,
		Evaluation = 5,
	};
}
