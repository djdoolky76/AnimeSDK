#pragma once
#include "unitysdk/unitysdk.h"

#define ABIMIPAIIEH_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x3C36210)
#define ABIMIPAIIEH_DJJBNDDBKIH_OFFSET UNITYSDK_OFFSET(0x3C36230)

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
