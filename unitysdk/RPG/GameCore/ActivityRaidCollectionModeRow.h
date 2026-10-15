#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RaidCollectionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRaidCollectionModeRow; }

#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D379120)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D378AC0)

namespace RPG::GameCore
{
	class ActivityRaidCollectionModeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RaidCollectionGroupList; // 0x10
		::RPG::GameCore::RaidCollectionType RaidCollectionType; // 0x18
		::System::UInt32 RaidCollectionTabID; // 0x1C
		::RPG::Client::TextID RaidCollectionTabName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityRaidCollectionModeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityRaidCollectionModeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONMODEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
