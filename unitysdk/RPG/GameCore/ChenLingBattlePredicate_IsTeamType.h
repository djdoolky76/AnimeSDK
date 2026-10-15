#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattlePredicate.h"
#include "unitysdk/RPG/GameCore/ChenLingTeamSelectorType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class ChenLingBattlePredicate_IsTeamType; }

#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_ISTEAMTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5594A0)
#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_ISTEAMTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5594B0)
#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_ISTEAMTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D559450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattlePredicate_IsTeamType_TypeDefinitionIndex = 15813;

	class ChenLingBattlePredicate_IsTeamType : public ::RPG::GameCore::BaseChenLingBattlePredicate
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x10
		::RPG::GameCore::ChenLingTeamSelectorType TeamSelectorType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_ISTEAMTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattlePredicate_IsTeamType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattlePredicate_IsTeamType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_ISTEAMTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattlePredicate_IsTeamType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattlePredicate_IsTeamType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_ISTEAMTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
