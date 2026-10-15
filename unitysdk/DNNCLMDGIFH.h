#pragma once
#include "unitysdk/unitysdk.h"

#define DNNCLMDGIFH_CTOR_OFFSET UNITYSDK_OFFSET(0xFE60)

	struct alignas(4) DNNCLMDGIFH
	{
		::System::UInt32 ALKDKHHNMPA; // 0x10
		::System::UInt32 HJGJGABFLEK; // 0x14
		::System::UInt32 BFBMELGIHGL; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DNNCLMDGIFH_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
