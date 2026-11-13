#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/RechargeGiftStatus.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class JBNGCJJDLHL;
namespace RPG::Client { class Product; }
namespace RPG::Client { class RechargeGiftData; }
namespace RPG::Client { class RechargeGiftRewardData; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RechargeGiftConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_RECHARGEGIFTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1D070560)
#define RPG_CLIENT_RECHARGEGIFTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D070600)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_COLLECTEDREWARDITEMS_OFFSET UNITYSDK_OFFSET(0x1D06FAD0)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_DISCOUNT_OFFSET UNITYSDK_OFFSET(0x1D070140)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_GIFTTYPE_OFFSET UNITYSDK_OFFSET(0x1D0700F0)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_HIDEREDDOT_OFFSET UNITYSDK_OFFSET(0x1D06FAB0)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_ISPRODUCTINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1D06FEC0)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_ISREWARDINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1D06FF20)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTBUYTIMES_OFFSET UNITYSDK_OFFSET(0x1D0703C0)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTENDTIME_OFFSET UNITYSDK_OFFSET(0x1D070270)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0x1D0702F0)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTLOCALIZEDTITLE_OFFSET UNITYSDK_OFFSET(0x1D070350)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTMAXBUYTIMES_OFFSET UNITYSDK_OFFSET(0x1D070410)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTORIGINALPRICE_OFFSET UNITYSDK_OFFSET(0x1D070200)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTSHOWPRICE_OFFSET UNITYSDK_OFFSET(0x1D070190)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0x1D070460)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_REWARDENDTIME_OFFSET UNITYSDK_OFFSET(0x1D06FAA0)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_REWARDOFDAY_OFFSET UNITYSDK_OFFSET(0x1D06FAC0)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1D06FAE0)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET__DISPLAYPRODUCTREF_OFFSET UNITYSDK_OFFSET(0x1D06FA80)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET__GIFTROW_OFFSET UNITYSDK_OFFSET(0x1D06FA60)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET__ISBANNED_OFFSET UNITYSDK_OFFSET(0x1D06FE20)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET__ISPRODUCTSOLDOUT_OFFSET UNITYSDK_OFFSET(0x1D070060)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET__PRODUCTREF_OFFSET UNITYSDK_OFFSET(0x1D06FA70)
#define RPG_CLIENT_RECHARGEGIFTDATA_GET__REWARDREF_OFFSET UNITYSDK_OFFSET(0x1D06FA90)
#define RPG_CLIENT_RECHARGEGIFTDATA_HANDLEFEATURESWITCHED_OFFSET UNITYSDK_OFFSET(0x1D071610)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeGiftData_TypeDefinitionIndex = 68728;

	class RechargeGiftData : public ::System::Object
	{
	public:
		::JBNGCJJDLHL* __RewardRef_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* _CollectedRewardItems_k__BackingField; // 0x18
		::RPG::GameCore::RechargeGiftConfigRow* __GiftRow_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*>* _RewardOfDay_k__BackingField; // 0x28
		::RPG::Client::Product* __DisplayProductRef_k__BackingField; // 0x30
		::RPG::Client::Product* __ProductRef_k__BackingField; // 0x38
		::RPG::Client::DateTimePro _RewardEndTime_k__BackingField; // 0x40
		::System::Nullable_1<::System::Boolean> _CachedIsBanned; // 0x48
		::System::Boolean _HideReddot_k__BackingField; // 0x4A
		::System::Void _ctor(::RPG::GameCore::RechargeGiftConfigRow* a1, ::RPG::Client::Product* a2, ::JBNGCJJDLHL* a3, ::RPG::Client::Product* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RechargeGiftConfigRow*, ::RPG::Client::Product*, ::JBNGCJJDLHL*, ::RPG::Client::Product*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::RechargeGiftConfigRow* get__GiftRow()
		{
			return ((::RPG::GameCore::RechargeGiftConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET__GIFTROW_OFFSET))(this);
		}

		::RPG::Client::Product* get__ProductRef()
		{
			return ((::RPG::Client::Product*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET__PRODUCTREF_OFFSET))(this);
		}

		::RPG::Client::Product* get__DisplayProductRef()
		{
			return ((::RPG::Client::Product*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET__DISPLAYPRODUCTREF_OFFSET))(this);
		}

		::JBNGCJJDLHL* get__RewardRef()
		{
			return ((::JBNGCJJDLHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET__REWARDREF_OFFSET))(this);
		}

		::RPG::Client::DateTimePro get_RewardEndTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_REWARDENDTIME_OFFSET))(this);
		}

		::System::Boolean get_HideReddot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_HIDEREDDOT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*>* get_RewardOfDay()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RechargeGiftRewardData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_REWARDOFDAY_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_CollectedRewardItems()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_COLLECTEDREWARDITEMS_OFFSET))(this);
		}

		::RPG::Client::RechargeGiftStatus get_Status()
		{
			return ((::RPG::Client::RechargeGiftStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_STATUS_OFFSET))(this);
		}

		::System::UInt32 get_GiftType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_GIFTTYPE_OFFSET))(this);
		}

		::System::Single get_Discount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_DISCOUNT_OFFSET))(this);
		}

		::System::String* get_ProductShowPrice()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTSHOWPRICE_OFFSET))(this);
		}

		::System::String* get_ProductOriginalPrice()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTORIGINALPRICE_OFFSET))(this);
		}

		::System::Boolean get_IsProductInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_ISPRODUCTINSCHEDULE_OFFSET))(this);
		}

		::RPG::Client::DateTimePro get_ProductEndTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTENDTIME_OFFSET))(this);
		}

		::System::String* get_ProductID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTID_OFFSET))(this);
		}

		::System::String* get_ProductLocalizedTitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTLOCALIZEDTITLE_OFFSET))(this);
		}

		::System::UInt32 get_ProductBuyTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTBUYTIMES_OFFSET))(this);
		}

		::System::UInt32 get_ProductMaxBuyTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTMAXBUYTIMES_OFFSET))(this);
		}

		::System::Boolean get__IsProductSoldOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET__ISPRODUCTSOLDOUT_OFFSET))(this);
		}

		::System::Nullable_1<::System::UInt32> get_ProductVersion()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_PRODUCTVERSION_OFFSET))(this);
		}

		::System::Boolean get_IsRewardInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET_ISREWARDINSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get__IsBanned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_GET__ISBANNED_OFFSET))(this);
		}

		static ::RPG::Client::RechargeGiftData* Create(::System::UInt32 a1, ::RPG::Client::Product* a2, ::JBNGCJJDLHL* a3, ::RPG::Client::Product* a4)
		{
			return ((::RPG::Client::RechargeGiftData*(*)(::System::UInt32, ::RPG::Client::Product*, ::JBNGCJJDLHL*, ::RPG::Client::Product*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void HandleFeatureSwitched()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGEGIFTDATA_HANDLEFEATURESWITCHED_OFFSET))(this);
		}

	};
}
