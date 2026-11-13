#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionReRollDiffPersonaRoomCardNumConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONREROLLDIFFPERSONAROOMCARDNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2077F6E0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONREROLLDIFFPERSONAROOMCARDNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2077F6F0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONREROLLDIFFPERSONAROOMCARDNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2077F6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionReRollDiffPersonaRoomCardNumConfig_TypeDefinitionIndex = 17989;

	class RogueModifierExecuteActionReRollDiffPersonaRoomCardNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONREROLLDIFFPERSONAROOMCARDNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionReRollDiffPersonaRoomCardNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionReRollDiffPersonaRoomCardNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONREROLLDIFFPERSONAROOMCARDNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionReRollDiffPersonaRoomCardNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionReRollDiffPersonaRoomCardNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONREROLLDIFFPERSONAROOMCARDNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
