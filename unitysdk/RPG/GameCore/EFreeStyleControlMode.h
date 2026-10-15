#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EFreeStyleControlMode : ::System::Int32
	{
		Default = 0,
		Interaction = 1,
		InteractionGraph = 2,
		Mocap = 3,
	};
}
