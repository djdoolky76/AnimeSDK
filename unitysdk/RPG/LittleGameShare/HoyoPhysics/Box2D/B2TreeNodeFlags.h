#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	enum class B2TreeNodeFlags : ::System::Int32
	{
		b2_allocatedNode = 1,
		b2_enlargedNode = 2,
		b2_leafNode = 4,
	};
}
