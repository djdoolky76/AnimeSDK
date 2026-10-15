#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFEAHIKPKLO;
class LBOOCKEPGLN;
class PCBNCBNOAAE;
namespace RPG::Client { class CakeRaceBattleItemDataItem; }
namespace RPG::Client { class CakeRaceBattleItemSyncData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_CREATEBYNTFSYNCMESSAGE_OFFSET UNITYSDK_OFFSET(0xC9076F0)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_CREATEBYSNAPSHOTDATA_OFFSET UNITYSDK_OFFSET(0xC9077D0)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC9077A0)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GETBATTLEITEMS_OFFSET UNITYSDK_OFFSET(0xC907880)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GET_BATTLEITEMIDS_OFFSET UNITYSDK_OFFSET(0xC907E90)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GET_CDENDTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0xC907E70)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GET_ISCDREMAINING_OFFSET UNITYSDK_OFFSET(0xC907E50)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_SET_BATTLEITEMIDS_OFFSET UNITYSDK_OFFSET(0xC907EA0)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_SET_CDENDTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0xC907E80)
#define RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_SET_ISCDREMAINING_OFFSET UNITYSDK_OFFSET(0xC907E60)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceBattleItemSyncData_TypeDefinitionIndex = 63001;

	class CakeRaceBattleItemSyncData : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _BattleItemIDs_k__BackingField; // 0x10
		::System::Boolean _IsCdRemaining_k__BackingField; // 0x18
		::System::Byte _padding0[0x7];
		::System::UInt64 _CdEndTimeStampMs_k__BackingField; // 0x20
		::System::Void _ctor(::System::UInt64 a1, ::DFEAHIKPKLO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::DFEAHIKPKLO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::CakeRaceBattleItemSyncData* CreateByNtfSyncMessage(::LBOOCKEPGLN* a1)
		{
			return ((::RPG::Client::CakeRaceBattleItemSyncData*(*)(::LBOOCKEPGLN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_CREATEBYNTFSYNCMESSAGE_OFFSET))(a1);
		}

		static ::RPG::Client::CakeRaceBattleItemSyncData* CreateBySnapShotData(::System::UInt64 a1, ::PCBNCBNOAAE* a2)
		{
			return ((::RPG::Client::CakeRaceBattleItemSyncData*(*)(::System::UInt64, ::PCBNCBNOAAE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_CREATEBYSNAPSHOTDATA_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceBattleItemDataItem*>* GetBattleItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceBattleItemDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GETBATTLEITEMS_OFFSET))(this);
		}

		::System::Boolean get_IsCdRemaining()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GET_ISCDREMAINING_OFFSET))(this);
		}

		::System::Void set_IsCdRemaining(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_SET_ISCDREMAINING_OFFSET))(this, a1);
		}

		::System::UInt64 get_CdEndTimeStampMs()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GET_CDENDTIMESTAMPMS_OFFSET))(this);
		}

		::System::Void set_CdEndTimeStampMs(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_SET_CDENDTIMESTAMPMS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_BattleItemIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_GET_BATTLEITEMIDS_OFFSET))(this);
		}

		::System::Void set_BattleItemIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEBATTLEITEMSYNCDATA_SET_BATTLEITEMIDS_OFFSET))(this, a1);
		}

	};
}
