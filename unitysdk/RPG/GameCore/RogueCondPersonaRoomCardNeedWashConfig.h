#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCondPersonaRoomCardNeedWashConfig; }

#define RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNEEDWASHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B24F0)
#define RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNEEDWASHCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9B2500)
#define RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNEEDWASHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B24B0)

namespace RPG::GameCore
{
	class RogueCondPersonaRoomCardNeedWashConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNEEDWASHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondPersonaRoomCardNeedWashConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondPersonaRoomCardNeedWashConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNEEDWASHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondPersonaRoomCardNeedWashConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondPersonaRoomCardNeedWashConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPERSONAROOMCARDNEEDWASHCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
