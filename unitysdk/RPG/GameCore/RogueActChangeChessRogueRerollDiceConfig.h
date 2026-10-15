#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActChangeChessRogueRerollDiceConfig; }

#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEREROLLDICECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96FA10)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEREROLLDICECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D96FA20)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEREROLLDICECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96F9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeChessRogueRerollDiceConfig_TypeDefinitionIndex = 19640;

	class RogueActChangeChessRogueRerollDiceConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEREROLLDICECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeChessRogueRerollDiceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeChessRogueRerollDiceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEREROLLDICECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeChessRogueRerollDiceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeChessRogueRerollDiceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEREROLLDICECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
