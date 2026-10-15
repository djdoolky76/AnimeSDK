#pragma once
#include "unitysdk/unitysdk.h"

#define NEJLIGKNHCC_LBAHDADIMDP_COMPARETO_OFFSET UNITYSDK_OFFSET(0x203C0)
#define NEJLIGKNHCC_LBAHDADIMDP_CTOR_OFFSET UNITYSDK_OFFSET(0x203B0)

	struct alignas(4) NEJLIGKNHCC_LBAHDADIMDP
	{
		::System::Int32 MBNLJEMMPNC; // 0x10
		::System::Int32 HCDEOKNIGKG; // 0x14
		::System::UInt64 NNINFPDDEBE; // 0x18
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_LBAHDADIMDP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		/*
		::System::Int32 CompareTo(::NEJLIGKNHCC_LBAHDADIMDP a1)
		{
			return ((::System::Int32(*)(::PVOID, ::NEJLIGKNHCC_LBAHDADIMDP))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_LBAHDADIMDP_COMPARETO_OFFSET))(this, a1);
		}
		*/

	};
