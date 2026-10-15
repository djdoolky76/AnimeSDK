#pragma once
#include "unitysdk/unitysdk.h"

#define CCBBMJPLKME_CTOR_OFFSET UNITYSDK_OFFSET(0xBA30)

	struct alignas(4) CCBBMJPLKME
	{
		::System::Single PKHMIPPMAHJ; // 0x10
		::System::Single KCIBELMCEFF; // 0x14
		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CCBBMJPLKME_CTOR_OFFSET))(this, a1, a2);
		}

	};
