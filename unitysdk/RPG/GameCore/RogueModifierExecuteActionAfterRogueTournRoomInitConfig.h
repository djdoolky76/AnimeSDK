#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionAfterRogueTournRoomInitConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUETOURNROOMINITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA15780)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUETOURNROOMINITCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA15790)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUETOURNROOMINITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA15740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionAfterRogueTournRoomInitConfig_TypeDefinitionIndex = 17768;

	class RogueModifierExecuteActionAfterRogueTournRoomInitConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUETOURNROOMINITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueTournRoomInitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueTournRoomInitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUETOURNROOMINITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueTournRoomInitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueTournRoomInitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUETOURNROOMINITCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
