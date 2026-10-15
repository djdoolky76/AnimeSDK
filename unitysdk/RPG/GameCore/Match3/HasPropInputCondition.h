#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class HasPropInputCondition; }

#define RPG_GAMECORE_MATCH3_HASPROPINPUTCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84BC70)
#define RPG_GAMECORE_MATCH3_HASPROPINPUTCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D84BC80)
#define RPG_GAMECORE_MATCH3_HASPROPINPUTCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84BB70)

namespace RPG::GameCore::Match3
{
	class HasPropInputCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_HASPROPINPUTCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::HasPropInputCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::HasPropInputCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_HASPROPINPUTCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::HasPropInputCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::HasPropInputCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_HASPROPINPUTCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
