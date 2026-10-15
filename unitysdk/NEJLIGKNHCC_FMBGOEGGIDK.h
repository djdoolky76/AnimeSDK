#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOGBIBJLPJB.h"

#define NEJLIGKNHCC_FMBGOEGGIDK_CTOR_OFFSET UNITYSDK_OFFSET(0x34A0)

	struct alignas(4) NEJLIGKNHCC_FMBGOEGGIDK
	{
		::System::Int64 PKILDBNDGCN; // 0x10
		::JOGBIBJLPJB JBOGNIOIJFF; // 0x18
		::System::Int32 DNLPFANCCMG; // 0x20
		::System::Void _ctor(::System::Int64 a1, ::JOGBIBJLPJB a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::JOGBIBJLPJB, ::System::Int32))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_FMBGOEGGIDK_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
