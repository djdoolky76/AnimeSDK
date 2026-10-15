#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }

#define RPG_GAMECORE_BASECHENLINGBATTLEABILITYNODECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D40C6A0)
#define RPG_GAMECORE_BASECHENLINGBATTLEABILITYNODECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D40C640)
#define RPG_GAMECORE_BASECHENLINGBATTLEABILITYNODECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D40BD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChenLingBattleAbilityNodeConfig_TypeDefinitionIndex = 15731;

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
