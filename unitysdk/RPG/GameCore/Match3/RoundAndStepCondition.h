#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class RoundAndStepCondition; }

#define RPG_GAMECORE_MATCH3_ROUNDANDSTEPCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84D730)
#define RPG_GAMECORE_MATCH3_ROUNDANDSTEPCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D84D740)
#define RPG_GAMECORE_MATCH3_ROUNDANDSTEPCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8503E0)

namespace RPG::GameCore::Match3
{
	class RoundAndStepCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::UInt32 TargetRound; // 0x18
		::System::UInt32 TargetStep; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDANDSTEPCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::RoundAndStepCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::RoundAndStepCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDANDSTEPCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::RoundAndStepCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::RoundAndStepCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDANDSTEPCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
