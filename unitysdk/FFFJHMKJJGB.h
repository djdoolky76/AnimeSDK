#pragma once
#include "unitysdk/unitysdk.h"

#define FFFJHMKJJGB_CTOR_OFFSET UNITYSDK_OFFSET(0x157356E0)
#define FFFJHMKJJGB_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x15735440)
#define FFFJHMKJJGB_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x15735560)

	class FFFJHMKJJGB
	{
	public:
		::System::Single PDLCENKDNGO; // 0x28
		::System::Int32 GAGEBMIOEGN; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFJHMKJJGB_CTOR_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFJHMKJJGB_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFFJHMKJJGB_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
