#pragma once
#include "unitysdk/unitysdk.h"

#define ABIMIPAIIEH_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x3E851A0)
#define ABIMIPAIIEH_DJJBNDDBKIH_OFFSET UNITYSDK_OFFSET(0x3E851C0)

inline static constexpr unsigned int ABIMIPAIIEH_TypeDefinitionIndex = 10833;

	struct alignas(4) ABIMIPAIIEH
	{
		::System::UInt64 MLOKKFFLEFE; // 0x10
		::System::UInt64 IONDJKMAIPM; // 0x18
		::System::Void DADCFBHGLOH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABIMIPAIIEH_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::Boolean DJJBNDDBKIH(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABIMIPAIIEH_DJJBNDDBKIH_OFFSET))(this, a1);
		}

	};
