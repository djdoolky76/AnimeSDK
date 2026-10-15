#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecActionOnArbitraryRoomCardChangeConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONARBITRARYROOMCARDCHANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA154E0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONARBITRARYROOMCARDCHANGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA154F0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONARBITRARYROOMCARDCHANGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA154A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecActionOnArbitraryRoomCardChangeConfig_TypeDefinitionIndex = 17867;

	class RogueModifierExecActionOnArbitraryRoomCardChangeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONARBITRARYROOMCARDCHANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecActionOnArbitraryRoomCardChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecActionOnArbitraryRoomCardChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONARBITRARYROOMCARDCHANGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecActionOnArbitraryRoomCardChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecActionOnArbitraryRoomCardChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONARBITRARYROOMCARDCHANGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
