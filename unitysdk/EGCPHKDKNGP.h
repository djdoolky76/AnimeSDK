#pragma once
#include "unitysdk/unitysdk.h"

#define EGCPHKDKNGP_CTOR_OFFSET UNITYSDK_OFFSET(0x650320)

inline static constexpr unsigned int EGCPHKDKNGP_TypeDefinitionIndex = 79804;

	struct alignas(4) EGCPHKDKNGP
	{
		::System::Int32 IPFBMKGLDDO; // 0x10
		::System::Int32 LAJLDCFILOE; // 0x14
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EGCPHKDKNGP_CTOR_OFFSET))(this, a1, a2);
		}

	};
