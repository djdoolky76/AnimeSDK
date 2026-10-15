#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class WolfBroGunPlayTarget_Boss; }

#define AMPIHLPCNLD_CTOR_OFFSET UNITYSDK_OFFSET(0x155832E0)
#define AMPIHLPCNLD_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x155830F0)
#define AMPIHLPCNLD_IDGNPDMICLA_OFFSET UNITYSDK_OFFSET(0x15583290)
#define AMPIHLPCNLD_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x155831B0)

inline static constexpr unsigned int AMPIHLPCNLD_TypeDefinitionIndex = 68702;

	class AMPIHLPCNLD
	{
	public:
		::RPG::Client::WolfBroGunPlayTarget_Boss* MAGMDJLLGMI; // 0x28
		::System::Single HBANLBGKNKP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPIHLPCNLD_CTOR_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPIHLPCNLD_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void IDGNPDMICLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPIHLPCNLD_IDGNPDMICLA_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMPIHLPCNLD_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
