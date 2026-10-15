#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FiveDimLightningStateType : ::System::Int32
	{
		None = 0,
		Wait = 1,
		Prepare = 2,
		Attack = 3,
	};
}
