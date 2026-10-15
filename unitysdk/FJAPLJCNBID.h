#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::GameCore { class RogueMagicScepterRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FJAPLJCNBID_CTOR_1_OFFSET UNITYSDK_OFFSET(0x157B6790)
#define FJAPLJCNBID_CTOR_OFFSET UNITYSDK_OFFSET(0x157B6590)
#define FJAPLJCNBID_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157B6BB0)
#define FJAPLJCNBID_GETALLSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x157B6CC0)
#define FJAPLJCNBID_GETLOCKEDUNITS_OFFSET UNITYSDK_OFFSET(0x157B6C80)
#define FJAPLJCNBID_GETSLOTUNITDATAITEM_OFFSET UNITYSDK_OFFSET(0x157B6D90)
#define FJAPLJCNBID_GETSLOTUNITUID_OFFSET UNITYSDK_OFFSET(0x157B6D40)

inline static constexpr unsigned int FJAPLJCNBID_TypeDefinitionIndex = 67418;

	class FJAPLJCNBID : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* MHCEPJECNGO; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMagicMountType, ::System::UInt32>* BKADBEIPNJC; // 0x18
		::System::Void _ctor(::RPG::GameCore::RogueMagicScepterRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterRow*))((::PBYTE)hIl2Cpp + FJAPLJCNBID_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::GameCore::RogueMagicScepterRow* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + FJAPLJCNBID_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJAPLJCNBID_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetLockedUnits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJAPLJCNBID_GETLOCKEDUNITS_OFFSET))(this);
		}

		::System::UInt32 GetAllSlotCount(::RPG::GameCore::RogueMagicMountType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType))((::PBYTE)hIl2Cpp + FJAPLJCNBID_GETALLSLOTCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSlotUnitUID(::RPG::GameCore::RogueMagicMountType a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType, ::System::UInt32))((::PBYTE)hIl2Cpp + FJAPLJCNBID_GETSLOTUNITUID_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RogueMagicUnitDataItem* GetSlotUnitDataItem(::RPG::GameCore::RogueMagicMountType a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType, ::System::UInt32))((::PBYTE)hIl2Cpp + FJAPLJCNBID_GETSLOTUNITDATAITEM_OFFSET))(this, a1, a2);
		}

	};
