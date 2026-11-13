#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNALBIEDNLH.h"
class BPKPCOFKFLC;
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_Branch; }

#define GJMCIOKFOPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8AAC10)
#define GJMCIOKFOPJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1A8AAEE0)
#define GJMCIOKFOPJ_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1A8AACB0)
#define GJMCIOKFOPJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1A8AAE50)
#define GJMCIOKFOPJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1A8AAF20)

inline static constexpr unsigned int GJMCIOKFOPJ_TypeDefinitionIndex = 80628;

	class GJMCIOKFOPJ : public ::JNALBIEDNLH
	{
	public:
		::RPG::GameCore::ChenLingBattleAbility_Branch* NNFGHJLBPJJ; // 0x28
		::BPKPCOFKFLC* EBGAHILPBOK; // 0x30
		::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + GJMCIOKFOPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMCIOKFOPJ_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJMCIOKFOPJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMCIOKFOPJ_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJMCIOKFOPJ_KHGIKBFDLFB_OFFSET))(this);
		}

	};
