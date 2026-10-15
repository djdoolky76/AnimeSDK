#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityQuestRewardDataRow; }

#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3461B0)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D345B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityQuestRewardDataRow_TypeDefinitionIndex = 12307;

	class ActivityQuestRewardDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 ActivityModuleID; // 0x18
		::System::UInt32 QuestTabID; // 0x1C
		::System::UInt32 UnlockQuest; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID QuestTabName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityQuestRewardDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityQuestRewardDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
