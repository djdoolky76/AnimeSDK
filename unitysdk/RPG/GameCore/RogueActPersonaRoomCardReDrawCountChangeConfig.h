#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaRoomCardReDrawCountChangeConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONAROOMCARDREDRAWCOUNTCHANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D972780)
#define RPG_GAMECORE_ROGUEACTPERSONAROOMCARDREDRAWCOUNTCHANGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D972790)
#define RPG_GAMECORE_ROGUEACTPERSONAROOMCARDREDRAWCOUNTCHANGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D972740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRoomCardReDrawCountChangeConfig_TypeDefinitionIndex = 19771;

	class RogueActPersonaRoomCardReDrawCountChangeConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAROOMCARDREDRAWCOUNTCHANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaRoomCardReDrawCountChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaRoomCardReDrawCountChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAROOMCARDREDRAWCOUNTCHANGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaRoomCardReDrawCountChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaRoomCardReDrawCountChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAROOMCARDREDRAWCOUNTCHANGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
