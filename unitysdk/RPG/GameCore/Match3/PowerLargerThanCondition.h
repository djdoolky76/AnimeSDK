#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class PowerLargerThanCondition; }

#define RPG_GAMECORE_MATCH3_POWERLARGERTHANCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84D440)
#define RPG_GAMECORE_MATCH3_POWERLARGERTHANCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D84D450)
#define RPG_GAMECORE_MATCH3_POWERLARGERTHANCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84F9E0)

namespace RPG::GameCore::Match3
{
	class PowerLargerThanCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::UInt32 Power; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_POWERLARGERTHANCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::PowerLargerThanCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::PowerLargerThanCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_POWERLARGERTHANCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::PowerLargerThanCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::PowerLargerThanCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_POWERLARGERTHANCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
