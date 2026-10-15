#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityDiceRuleGroupRow; }

#define RPG_GAMECORE_ACTIVITYDICERULEGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3261F0)
#define RPG_GAMECORE_ACTIVITYDICERULEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3260B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceRuleGroupRow_TypeDefinitionIndex = 11272;

	class ActivityDiceRuleGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RuleList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICERULEGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityDiceRuleGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityDiceRuleGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICERULEGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
