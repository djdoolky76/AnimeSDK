#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierAddRogueCoinOnBuffRemoveConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERADDROGUECOINONBUFFREMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DD3E0)
#define RPG_GAMECORE_ROGUEMODIFIERADDROGUECOINONBUFFREMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9DD3F0)
#define RPG_GAMECORE_ROGUEMODIFIERADDROGUECOINONBUFFREMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9DD3A0)

namespace RPG::GameCore
{
	class RogueModifierAddRogueCoinOnBuffRemoveConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDROGUECOINONBUFFREMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierAddRogueCoinOnBuffRemoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierAddRogueCoinOnBuffRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDROGUECOINONBUFFREMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierAddRogueCoinOnBuffRemoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierAddRogueCoinOnBuffRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDROGUECOINONBUFFREMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
