#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HPMCJCPNJEB;
namespace RPG::GameCore { class ActivityDiceCombatAIGroupRow; }

#define RPG_GAMECORE_ACTIVITYDICECOMBATAIGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D350AC0)
#define RPG_GAMECORE_ACTIVITYDICECOMBATAIGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3506C0)

namespace RPG::GameCore
{
	class ActivityDiceCombatAIGroupRow : public ::System::Object
	{
	public:
		::HPMCJCPNJEB* PrepareFinishWaitTimeRange; // 0x10
		::HPMCJCPNJEB* PrepareCancelWaitTimeRange; // 0x18
		::HPMCJCPNJEB* UseTacticsCardWaitTimeRange; // 0x20
		::HPMCJCPNJEB* BuyTacticsCardWaitTimeRange; // 0x28
		::HPMCJCPNJEB* ExchangeWaitTimeRange; // 0x30
		::HPMCJCPNJEB* SelectTimeRange; // 0x38
		::System::Single SelectWrongRate; // 0x40
		::System::UInt32 AIGroupID; // 0x44
		::System::Boolean CanUseTactics; // 0x48
		::System::Byte _padding0[0x3];
		::System::UInt32 RerollMaxDefend; // 0x4C
		::System::Single ColorfulDiceWeight; // 0x50
		::System::Single SkillWeight; // 0x54
		::System::UInt32 RerollMaxAttack; // 0x58
		::System::Single SpecialRuleWeight; // 0x5C
		::System::Single Quantile; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATAIGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityDiceCombatAIGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityDiceCombatAIGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATAIGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
