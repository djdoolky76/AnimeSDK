#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRaidCollectionQuestRow; }

#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA93910)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA93230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidCollectionQuestRow_TypeDefinitionIndex = 12383;

	class ActivityRaidCollectionQuestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::RPG::Client::TextID QuestTabName; // 0x18
		::System::UInt32 QuestTabID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityRaidCollectionQuestRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityRaidCollectionQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
