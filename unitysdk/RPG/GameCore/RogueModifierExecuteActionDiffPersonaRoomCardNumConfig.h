#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionDiffPersonaRoomCardNumConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONDIFFPERSONAROOMCARDNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2077E420)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONDIFFPERSONAROOMCARDNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2077E430)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONDIFFPERSONAROOMCARDNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2077E3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionDiffPersonaRoomCardNumConfig_TypeDefinitionIndex = 17988;

	class RogueModifierExecuteActionDiffPersonaRoomCardNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONDIFFPERSONAROOMCARDNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionDiffPersonaRoomCardNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionDiffPersonaRoomCardNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONDIFFPERSONAROOMCARDNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionDiffPersonaRoomCardNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionDiffPersonaRoomCardNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONDIFFPERSONAROOMCARDNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
