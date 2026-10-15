#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNALBIEDNLH.h"
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_ShowTalk; }

#define HCPMIPMCDNC_CTOR_OFFSET UNITYSDK_OFFSET(0x15C2F420)
#define HCPMIPMCDNC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15C2F540)
#define HCPMIPMCDNC_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15C2F4A0)
#define HCPMIPMCDNC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15C2F580)

inline static constexpr unsigned int HCPMIPMCDNC_TypeDefinitionIndex = 77921;

	class HCPMIPMCDNC : public ::JNALBIEDNLH
	{
	public:
		::RPG::GameCore::ChenLingBattleAbility_ShowTalk* OFGFLFEBPJM; // 0x28
		::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + HCPMIPMCDNC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPMIPMCDNC_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPMIPMCDNC_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HCPMIPMCDNC_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
