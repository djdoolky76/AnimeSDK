#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityQuestTabGroupUIRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYQUESTTABGROUPUIROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D374C80)
#define RPG_GAMECORE_ACTIVITYQUESTTABGROUPUIROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D374B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityQuestTabGroupUIRow_TypeDefinitionIndex = 12309;

	class ActivityQuestTabGroupUIRow : public ::System::Object
	{
	public:
		::System::String* BgPrefabPath; // 0x10
		::System::String* TabItemPrefabPath; // 0x18
		::System::UInt32 QuestTabGroupID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTABGROUPUIROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityQuestTabGroupUIRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityQuestTabGroupUIRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYQUESTTABGROUPUIROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
