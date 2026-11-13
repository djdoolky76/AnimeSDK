#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNALBIEDNLH.h"
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_SelfKill; }

#define CHLCMLONJGP_CTOR_OFFSET UNITYSDK_OFFSET(0x16E26010)
#define CHLCMLONJGP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x16E26540)
#define CHLCMLONJGP_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x16E260A0)
#define CHLCMLONJGP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16E264E0)
#define CHLCMLONJGP_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x16E26580)

inline static constexpr unsigned int CHLCMLONJGP_TypeDefinitionIndex = 80648;

	class CHLCMLONJGP : public ::JNALBIEDNLH
	{
	public:
		::RPG::GameCore::ChenLingBattleAbility_SelfKill* OHGCCCIFAMP; // 0x28
		::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + CHLCMLONJGP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLCMLONJGP_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHLCMLONJGP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLCMLONJGP_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLCMLONJGP_KHGIKBFDLFB_OFFSET))(this);
		}

	};
