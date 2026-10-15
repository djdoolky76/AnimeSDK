#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnMiracleEventConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMIRACLEEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA16320)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMIRACLEEVENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA16330)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMIRACLEEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA162E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnMiracleEventConfig_TypeDefinitionIndex = 17685;

	class RogueModifierExecuteActionOnMiracleEventConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMIRACLEEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnMiracleEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnMiracleEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMIRACLEEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnMiracleEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnMiracleEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMIRACLEEVENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
