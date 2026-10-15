#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
#include "unitysdk/RPG/GameCore/ChenLingTeamSelectorType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_NearestNSoldiers; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNSOLDIERS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55AED0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNSOLDIERS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D55AEE0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNSOLDIERS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D55AE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_NearestNSoldiers_TypeDefinitionIndex = 15766;

	class ChenLingBattleTargetEvaluator_NearestNSoldiers : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::RPG::GameCore::ChenLingTeamSelectorType TeamSelectorType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::BaseChenLingBattleValueGetter* Number; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNSOLDIERS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNSoldiers* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNSoldiers*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNSOLDIERS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNSoldiers* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_NearestNSoldiers*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_NEARESTNSOLDIERS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
