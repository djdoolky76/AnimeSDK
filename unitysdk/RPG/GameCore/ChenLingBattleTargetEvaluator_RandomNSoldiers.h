#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleTargetEvaluator.h"
#include "unitysdk/RPG/GameCore/ChenLingTeamSelectorType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_RandomNSoldiers; }

#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_RANDOMNSOLDIERS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D588CA0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_RANDOMNSOLDIERS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D588CB0)
#define RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_RANDOMNSOLDIERS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D588C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTargetEvaluator_RandomNSoldiers_TypeDefinitionIndex = 15767;

	class ChenLingBattleTargetEvaluator_RandomNSoldiers : public ::RPG::GameCore::BaseChenLingBattleTargetEvaluator
	{
	public:
		::RPG::GameCore::ChenLingTeamSelectorType TeamSelectorType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::BaseChenLingBattleValueGetter* Number; // 0x18
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* DropTargetEvaluator; // 0x20
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* SourceTargetEvaluator; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_RANDOMNSOLDIERS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_RandomNSoldiers* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_RandomNSoldiers*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_RANDOMNSOLDIERS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTargetEvaluator_RandomNSoldiers* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTargetEvaluator_RandomNSoldiers*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETARGETEVALUATOR_RANDOMNSOLDIERS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
