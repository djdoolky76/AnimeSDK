#pragma once
#include "unitysdk/unitysdk.h"

#define FFFJHMKJJGB_CTOR_OFFSET UNITYSDK_OFFSET(0x16650F10)
#define FFFJHMKJJGB_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x16650C70)
#define FFFJHMKJJGB_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x16650D90)

inline static constexpr unsigned int FFFJHMKJJGB_TypeDefinitionIndex = 70648;

	class FFFJHMKJJGB
	{
	public:
		::System::Int32 GAGEBMIOEGN; // 0x28
		::System::Single PDLCENKDNGO; // 0x2C
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
