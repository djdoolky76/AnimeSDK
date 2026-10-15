#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnEnterRogueTournRoomConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNROOMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA15F60)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNROOMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA15F70)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNROOMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA15F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnEnterRogueTournRoomConfig_TypeDefinitionIndex = 17766;

	class RogueModifierExecuteActionOnEnterRogueTournRoomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNROOMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueTournRoomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueTournRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNROOMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueTournRoomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueTournRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNROOMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
