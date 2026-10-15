#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRaidCollectionGroupRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D349910)
#define RPG_GAMECORE_ACTIVITYRAIDCOLLECTIONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D348C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRaidCollectionGroupRow_TypeDefinitionIndex = 12322;

	class ActivityRaidCollectionGroupRow : public ::System::Object
	{
	public:
		::System::String* GroupEntrancePrefabPath; // 0x10
		::Il2CppArray<::System::UInt32>* RaidCollectionList; // 0x18
		::System::UInt32 UnlockGroupID; // 0x20
		::System::Boolean RaidCollectionGroupNextEnable; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 RaidCollectionGroupID; // 0x28
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID RaidCollectionGroupName; // 0x30
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
