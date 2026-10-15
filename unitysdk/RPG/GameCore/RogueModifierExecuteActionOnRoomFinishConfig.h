#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnRoomFinishConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMFINISHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA16B00)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMFINISHCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA16B10)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMFINISHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA16AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnRoomFinishConfig_TypeDefinitionIndex = 17689;

	class RogueModifierExecuteActionOnRoomFinishConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMFINISHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRoomFinishConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnRoomFinishConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMFINISHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRoomFinishConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnRoomFinishConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMFINISHCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
