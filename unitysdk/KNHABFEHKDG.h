#pragma once
#include "unitysdk/unitysdk.h"

#define KNHABFEHKDG_CTOR_OFFSET UNITYSDK_OFFSET(0x18FA6450)
#define KNHABFEHKDG_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x18FA5EF0)
#define KNHABFEHKDG_LBMGICALIOL_OFFSET UNITYSDK_OFFSET(0x18FA5EB0)
#define KNHABFEHKDG_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x18FA6170)

inline static constexpr unsigned int KNHABFEHKDG_TypeDefinitionIndex = 70652;

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
