#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnKillMonsterConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLMONSTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E8A20)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLMONSTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E8A30)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLMONSTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E89E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnKillMonsterConfig_TypeDefinitionIndex = 17846;

	class RogueModifierExecuteActionOnKillMonsterConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLMONSTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnKillMonsterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnKillMonsterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLMONSTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnKillMonsterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnKillMonsterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONKILLMONSTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
