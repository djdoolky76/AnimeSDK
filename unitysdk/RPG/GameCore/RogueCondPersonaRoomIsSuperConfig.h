#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCondPersonaRoomIsSuperConfig; }

#define RPG_GAMECORE_ROGUECONDPERSONAROOMISSUPERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B25B0)
#define RPG_GAMECORE_ROGUECONDPERSONAROOMISSUPERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9B25C0)
#define RPG_GAMECORE_ROGUECONDPERSONAROOMISSUPERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B2570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondPersonaRoomIsSuperConfig_TypeDefinitionIndex = 19808;

	class RogueCondPersonaRoomIsSuperConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAROOMISSUPERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondPersonaRoomIsSuperConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondPersonaRoomIsSuperConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAROOMISSUPERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondPersonaRoomIsSuperConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondPersonaRoomIsSuperConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAROOMISSUPERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
