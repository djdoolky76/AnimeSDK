#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecActionOnAdventureRoomGameplayLevelConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONADVENTUREROOMGAMEPLAYLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC27580)
#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONADVENTUREROOMGAMEPLAYLEVELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC27590)
#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONADVENTUREROOMGAMEPLAYLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC27540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecActionOnAdventureRoomGameplayLevelConfig_TypeDefinitionIndex = 18007;

	class RogueModifierExecActionOnAdventureRoomGameplayLevelConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONADVENTUREROOMGAMEPLAYLEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecActionOnAdventureRoomGameplayLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecActionOnAdventureRoomGameplayLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONADVENTUREROOMGAMEPLAYLEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecActionOnAdventureRoomGameplayLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecActionOnAdventureRoomGameplayLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONADVENTUREROOMGAMEPLAYLEVELCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
