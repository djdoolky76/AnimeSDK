#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnRoomCardLevelChangeConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDLEVELCHANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA16A40)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDLEVELCHANGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA16A50)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDLEVELCHANGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA16A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnRoomCardLevelChangeConfig_TypeDefinitionIndex = 17691;

	class RogueModifierExecuteActionOnRoomCardLevelChangeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDLEVELCHANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRoomCardLevelChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnRoomCardLevelChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDLEVELCHANGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRoomCardLevelChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnRoomCardLevelChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDLEVELCHANGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
