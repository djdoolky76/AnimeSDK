#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class CharacterCollisionType : ::System::Int32
	{
		Capsule = 0,
		Box = 1,
	};
}
