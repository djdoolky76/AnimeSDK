#pragma once
#include "unitysdk/unitysdk.h"

#define BHOMIGDKHEB_CTOR_OFFSET UNITYSDK_OFFSET(0x15D40)

	struct alignas(4) BHOMIGDKHEB
	{
		::System::Int32 GNNEFOIBAKH; // 0x10
		::System::Boolean GBDLCNEBHAP; // 0x14
		::System::Boolean FEPBDLMGNDP; // 0x15
		::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BHOMIGDKHEB_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
