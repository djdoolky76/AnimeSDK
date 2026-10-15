#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class RoundCondition; }

#define RPG_GAMECORE_MATCH3_ROUNDCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84D880)
#define RPG_GAMECORE_MATCH3_ROUNDCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D84D890)
#define RPG_GAMECORE_MATCH3_ROUNDCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D850430)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int RoundCondition_TypeDefinitionIndex = 24884;

	class RoundCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::UInt32 TargetRound; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::RoundCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::RoundCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::RoundCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::RoundCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ROUNDCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
