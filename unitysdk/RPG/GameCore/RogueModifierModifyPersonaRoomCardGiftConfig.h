#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyPersonaRoomCardGiftConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDGIFTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA18200)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDGIFTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA18210)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDGIFTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA181C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyPersonaRoomCardGiftConfig_TypeDefinitionIndex = 17869;

	class RogueModifierModifyPersonaRoomCardGiftConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDGIFTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardGiftConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardGiftConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDGIFTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardGiftConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardGiftConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDGIFTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
