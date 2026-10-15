#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2QUERYFILTER_CTOR_OFFSET UNITYSDK_OFFSET(0x10480)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2QueryFilter
	{
		::System::UInt64 categoryBits; // 0x10
		::System::UInt64 maskBits; // 0x18
		::System::Void _ctor(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2QUERYFILTER_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
