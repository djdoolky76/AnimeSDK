#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierSetCountByRemoveMiracleOnEnterRoomConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYREMOVEMIRACLEONENTERROOMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1A6A0)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYREMOVEMIRACLEONENTERROOMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1A6B0)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYREMOVEMIRACLEONENTERROOMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1A660)

namespace RPG::GameCore
{
	class RogueModifierSetCountByRemoveMiracleOnEnterRoomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYREMOVEMIRACLEONENTERROOMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetCountByRemoveMiracleOnEnterRoomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetCountByRemoveMiracleOnEnterRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYREMOVEMIRACLEONENTERROOMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetCountByRemoveMiracleOnEnterRoomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetCountByRemoveMiracleOnEnterRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYREMOVEMIRACLEONENTERROOMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
