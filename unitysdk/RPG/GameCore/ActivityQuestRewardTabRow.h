#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityQuestRewardTabRow; }

#define RPG_GAMECORE_ACTIVITYQUESTREWARDTABROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D347020)
#define RPG_GAMECORE_ACTIVITYQUESTREWARDTABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3469F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityQuestRewardTabRow_TypeDefinitionIndex = 12305;

	class ActivityQuestRewardTabRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestTabList; // 0x10
		::RPG::Client::TextID QuestTabGroupName; // 0x18
		::System::UInt32 QuestTabGroupID; // 0x28
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
