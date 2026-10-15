#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRaidCollectionGroupRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3773E0)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3766E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidCollectionGroupRow_TypeDefinitionIndex = 12322;

	class ActivityRaidCollectionGroupRow : public ::System::Object
	{
	public:
		::System::String* GroupEntrancePrefabPath; // 0x10
		::Il2CppArray<::System::UInt32>* RaidCollectionList; // 0x18
		::RPG::Client::TextID RaidCollectionGroupName; // 0x20
		::System::Boolean RaidCollectionGroupNextEnable; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 UnlockGroupID; // 0x34
		::System::UInt32 RaidCollectionGroupID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityRaidCollectionGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityRaidCollectionGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
