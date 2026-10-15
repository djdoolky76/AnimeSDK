#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class RoundAfterCondition; }

#define RPG_GAMECORE_MATCH3_ROUNDAFTERCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84D620)
#define RPG_GAMECORE_MATCH3_ROUNDAFTERCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D84D630)
#define RPG_GAMECORE_MATCH3_ROUNDAFTERCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D850390)

namespace RPG::GameCore::Match3
{
	class RoundAfterCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::UInt32 TargetRound; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDAFTERCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::RoundAfterCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::RoundAfterCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDAFTERCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::RoundAfterCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::RoundAfterCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDAFTERCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
