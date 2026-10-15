#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }

#define RPG_GAMECORE_BASECHENLINGBATTLEABILITYNODECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D43A110)
#define RPG_GAMECORE_BASECHENLINGBATTLEABILITYNODECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D43A0B0)
#define RPG_GAMECORE_BASECHENLINGBATTLEABILITYNODECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D439800)

namespace RPG::GameCore
{
	class BaseChenLingBattleAbilityNodeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEABILITYNODECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEABILITYNODECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEABILITYNODECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
