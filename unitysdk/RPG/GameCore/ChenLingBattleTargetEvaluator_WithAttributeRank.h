#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleAttributeName.h"
#include "unitysdk/RPG/GameCore/ChenLingTeamSelectorType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_WithAttributeRank; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHATTRIBUTERANK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D589230)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHATTRIBUTERANK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D589240)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHATTRIBUTERANK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5891E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_WithAttributeRank_TypeDefinitionIndex = 15773;

	class ChenLingBattleTargetEvaluator_WithAttributeRank : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::RPG::GameCore::ChenLingTeamSelectorType TeamSelectorType; // 0x10
		::RPG::GameCore::ChenLingBattleAttributeName AttributeName; // 0x14
		::System::Boolean IsDescending; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::BaseChenLingBattleValueGetter* Number; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHATTRIBUTERANK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithAttributeRank* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithAttributeRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHATTRIBUTERANK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithAttributeRank* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_WithAttributeRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_WITHATTRIBUTERANK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
