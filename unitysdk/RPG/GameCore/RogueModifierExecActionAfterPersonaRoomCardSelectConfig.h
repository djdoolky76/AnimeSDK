#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecActionAfterPersonaRoomCardSelectConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONAFTERPERSONAROOMCARDSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E7B80)
#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONAFTERPERSONAROOMCARDSELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E7B90)
#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONAFTERPERSONAROOMCARDSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E7B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecActionAfterPersonaRoomCardSelectConfig_TypeDefinitionIndex = 17835;

	class RogueModifierExecActionAfterPersonaRoomCardSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONAFTERPERSONAROOMCARDSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecActionAfterPersonaRoomCardSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecActionAfterPersonaRoomCardSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONAFTERPERSONAROOMCARDSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecActionAfterPersonaRoomCardSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecActionAfterPersonaRoomCardSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONAFTERPERSONAROOMCARDSELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
