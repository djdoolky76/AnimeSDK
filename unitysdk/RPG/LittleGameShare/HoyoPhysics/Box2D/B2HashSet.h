#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SetItem.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(8) B2HashSet
	{
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SetItem>* items; // 0x10
		::System::Int32 capacity; // 0x18
		::System::UInt32 count; // 0x1C
	};
}
