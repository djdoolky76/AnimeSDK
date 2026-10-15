#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DEEJKBIMHAA;

#define FJLAKILIMEN_LMIEIPAKDGC_OFFSET UNITYSDK_OFFSET(0x2E77000)
#define FJLAKILIMEN_PAKIJFOGOJF_OFFSET UNITYSDK_OFFSET(0x2E77010)

	struct alignas(4) FJLAKILIMEN
	{
		::System::Boolean MOKNCFJICIC; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FixPoint HLDABCGMLEN; // 0x18
		::RPG::GameCore::FixPoint JFCJNHNBMCB; // 0x20
		::RPG::GameCore::FixPoint BICKCCGOKCE; // 0x28
		::RPG::GameCore::FixPoint GHMBPGFLGKM; // 0x30
		::RPG::GameCore::FixPoint AIJFGKGCGDI; // 0x38
		::RPG::GameCore::FixPoint PKLIENJDEIH; // 0x40
		::RPG::GameCore::FixPoint PBEJAEPALEI; // 0x48
		::RPG::GameCore::FixPoint ILBFKHJONOI; // 0x50
		::RPG::GameCore::FixPoint MMPHCDCGCKE; // 0x58
		::RPG::GameCore::FixPoint LKLMCAKKGEP; // 0x60
		::RPG::GameCore::FixPoint LKIELCNNLNL; // 0x68
		::RPG::GameCore::FixPoint DEGHPAJIPFP; // 0x70
		::RPG::GameCore::FixPoint CEKOBBDOINO; // 0x78
		::RPG::GameCore::FixPoint IEEKAECICIF; // 0x80
		::RPG::GameCore::FixPoint ECFJMELFHIO; // 0x88
		::RPG::GameCore::FixPoint CILOCPLHJLK; // 0x90
		::System::Void LMIEIPAKDGC(::RPG::GameCore::AttackType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + FJLAKILIMEN_LMIEIPAKDGC_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint PAKIJFOGOJF(::DEEJKBIMHAA* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::DEEJKBIMHAA*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FJLAKILIMEN_PAKIJFOGOJF_OFFSET))(this, a1, a2, a3);
		}

	};
