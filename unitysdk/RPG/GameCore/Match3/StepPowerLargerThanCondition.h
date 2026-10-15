#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class StepPowerLargerThanCondition; }

#define RPG_GAMECORE_MATCH3_STEPPOWERLARGERTHANCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D851E70)
#define RPG_GAMECORE_MATCH3_STEPPOWERLARGERTHANCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D851E80)
#define RPG_GAMECORE_MATCH3_STEPPOWERLARGERTHANCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D851E20)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int StepPowerLargerThanCondition_TypeDefinitionIndex = 24892;

	class StepPowerLargerThanCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::UInt32 Power; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STEPPOWERLARGERTHANCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::StepPowerLargerThanCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::StepPowerLargerThanCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STEPPOWERLARGERTHANCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::StepPowerLargerThanCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::StepPowerLargerThanCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STEPPOWERLARGERTHANCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
