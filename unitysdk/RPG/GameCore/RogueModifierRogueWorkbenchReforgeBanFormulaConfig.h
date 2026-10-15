#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierRogueWorkbenchReforgeBanFormulaConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERROGUEWORKBENCHREFORGEBANFORMULACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1A290)
#define RPG_GAMECORE_ROGUEMODIFIERROGUEWORKBENCHREFORGEBANFORMULACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1A2A0)
#define RPG_GAMECORE_ROGUEMODIFIERROGUEWORKBENCHREFORGEBANFORMULACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1A250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierRogueWorkbenchReforgeBanFormulaConfig_TypeDefinitionIndex = 17757;

	class RogueModifierRogueWorkbenchReforgeBanFormulaConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERROGUEWORKBENCHREFORGEBANFORMULACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierRogueWorkbenchReforgeBanFormulaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierRogueWorkbenchReforgeBanFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERROGUEWORKBENCHREFORGEBANFORMULACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierRogueWorkbenchReforgeBanFormulaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierRogueWorkbenchReforgeBanFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERROGUEWORKBENCHREFORGEBANFORMULACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
