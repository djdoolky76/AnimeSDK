#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	enum class ChimeraDuelMainPuzzleStateType : ::System::Int32
	{
		None = 0,
		Entrance = 1,
		MasterSelect = 2,
		Shop = 3,
		Battle = 4,
		Settle = 5,
	};
}
