#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExtraPersonaRoomContentConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXTRAPERSONAROOMCONTENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA16DA0)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRAPERSONAROOMCONTENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA16DB0)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRAPERSONAROOMCONTENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA16D60)

namespace RPG::GameCore
{
	class RogueModifierExtraPersonaRoomContentConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRAPERSONAROOMCONTENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExtraPersonaRoomContentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExtraPersonaRoomContentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRAPERSONAROOMCONTENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExtraPersonaRoomContentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExtraPersonaRoomContentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRAPERSONAROOMCONTENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
