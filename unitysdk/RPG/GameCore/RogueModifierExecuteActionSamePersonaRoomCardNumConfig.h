#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionSamePersonaRoomCardNumConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONSAMEPERSONAROOMCARDNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA16C20)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONSAMEPERSONAROOMCARDNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA16C30)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONSAMEPERSONAROOMCARDNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA16BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionSamePersonaRoomCardNumConfig_TypeDefinitionIndex = 17818;

	class RogueModifierExecuteActionSamePersonaRoomCardNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONSAMEPERSONAROOMCARDNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionSamePersonaRoomCardNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionSamePersonaRoomCardNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONSAMEPERSONAROOMCARDNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionSamePersonaRoomCardNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionSamePersonaRoomCardNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONSAMEPERSONAROOMCARDNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
