#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierRefreshBuffSelectGuaranteedAeonBuffConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONBUFFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA19820)
#define RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONBUFFCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA19830)
#define RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONBUFFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA197E0)

namespace RPG::GameCore
{
	class RogueModifierRefreshBuffSelectGuaranteedAeonBuffConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONBUFFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierRefreshBuffSelectGuaranteedAeonBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierRefreshBuffSelectGuaranteedAeonBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONBUFFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierRefreshBuffSelectGuaranteedAeonBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierRefreshBuffSelectGuaranteedAeonBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONBUFFCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
