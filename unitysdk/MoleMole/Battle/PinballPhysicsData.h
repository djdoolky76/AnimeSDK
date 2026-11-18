#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNBBGBPEIPI.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int PinballPhysicsData_TypeDefinitionIndex = 89790;

	struct alignas(4) PinballPhysicsData
	{
		::System::Single Mass; // 0x10
		::System::Single EjectSpeed; // 0x14
		::LNBBGBPEIPI CollisionMode; // 0x18
		::System::Single Restitution; // 0x1C
		::System::Single Friction; // 0x20
		::System::Single MaxSpeed; // 0x24
		::System::Single SurfaceDriveSpeed; // 0x28
	};
}
