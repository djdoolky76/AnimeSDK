#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattlePredicate.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattlePredicate_TargetHasBuff; }

#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_TARGETHASBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D587060)
#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_TARGETHASBUFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D587070)
#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_TARGETHASBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D587010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattlePredicate_TargetHasBuff_TypeDefinitionIndex = 15812;

	class ChenLingBattlePredicate_TargetHasBuff : public ::RPG::GameCore::BaseChenLingBattlePredicate
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x10
		::RPG::GameCore::ChenLingBattleBuffType BuffType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::BaseChenLingBattleValueGetter* StackCount; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_TARGETHASBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattlePredicate_TargetHasBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattlePredicate_TargetHasBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_TARGETHASBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattlePredicate_TargetHasBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattlePredicate_TargetHasBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_TARGETHASBUFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
