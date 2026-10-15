#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Array_1.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(8) B2SensorOverlaps
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::System::Int32> overlaps; // 0x10
	};
}
