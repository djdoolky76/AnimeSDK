#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2TreeStats
	{
		::System::Int32 nodeVisits; // 0x10
		::System::Int32 leafVisits; // 0x14
	};
}
