#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNALBIEDNLH.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class ALMFLCJCHKP;
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_Rotation; }
namespace RPG::GameCore { class ChenLingBattleAnimEventConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KICPKKFAIBC_CTOR_OFFSET UNITYSDK_OFFSET(0xB419E20)
#define KICPKKFAIBC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB41B2C0)
#define KICPKKFAIBC_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xB419FD0)
#define KICPKKFAIBC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB41A600)
#define KICPKKFAIBC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB41B3F0)
#define KICPKKFAIBC_PEHCBGNEEII_OFFSET UNITYSDK_OFFSET(0xB41AF20)

	class KICPKKFAIBC : public ::JNALBIEDNLH
	{
	public:
		::System::Collections::Generic::Dictionary_2<::ALMFLCJCHKP*, ::System::Single>* NMFECMKJOFP; // 0x28
		::System::Collections::Generic::Dictionary_2<::ALMFLCJCHKP*, ::UnityEngine::Quaternion>* JIGAHLICPHA; // 0x30
		::System::Collections::Generic::List_1<::ALMFLCJCHKP*>* HGCNLFIMDKL; // 0x38
		::System::Collections::Generic::List_1<::ALMFLCJCHKP*>* MCNNKBAGPLB; // 0x40
		::RPG::GameCore::ChenLingBattleAbility_Rotation* DEHFDECCMJG; // 0x48
		::System::Collections::Generic::List_1<::RPG::GameCore::ChenLingBattleAnimEventConfig*>* AHOOLDFODPL; // 0x50
		::System::Single NCMEPPHLGEG; // 0x58
		::System::Single HPCHCEFOKJB; // 0x5C
		::System::Single BCGHNNBGMCM; // 0x60
		::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + KICPKKFAIBC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICPKKFAIBC_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KICPKKFAIBC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void PEHCBGNEEII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICPKKFAIBC_PEHCBGNEEII_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICPKKFAIBC_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICPKKFAIBC_KHGIKBFDLFB_OFFSET))(this);
		}

	};
