#pragma once
#include "unitysdk/unitysdk.h"

#define NKKMILCOAJF_CTOR_OFFSET UNITYSDK_OFFSET(0x111F0)
#define NKKMILCOAJF_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x21970)

	struct alignas(4) NKKMILCOAJF
	{
		::System::Int32 MBCACNKDMFG; // 0x10
		::System::Int32 ABNPHONMCEP; // 0x14
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NKKMILCOAJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKMILCOAJF_LDAMHBBILAD_OFFSET))(this);
		}

	};
