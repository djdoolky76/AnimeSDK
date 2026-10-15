#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnKillEliteMonsterNumConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLELITEMONSTERNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA16260)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLELITEMONSTERNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA16270)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLELITEMONSTERNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA16220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnKillEliteMonsterNumConfig_TypeDefinitionIndex = 17686;

	class RogueModifierExecuteActionOnKillEliteMonsterNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLELITEMONSTERNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnKillEliteMonsterNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnKillEliteMonsterNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLELITEMONSTERNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnKillEliteMonsterNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnKillEliteMonsterNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLELITEMONSTERNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
