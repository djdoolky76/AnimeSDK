#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AnimGroupTransitState : ::System::Byte
	{
		None = 0,
		In = 1,
		Out = 2,
	};
}
