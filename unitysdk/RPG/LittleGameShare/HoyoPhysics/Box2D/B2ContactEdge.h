#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2ContactEdge
	{
		::System::Int32 bodyId; // 0x10
		::System::Int32 prevKey; // 0x14
		::System::Int32 nextKey; // 0x18
	};
}
