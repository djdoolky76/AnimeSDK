#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnEnterCosmosRogueRoomConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERCOSMOSROGUEROOMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA15DE0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERCOSMOSROGUEROOMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA15DF0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERCOSMOSROGUEROOMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA15DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnEnterCosmosRogueRoomConfig_TypeDefinitionIndex = 17941;

	class RogueModifierExecuteActionOnEnterCosmosRogueRoomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERCOSMOSROGUEROOMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterCosmosRogueRoomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterCosmosRogueRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERCOSMOSROGUEROOMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterCosmosRogueRoomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterCosmosRogueRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERCOSMOSROGUEROOMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
