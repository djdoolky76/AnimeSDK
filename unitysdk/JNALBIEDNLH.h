#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingBattleAbilityNodeState.h"
#include "unitysdk/System/Object.h"
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }

#define JNALBIEDNLH_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xB26E4C0)
#define JNALBIEDNLH_CTOR_OFFSET UNITYSDK_OFFSET(0xB26E4D0)
#define JNALBIEDNLH_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB26E4E0)

inline static constexpr unsigned int JNALBIEDNLH_TypeDefinitionIndex = 77863;

	class JNALBIEDNLH : public ::System::Object
	{
	public:
		::CIIKBJFOKHL* EEFMDEHLLFI; // 0x10
		::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* IGHAHBNLIJA; // 0x18
		::RPG::Client::LittleGame::ChenLing::ChenLingBattleAbilityNodeState DLNIGFGLPLJ; // 0x20
		::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + JNALBIEDNLH_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::ChenLing::ChenLingBattleAbilityNodeState BGDKFHEBDFJ()
		{
			return ((::RPG::Client::LittleGame::ChenLing::ChenLingBattleAbilityNodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + JNALBIEDNLH_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNALBIEDNLH_KHGIKBFDLFB_OFFSET))(this);
		}

	};
