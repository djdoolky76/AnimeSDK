#pragma once
#include "unitysdk/unitysdk.h"

#define IMOBOOHNHAM_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x3C3B140)
#define IMOBOOHNHAM_DJJBNDDBKIH_OFFSET UNITYSDK_OFFSET(0x2FA4480)

inline static constexpr unsigned int IMOBOOHNHAM_TypeDefinitionIndex = 10816;

	struct alignas(4) IMOBOOHNHAM
	{
		::System::UInt64 BCOEGBEBNDO; // 0x10
		::System::Void DADCFBHGLOH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IMOBOOHNHAM_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::Boolean DJJBNDDBKIH(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IMOBOOHNHAM_DJJBNDDBKIH_OFFSET))(this, a1);
		}

	};
