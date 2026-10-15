#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AdvCharacterRotationState : ::System::Int32
	{
		None = 0,
		Rotation = 1,
		BlendOut = 2,
	};
}
