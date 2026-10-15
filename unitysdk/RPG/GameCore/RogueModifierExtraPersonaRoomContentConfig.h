#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExtraPersonaRoomContentConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXTRAPERSONAROOMCONTENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E9500)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRAPERSONAROOMCONTENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E9510)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRAPERSONAROOMCONTENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E94C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExtraPersonaRoomContentConfig_TypeDefinitionIndex = 17798;

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
