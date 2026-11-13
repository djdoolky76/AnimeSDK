#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMOIPALHBJN;
class NJHFBDDHCEN;
class NNFFGHJKPJD;
namespace RPG::Client::PixAir { class PixAirEquipShopData; }
namespace RPG::Client::PixAir { class PixAirEquipShopInfo; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E360C10)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_GET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x1E360B50)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_GET_REFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x1E360B70)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1E360B30)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_GET_TOTALREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x1E360B90)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1E3602D0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_SET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x1E360B60)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_SET_REFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x1E360B80)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_SET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1E360B40)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x1E360310)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0x1E360A30)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER__REFRESHGOODSLIST_OFFSET UNITYSDK_OFFSET(0x1E360400)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipShopManager_TypeDefinitionIndex = 82150;

	class PixAirEquipShopManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipShopData*>* CurrentGoodsList; // 0x10
		::RPG::Client::PixAir::PixAirEquipShopInfo* ShopInfo; // 0x18
		::System::UInt32 _RefreshTimes_k__BackingField; // 0x20
		::System::UInt32 _RefreshCost_k__BackingField; // 0x24
		::System::UInt32 _ShopID_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_INIT_OFFSET))(this);
		}

		::System::Void SyncUpdate(::NNFFGHJKPJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNFFGHJKPJD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_SYNCUPDATE_OFFSET))(this, a1);
		}

		::System::Void Sync(::BMOIPALHBJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMOIPALHBJN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_SYNC_OFFSET))(this, a1);
		}

		::System::Void _RefreshGoodsList(::System::Collections::Generic::IList_1<::NJHFBDDHCEN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::NJHFBDDHCEN*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER__REFRESHGOODSLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_ShopID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_GET_SHOPID_OFFSET))(this);
		}

		::System::Void set_ShopID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_SET_SHOPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RefreshCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_GET_REFRESHCOST_OFFSET))(this);
		}

		::System::Void set_RefreshCost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_SET_REFRESHCOST_OFFSET))(this, a1);
		}

		::System::UInt32 get_RefreshTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_GET_REFRESHTIMES_OFFSET))(this);
		}

		::System::Void set_RefreshTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_SET_REFRESHTIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalRefreshCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_GET_TOTALREFRESHCOUNT_OFFSET))(this);
		}

	};
}
