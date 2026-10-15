#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNALBIEDNLH.h"
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_Attack; }

#define BKGOGIIMJJO_CTOR_OFFSET UNITYSDK_OFFSET(0xB7AF5F0)
#define BKGOGIIMJJO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB7AFC20)
#define BKGOGIIMJJO_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xB7AF680)
#define BKGOGIIMJJO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB7AFBC0)
#define BKGOGIIMJJO_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB7AFC60)

inline static constexpr unsigned int BKGOGIIMJJO_TypeDefinitionIndex = 77892;

	class BKGOGIIMJJO : public ::JNALBIEDNLH
	{
	public:
		::RPG::GameCore::ChenLingBattleAbility_Attack* EPEKLJLFLLM; // 0x28
		::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + BKGOGIIMJJO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGOGIIMJJO_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BKGOGIIMJJO_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGOGIIMJJO_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGOGIIMJJO_KHGIKBFDLFB_OFFSET))(this);
		}

	};
