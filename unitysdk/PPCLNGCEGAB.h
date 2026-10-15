#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNALBIEDNLH.h"
class ALMFLCJCHKP;
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_FireVisualEffect; }
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }

#define PPCLNGCEGAB_CTOR_OFFSET UNITYSDK_OFFSET(0xC37ADD0)
#define PPCLNGCEGAB_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xC37B550)
#define PPCLNGCEGAB_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xC37AE60)
#define PPCLNGCEGAB_IJEPAJIMDPA_OFFSET UNITYSDK_OFFSET(0xC37B140)
#define PPCLNGCEGAB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC37B4F0)
#define PPCLNGCEGAB_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC37B590)
#define PPCLNGCEGAB_PLOCMANNCPB_OFFSET UNITYSDK_OFFSET(0xC37ADB0)

	class PPCLNGCEGAB : public ::JNALBIEDNLH
	{
	public:
		::RPG::GameCore::ChenLingBattleAbility_FireVisualEffect* MJHFACCBGLL; // 0x28
		::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + PPCLNGCEGAB_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ChenLingBattleEffectConfig* PLOCMANNCPB()
		{
			return ((::RPG::GameCore::ChenLingBattleEffectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCLNGCEGAB_PLOCMANNCPB_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCLNGCEGAB_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void IJEPAJIMDPA(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + PPCLNGCEGAB_IJEPAJIMDPA_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PPCLNGCEGAB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCLNGCEGAB_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCLNGCEGAB_KHGIKBFDLFB_OFFSET))(this);
		}

	};
