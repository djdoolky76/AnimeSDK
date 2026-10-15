#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionAfterPersonaRoomCardWashConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERPERSONAROOMCARDWASHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA15660)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERPERSONAROOMCARDWASHCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA15670)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERPERSONAROOMCARDWASHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA15620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionAfterPersonaRoomCardWashConfig_TypeDefinitionIndex = 17817;

	class RogueModifierExecuteActionAfterPersonaRoomCardWashConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERPERSONAROOMCARDWASHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterPersonaRoomCardWashConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionAfterPersonaRoomCardWashConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERPERSONAROOMCARDWASHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterPersonaRoomCardWashConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionAfterPersonaRoomCardWashConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERPERSONAROOMCARDWASHCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
