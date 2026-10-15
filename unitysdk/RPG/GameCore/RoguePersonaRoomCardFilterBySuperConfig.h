#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RoguePersonaRoomCardFilterBySuperConfig; }

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYSUPERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2BF70)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYSUPERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2BF80)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYSUPERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2C290)

namespace RPG::GameCore
{
	class RoguePersonaRoomCardFilterBySuperConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYSUPERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterBySuperConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterBySuperConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYSUPERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterBySuperConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaRoomCardFilterBySuperConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYSUPERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
