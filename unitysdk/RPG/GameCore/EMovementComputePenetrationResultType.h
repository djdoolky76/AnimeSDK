#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EMovementComputePenetrationResultType : ::System::Int32
	{
		None = 0,
		Scene = 1,
		Other = 2,
		SceneAndOther = 3,
	};
}
