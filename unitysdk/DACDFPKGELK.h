#pragma once
#include "unitysdk/unitysdk.h"
class LEEEMFAEDLN;

#define DACDFPKGELK_CTOR_OFFSET UNITYSDK_OFFSET(0x94B0)
#define DACDFPKGELK_GET_MOTION_OFFSET UNITYSDK_OFFSET(0x1D30)

	struct alignas(8) DACDFPKGELK
	{
		::LEEEMFAEDLN* _Motion_k__BackingField; // 0x10
		::System::Void _ctor(::LEEEMFAEDLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEEEMFAEDLN*))((::PBYTE)hIl2Cpp + DACDFPKGELK_CTOR_OFFSET))(this, a1);
		}

		::LEEEMFAEDLN* get_Motion()
		{
			return ((::LEEEMFAEDLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACDFPKGELK_GET_MOTION_OFFSET))(this);
		}

	};
