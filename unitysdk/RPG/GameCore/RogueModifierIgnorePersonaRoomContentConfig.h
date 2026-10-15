#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierIgnorePersonaRoomContentConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERIGNOREPERSONAROOMCONTENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E96E0)
#define RPG_GAMECORE_ROGUEMODIFIERIGNOREPERSONAROOMCONTENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E96F0)
#define RPG_GAMECORE_ROGUEMODIFIERIGNOREPERSONAROOMCONTENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E96A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierIgnorePersonaRoomContentConfig_TypeDefinitionIndex = 17799;

	class RogueModifierIgnorePersonaRoomContentConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERIGNOREPERSONAROOMCONTENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierIgnorePersonaRoomContentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierIgnorePersonaRoomContentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERIGNOREPERSONAROOMCONTENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierIgnorePersonaRoomContentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierIgnorePersonaRoomContentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERIGNOREPERSONAROOMCONTENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
