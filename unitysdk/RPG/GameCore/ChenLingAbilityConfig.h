#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityConditionChecker; }
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingAbilityConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGABILITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57DFD0)
#define RPG_GAMECORE_CHENLINGABILITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57DDC0)

namespace RPG::GameCore
{
	class ChenLingAbilityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>* AbilitySequence; // 0x10
		::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker* AbilityCastCondition; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* CDTime; // 0x20
		::System::Boolean IsReleasedOnlyOnce; // 0x28
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::String*>* PreLoadResList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGABILITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingAbilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGABILITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
