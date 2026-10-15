#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2SensorHit
	{
		::System::Int32 sensorId; // 0x10
		::System::Int32 visitorId; // 0x14
	};
}
