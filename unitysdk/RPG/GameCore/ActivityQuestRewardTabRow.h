#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityQuestRewardTabRow; }

#define RPG_GAMECORE_ACTIVITYQUESTREWARDTABROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D374AF0)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDTABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3744C0)

namespace RPG::GameCore
{
	class ActivityQuestRewardTabRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestTabList; // 0x10
		::System::UInt32 QuestTabGroupID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID QuestTabGroupName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDTABROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityQuestRewardTabRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityQuestRewardTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTREWARDTABROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
