#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOFTNESS_CTOR_OFFSET UNITYSDK_OFFSET(0x14D60)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2Softness
	{
		::System::Single biasRate; // 0x10
		::System::Single massScale; // 0x14
		::System::Single impulseScale; // 0x18
		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOFTNESS_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
}
