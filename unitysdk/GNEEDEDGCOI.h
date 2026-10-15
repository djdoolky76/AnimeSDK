#pragma once
#include "unitysdk/unitysdk.h"

#define GNEEDEDGCOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED10)

inline static constexpr unsigned int GNEEDEDGCOI_TypeDefinitionIndex = 82055;

	struct alignas(4) GNEEDEDGCOI
	{
		::System::UInt32 IDBDBICPBBG; // 0x10
		::System::Boolean DHHGLHOOCMA; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + GNEEDEDGCOI_CTOR_OFFSET))(this, a1, a2);
		}

	};
