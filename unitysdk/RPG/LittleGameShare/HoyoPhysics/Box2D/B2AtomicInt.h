#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2AtomicInt
	{
		::System::Int32 value; // 0x10
	};
}
