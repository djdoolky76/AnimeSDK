#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityConditionChecker; }

#define RPG_GAMECORE_BASECHENLINGBATTLEABILITYCONDITIONCHECKER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4397F0)
#define RPG_GAMECORE_BASECHENLINGBATTLEABILITYCONDITIONCHECKER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D439790)
#define RPG_GAMECORE_BASECHENLINGBATTLEABILITYCONDITIONCHECKER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4392C0)

namespace RPG::GameCore
{
	class BaseChenLingBattleAbilityConditionChecker : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEABILITYCONDITIONCHECKER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEABILITYCONDITIONCHECKER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEABILITYCONDITIONCHECKER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
