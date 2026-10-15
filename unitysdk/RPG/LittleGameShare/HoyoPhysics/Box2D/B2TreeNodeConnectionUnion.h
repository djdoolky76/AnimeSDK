#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2TreeNodeConnectionUnion
	{
		::System::Int32 parent; // 0x10
		::System::Int32 next; // 0x10
	};
}
