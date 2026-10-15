#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RoguePersonaRoomCardFilterByDiscardConfig; }

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYDISCARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2BEB0)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYDISCARDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2BEC0)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYDISCARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2C110)

namespace RPG::GameCore
{
	class RoguePersonaRoomCardFilterByDiscardConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYDISCARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByDiscardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterByDiscardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYDISCARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByDiscardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterByDiscardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYDISCARDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
