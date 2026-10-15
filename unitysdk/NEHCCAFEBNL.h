#pragma once
#include "unitysdk/unitysdk.h"

#define NEHCCAFEBNL_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x3C3D300)
#define NEHCCAFEBNL_DJJBNDDBKIH_OFFSET UNITYSDK_OFFSET(0x3C3D350)

	struct alignas(4) NEHCCAFEBNL
	{
		::System::UInt64 CHFFMMMGDDH; // 0x10
		::System::UInt64 MEBJJBJFMLI; // 0x18
		::System::UInt64 NHFCCMPFMNM; // 0x20
		::System::UInt64 AIJOAHLNILB; // 0x28
		::System::Void DADCFBHGLOH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEHCCAFEBNL_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::Boolean DJJBNDDBKIH(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEHCCAFEBNL_DJJBNDDBKIH_OFFSET))(this, a1);
		}

	};
