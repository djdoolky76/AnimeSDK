#pragma once
#include "unitysdk/unitysdk.h"

#define TMPRO_KERNINGPAIRKEY_CTOR_OFFSET UNITYSDK_OFFSET(0x3C675D0)

namespace TMPro
{
	struct alignas(4) KerningPairKey
	{
		::System::UInt32 ascii_Left; // 0x10
		::System::UInt32 ascii_Right; // 0x14
		::System::UInt32 key; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIRKEY_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
