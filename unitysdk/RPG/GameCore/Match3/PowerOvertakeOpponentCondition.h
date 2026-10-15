#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class PowerOvertakeOpponentCondition; }

#define RPG_GAMECORE_MATCH3_POWEROVERTAKEOPPONENTCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81FB60)
#define RPG_GAMECORE_MATCH3_POWEROVERTAKEOPPONENTCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D81FB70)
#define RPG_GAMECORE_MATCH3_POWEROVERTAKEOPPONENTCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D822040)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int PowerOvertakeOpponentCondition_TypeDefinitionIndex = 24891;

	class PowerOvertakeOpponentCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_POWEROVERTAKEOPPONENTCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::PowerOvertakeOpponentCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::PowerOvertakeOpponentCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_POWEROVERTAKEOPPONENTCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::PowerOvertakeOpponentCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::PowerOvertakeOpponentCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_POWEROVERTAKEOPPONENTCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
