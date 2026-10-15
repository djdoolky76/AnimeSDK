#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ColliderType : ::System::Int32
	{
		Unknown = 0,
		Box = 1,
		Sphere = 2,
		Capsule = 3,
	};
}
