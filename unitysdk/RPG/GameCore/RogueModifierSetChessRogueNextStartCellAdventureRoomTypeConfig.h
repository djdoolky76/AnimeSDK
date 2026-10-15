#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierSetChessRogueNextStartCellAdventureRoomTypeConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERSETCHESSROGUENEXTSTARTCELLADVENTUREROOMTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9ECAB0)
#define RPG_GAMECORE_ROGUEMODIFIERSETCHESSROGUENEXTSTARTCELLADVENTUREROOMTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9ECAC0)
#define RPG_GAMECORE_ROGUEMODIFIERSETCHESSROGUENEXTSTARTCELLADVENTUREROOMTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9ECA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetChessRogueNextStartCellAdventureRoomTypeConfig_TypeDefinitionIndex = 17976;

	class RogueModifierSetChessRogueNextStartCellAdventureRoomTypeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCHESSROGUENEXTSTARTCELLADVENTUREROOMTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetChessRogueNextStartCellAdventureRoomTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetChessRogueNextStartCellAdventureRoomTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCHESSROGUENEXTSTARTCELLADVENTUREROOMTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetChessRogueNextStartCellAdventureRoomTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetChessRogueNextStartCellAdventureRoomTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCHESSROGUENEXTSTARTCELLADVENTUREROOMTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
