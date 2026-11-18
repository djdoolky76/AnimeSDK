#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAMHFBEPBED.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_PINBALLSUBSYSTEM_PINBALLCOLLISIONCAPABILITY_CANHIT_OFFSET UNITYSDK_OFFSET(0x6FBA90)

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_PinballCollisionCapability_TypeDefinitionIndex = 56748;

	struct alignas(4) PinballSubsystem_PinballCollisionCapability
	{
		::System::Boolean CanHitBall; // 0x10
		::System::Boolean CanHitTarget; // 0x11
		::System::Boolean CanHitWall; // 0x12
		::System::Boolean CanHitPaddle; // 0x13
		::System::Boolean CanHitArea; // 0x14

		::System::Boolean CanHit(::FAMHFBEPBED targetKind)
		{
			return ((::System::Boolean(*)(::PVOID, ::FAMHFBEPBED))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_PINBALLCOLLISIONCAPABILITY_CANHIT_OFFSET))(this, targetKind);
		}
	};
}
