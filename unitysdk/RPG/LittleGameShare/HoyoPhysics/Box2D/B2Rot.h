#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ROT_CTOR_OFFSET UNITYSDK_OFFSET(0xBA30)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	struct alignas(4) B2Rot
	{
		::System::Single c; // 0x10
		::System::Single s; // 0x14
		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ROT_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
