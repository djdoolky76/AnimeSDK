#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNALBIEDNLH.h"
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_ShowToast; }

#define JJPDOHDKABC_CTOR_OFFSET UNITYSDK_OFFSET(0xB20A150)
#define JJPDOHDKABC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB20A610)
#define JJPDOHDKABC_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xB20A1D0)
#define JJPDOHDKABC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB20A650)

	class JJPDOHDKABC : public ::JNALBIEDNLH
	{
	public:
		::RPG::GameCore::ChenLingBattleAbility_ShowToast* HDNEDLNJHOK; // 0x28
		::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + JJPDOHDKABC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPDOHDKABC_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPDOHDKABC_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JJPDOHDKABC_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
