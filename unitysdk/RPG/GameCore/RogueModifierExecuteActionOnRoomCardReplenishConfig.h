#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnRoomCardReplenishConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDREPLENISHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC28BA0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDREPLENISHCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC28BB0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDREPLENISHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC28B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnRoomCardReplenishConfig_TypeDefinitionIndex = 18012;

	class RogueModifierExecuteActionOnRoomCardReplenishConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDREPLENISHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRoomCardReplenishConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnRoomCardReplenishConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDREPLENISHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRoomCardReplenishConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnRoomCardReplenishConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROOMCARDREPLENISHCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
