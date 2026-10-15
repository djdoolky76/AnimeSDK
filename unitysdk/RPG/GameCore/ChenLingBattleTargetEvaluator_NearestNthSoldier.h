#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
#include "unitysdk/RPG/GameCore/ChenLingTeamSelectorType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleInitPositionEvaluator; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_NearestNthSoldier; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNTHSOLDIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D588AA0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNTHSOLDIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D588AB0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNTHSOLDIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D588A50)

namespace RPG::GameCore
{
	class ChenLingBattleTargetEvaluator_NearestNthSoldier : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Range; // 0x10
		::System::Int32 Index; // 0x18
		::RPG::GameCore::ChenLingTeamSelectorType TeamSelectorType; // 0x1C
		::RPG::GameCore::BaseChenLingBattleInitPositionEvaluator* InitPositionEvaluator; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNTHSOLDIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNthSoldier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNthSoldier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNTHSOLDIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNthSoldier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNthSoldier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNTHSOLDIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
