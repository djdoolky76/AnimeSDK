#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	enum class ReplicatedCondition : ::System::Byte
	{
		None = 0,
		InitialOnly = 1,
		OwnerOnly = 2,
		SkipOwner = 3,
		InitialOrOwner = 4,
	};
}
