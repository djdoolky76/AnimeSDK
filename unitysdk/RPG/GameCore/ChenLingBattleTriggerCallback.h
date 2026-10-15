#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleTriggerCallback; }

#define RPG_GAMECORE_CHENLINGBATTLETRIGGERCALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55BC10)
#define RPG_GAMECORE_CHENLINGBATTLETRIGGERCALLBACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D558F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTriggerCallback_TypeDefinitionIndex = 15708;

	class ChenLingBattleTriggerCallback : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>* CallbackSequence; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETRIGGERCALLBACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTriggerCallback* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTriggerCallback*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETRIGGERCALLBACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
