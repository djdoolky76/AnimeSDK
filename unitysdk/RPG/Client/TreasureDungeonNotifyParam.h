#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENGHACADBKI;
namespace RPG::Client { class TreasureDungeonBaseGrid; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TREASUREDUNGEONNOTIFYPARAM_CLEARTUTORIAL_OFFSET UNITYSDK_OFFSET(0xED993A0)
#define RPG_CLIENT_TREASUREDUNGEONNOTIFYPARAM_CLEAR_OFFSET UNITYSDK_OFFSET(0xED90470)
#define RPG_CLIENT_TREASUREDUNGEONNOTIFYPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xED909A0)
#define RPG_CLIENT_TREASUREDUNGEONNOTIFYPARAM_GET_ISGETCHEST_OFFSET UNITYSDK_OFFSET(0xED99410)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonNotifyParam_TypeDefinitionIndex = 70135;

	class TreasureDungeonNotifyParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* EmptyChangedGrids; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* NewFlippedGridList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureDungeonBaseGrid*>* TypeChangedGrids; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* TriggeredTutorialKeys; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* RefreshedGridIDs; // 0x30
		::System::Collections::Generic::List_1<::ENGHACADBKI*>* RecordData; // 0x38
		::System::Boolean IsExplorePointUpdated; // 0x40
		::System::Boolean IsGetUltraItem; // 0x41
		::System::Boolean IsMapUpdated; // 0x42
		::System::Boolean IsTeamUpdated; // 0x43
		::System::UInt32 GotChestItemID; // 0x44
		::System::UInt32 GotChestGridIndex; // 0x48
		::System::Boolean IsGetNewFloorBuff; // 0x4C
		::System::Boolean IsItemUpdated; // 0x4D
		::System::Boolean IsBuffUpdated; // 0x4E
		::System::Boolean IsFloorUpdated; // 0x4F
		::System::Boolean IsGetNewEnvBuff; // 0x50
		::System::Boolean IsFloorBuffReplaced; // 0x51
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONNOTIFYPARAM_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONNOTIFYPARAM_CLEAR_OFFSET))(this);
		}

		::System::Void ClearTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONNOTIFYPARAM_CLEARTUTORIAL_OFFSET))(this);
		}

		::System::Boolean get_IsGetChest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONNOTIFYPARAM_GET_ISGETCHEST_OFFSET))(this);
		}

	};
}
