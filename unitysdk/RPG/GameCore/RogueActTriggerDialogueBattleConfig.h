#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActTriggerDialogueBattleConfig; }

#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A1A80)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A1A90)
#define RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A1A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerDialogueBattleConfig_TypeDefinitionIndex = 19637;

	class RogueActTriggerDialogueBattleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerDialogueBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerDialogueBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActTriggerDialogueBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActTriggerDialogueBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDIALOGUEBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
