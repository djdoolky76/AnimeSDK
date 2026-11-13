#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamPersonaRoomCardReDrawCountConfig; }

#define RPG_GAMECORE_ROGUEPARAMPERSONAROOMCARDREDRAWCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x207B4CF0)
#define RPG_GAMECORE_ROGUEPARAMPERSONAROOMCARDREDRAWCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x207B4D00)
#define RPG_GAMECORE_ROGUEPARAMPERSONAROOMCARDREDRAWCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x207B4CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamPersonaRoomCardReDrawCountConfig_TypeDefinitionIndex = 20193;

	class RogueParamPersonaRoomCardReDrawCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMPERSONAROOMCARDREDRAWCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamPersonaRoomCardReDrawCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamPersonaRoomCardReDrawCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMPERSONAROOMCARDREDRAWCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamPersonaRoomCardReDrawCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamPersonaRoomCardReDrawCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMPERSONAROOMCARDREDRAWCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
