#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnGetPersonaRoomCardGiftConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGETPERSONAROOMCARDGIFTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA16200)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGETPERSONAROOMCARDGIFTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA16210)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGETPERSONAROOMCARDGIFTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA161C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnGetPersonaRoomCardGiftConfig_TypeDefinitionIndex = 17870;

	class RogueModifierExecuteActionOnGetPersonaRoomCardGiftConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGETPERSONAROOMCARDGIFTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnGetPersonaRoomCardGiftConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnGetPersonaRoomCardGiftConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGETPERSONAROOMCARDGIFTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnGetPersonaRoomCardGiftConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnGetPersonaRoomCardGiftConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGETPERSONAROOMCARDGIFTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
