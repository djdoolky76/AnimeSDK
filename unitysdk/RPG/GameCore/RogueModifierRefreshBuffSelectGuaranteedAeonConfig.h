#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierRefreshBuffSelectGuaranteedAeonConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA19880)
#define RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA19890)
#define RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA19840)

namespace RPG::GameCore
{
	class RogueModifierRefreshBuffSelectGuaranteedAeonConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierRefreshBuffSelectGuaranteedAeonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierRefreshBuffSelectGuaranteedAeonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierRefreshBuffSelectGuaranteedAeonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierRefreshBuffSelectGuaranteedAeonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
