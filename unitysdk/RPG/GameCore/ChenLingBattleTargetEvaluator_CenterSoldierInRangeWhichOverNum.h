#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
#include "unitysdk/RPG/GameCore/ChenLingTeamSelectorType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_CenterSoldierInRangeWhichOverNum; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_CENTERSOLDIERINRANGEWHICHOVERNUM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D587F40)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_CENTERSOLDIERINRANGEWHICHOVERNUM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D587F50)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_CENTERSOLDIERINRANGEWHICHOVERNUM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D587EF0)

namespace RPG::GameCore
{
	class ChenLingBattleTargetEvaluator_CenterSoldierInRangeWhichOverNum : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::RPG::GameCore::ChenLingTeamSelectorType TeamSelectorType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::BaseChenLingBattleValueGetter* Number; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* Range; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_CENTERSOLDIERINRANGEWHICHOVERNUM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_CenterSoldierInRangeWhichOverNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_CenterSoldierInRangeWhichOverNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_CENTERSOLDIERINRANGEWHICHOVERNUM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_CenterSoldierInRangeWhichOverNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_CenterSoldierInRangeWhichOverNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_CENTERSOLDIERINRANGEWHICHOVERNUM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
