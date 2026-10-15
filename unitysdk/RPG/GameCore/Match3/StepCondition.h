#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class StepCondition; }

#define RPG_GAMECORE_MATCH3_STEPCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D851D10)
#define RPG_GAMECORE_MATCH3_STEPCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D851D20)
#define RPG_GAMECORE_MATCH3_STEPCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D851CC0)

namespace RPG::GameCore::Match3
{
	class StepCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::UInt32 TargetStep; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STEPCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::StepCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::StepCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STEPCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::StepCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::StepCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STEPCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
