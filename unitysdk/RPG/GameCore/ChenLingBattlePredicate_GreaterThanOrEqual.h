#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattlePredicate.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattlePredicate_GreaterThanOrEqual; }

#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_GREATERTHANOREQUAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D586B20)
#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_GREATERTHANOREQUAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D586B30)
#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_GREATERTHANOREQUAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D586AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattlePredicate_GreaterThanOrEqual_TypeDefinitionIndex = 15811;

	class ChenLingBattlePredicate_GreaterThanOrEqual : public ::RPG::GameCore::BaseChenLingBattlePredicate
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Value1; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Value2; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_GREATERTHANOREQUAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattlePredicate_GreaterThanOrEqual* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattlePredicate_GreaterThanOrEqual*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_GREATERTHANOREQUAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattlePredicate_GreaterThanOrEqual* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattlePredicate_GreaterThanOrEqual*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_GREATERTHANOREQUAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
