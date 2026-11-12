#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OptionalRewardQuestRow; }

#define RPG_GAMECORE_OPTIONALREWARDQUESTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAFF150)
#define RPG_GAMECORE_OPTIONALREWARDQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EAFEB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OptionalRewardQuestRow_TypeDefinitionIndex = 14733;

	class OptionalRewardQuestRow : public ::System::Object
	{
	public:
		::System::UInt32 QuestID; // 0x10
		::System::UInt32 OptionalGiftItemID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONALREWARDQUESTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::OptionalRewardQuestRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OptionalRewardQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONALREWARDQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
