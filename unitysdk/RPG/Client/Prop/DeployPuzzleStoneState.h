#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	enum class DeployPuzzleStoneState : ::System::Int32
	{
		Invalid = 0,
		AttachedToStone = 1,
		HoldingByPlayer = 2,
	};
}
