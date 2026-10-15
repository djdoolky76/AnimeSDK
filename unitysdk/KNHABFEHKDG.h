#pragma once
#include "unitysdk/unitysdk.h"

#define KNHABFEHKDG_CTOR_OFFSET UNITYSDK_OFFSET(0xB584240)
#define KNHABFEHKDG_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0xB583CE0)
#define KNHABFEHKDG_LBMGICALIOL_OFFSET UNITYSDK_OFFSET(0xB583CA0)
#define KNHABFEHKDG_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB583F60)

inline static constexpr unsigned int KNHABFEHKDG_TypeDefinitionIndex = 68700;

	class KNHABFEHKDG
	{
	public:
		::System::Single PDLCENKDNGO; // 0x28
		::System::Int32 GAGEBMIOEGN; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHABFEHKDG_CTOR_OFFSET))(this);
		}

		::System::Void LBMGICALIOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHABFEHKDG_LBMGICALIOL_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHABFEHKDG_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KNHABFEHKDG_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
