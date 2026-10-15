#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2ShapeExtent
	{
		::System::Single minExtent; // 0x10
		::System::Single maxExtent; // 0x14
	};
}
