#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EntityPositionCheckMode : ::System::Int32
	{
		None = 0,
		GroundCollider = 1,
		NavMesh = 2,
	};
}
