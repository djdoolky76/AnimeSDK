#pragma once
#include "unitysdk/unitysdk.h"

#define HCCEELDOMFB_ELGDHEKNKLH_AHMCGDLMMLM_OFFSET UNITYSDK_OFFSET(0x3C4F790)
#define HCCEELDOMFB_ELGDHEKNKLH_CTOR_OFFSET UNITYSDK_OFFSET(0x14160)
#define HCCEELDOMFB_ELGDHEKNKLH_DJJJHALMDGG_OFFSET UNITYSDK_OFFSET(0x1DDAD930)

	struct alignas(4) HCCEELDOMFB_ELGDHEKNKLH
	{
		::System::UInt64 EGDKNEPEHBP; // 0x10
		::System::UInt32 FJCAKOIDONG; // 0x18
		// static const ::System::Object JJCMPGOKNFE; // 0x0
		// static const ::System::Object PLAPBEIPBIC; // 0x0
		// static const ::System::Object FBGFGCOEKII; // 0x0
		::System::Void _ctor(::System::UInt64 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + HCCEELDOMFB_ELGDHEKNKLH_CTOR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Byte>* AHMCGDLMMLM()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCEELDOMFB_ELGDHEKNKLH_AHMCGDLMMLM_OFFSET))(this);
		}

		/*
		static ::System::Boolean DJJJHALMDGG(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::HCCEELDOMFB_ELGDHEKNKLH a4)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::HCCEELDOMFB_ELGDHEKNKLH))((::PBYTE)hIl2Cpp + HCCEELDOMFB_ELGDHEKNKLH_DJJJHALMDGG_OFFSET))(a1, a2, a3, a4);
		}
		*/

	};
