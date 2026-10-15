#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActChangeChessRogueCheatDiceConfig; }

#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUECHEATDICECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99D2B0)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUECHEATDICECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99D2C0)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUECHEATDICECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99D270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeChessRogueCheatDiceConfig_TypeDefinitionIndex = 19639;

	class RogueActChangeChessRogueCheatDiceConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUECHEATDICECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeChessRogueCheatDiceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeChessRogueCheatDiceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUECHEATDICECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeChessRogueCheatDiceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeChessRogueCheatDiceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUECHEATDICECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
