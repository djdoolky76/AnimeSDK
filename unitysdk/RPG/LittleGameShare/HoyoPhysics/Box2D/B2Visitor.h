#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2Visitor
	{
		::System::Int32 shapeId; // 0x10
		::System::UInt16 generation; // 0x14
	};
}
