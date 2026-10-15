#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
#include "unitysdk/RPG/GameCore/ChenLingTeamSelectorType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_WithinRadius; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHINRADIUS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55BA10)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHINRADIUS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D55BA20)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHINRADIUS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D55B9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_WithinRadius_TypeDefinitionIndex = 15764;

	class ChenLingBattleTargetEvaluator_WithinRadius : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Radius; // 0x18
		::System::Boolean IsAffectByOwnerScale; // 0x20
		::System::Boolean IntersectWithTargetCollsion; // 0x21
		::System::Byte _padding0[0x2];
		::RPG::GameCore::ChenLingTeamSelectorType TeamSelectorType; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHINRADIUS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithinRadius* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithinRadius*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHINRADIUS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithinRadius* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithinRadius*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHINRADIUS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
