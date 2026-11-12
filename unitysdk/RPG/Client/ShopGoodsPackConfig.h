#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class ShopGoodsPackConfig; }
namespace RPG::GameCore { class ShopGoodsConfigRow; }
namespace RPG::GameCore { class ShopGoodsPackConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SHOPGOODSPACKCONFIG_CCTOR_OFFSET UNITYSDK_OFFSET(0xEB27060)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xEB263A0)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GETCONFIGBYBUNDLEID_OFFSET UNITYSDK_OFFSET(0xEB266D0)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GETCONFIGBYCOMBOGOODID_OFFSET UNITYSDK_OFFSET(0xEB264F0)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xEB26640)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_BUNDLEGOODSID_OFFSET UNITYSDK_OFFSET(0xEB26820)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_BUNDLENAME_OFFSET UNITYSDK_OFFSET(0xEB26C40)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_BUNDLEPRICE_OFFSET UNITYSDK_OFFSET(0xEB26AA0)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOOD1NAME_OFFSET UNITYSDK_OFFSET(0xEB26DA0)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOOD2NAME_OFFSET UNITYSDK_OFFSET(0xEB26F00)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOODS1ORIGINALPRICE_OFFSET UNITYSDK_OFFSET(0xEB26B60)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOODS2ORIGINALPRICE_OFFSET UNITYSDK_OFFSET(0xEB26BD0)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOODSID1_OFFSET UNITYSDK_OFFSET(0xEB26870)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOODSID2_OFFSET UNITYSDK_OFFSET(0xEB26960)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_DISCOUNT_OFFSET UNITYSDK_OFFSET(0xEB26A10)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_HASDISCOUNT_OFFSET UNITYSDK_OFFSET(0xEB269B0)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_ITEM1ID_OFFSET UNITYSDK_OFFSET(0xEB268C0)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_ITEM2ID_OFFSET UNITYSDK_OFFSET(0xEB26910)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_ORIGINALPRICE_OFFSET UNITYSDK_OFFSET(0xEB26B10)
#define RPG_CLIENT_SHOPGOODSPACKCONFIG__READCONFIGS_OFFSET UNITYSDK_OFFSET(0xEB25FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ShopGoodsPackConfig_TypeDefinitionIndex = 69894;

	class ShopGoodsPackConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::ShopGoodsConfigRow* _Combo2Row; // 0x10
		::RPG::GameCore::ShopGoodsConfigRow* _BundleRow; // 0x18
		::RPG::GameCore::ShopGoodsConfigRow* _Combo1Row; // 0x20
		::RPG::GameCore::ShopGoodsPackConfigRow* _Row; // 0x28
		static ::System::Collections::Generic::List_1<::RPG::GameCore::ShopGoodsPackConfigRow*>** StaticGet__Configs()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::ShopGoodsPackConfigRow*>**)UnitySDK::FromName("RPG.Client", "ShopGoodsPackConfig")->GetStaticField(0x73640);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ShopGoodsPackConfig*>** StaticGet__PackConfigByComboGoodID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ShopGoodsPackConfig*>**)UnitySDK::FromName("RPG.Client", "ShopGoodsPackConfig")->GetStaticField(0x73648);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ShopGoodsPackConfig*>** StaticGet__PackConfigByGoodID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ShopGoodsPackConfig*>**)UnitySDK::FromName("RPG.Client", "ShopGoodsPackConfig")->GetStaticField(0x73650);
		}

		::System::Void _ctor(::RPG::GameCore::ShopGoodsPackConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ShopGoodsPackConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_CCTOR_OFFSET))();
		}

		static ::System::Void _ReadConfigs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG__READCONFIGS_OFFSET))();
		}

		static ::RPG::Client::ShopGoodsPackConfig* GetConfigByComboGoodID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ShopGoodsPackConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GETCONFIGBYCOMBOGOODID_OFFSET))(a1);
		}

		static ::RPG::Client::ShopGoodsPackConfig* GetConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::ShopGoodsPackConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GETCONFIG_OFFSET))(a1);
		}

		static ::RPG::Client::ShopGoodsPackConfig* GetConfigByBundleID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ShopGoodsPackConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GETCONFIGBYBUNDLEID_OFFSET))(a1);
		}

		::System::UInt32 get_BundleGoodsID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_BUNDLEGOODSID_OFFSET))(this);
		}

		::System::UInt32 get_ComboGoodsID1()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOODSID1_OFFSET))(this);
		}

		::System::UInt32 get_Item1ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_ITEM1ID_OFFSET))(this);
		}

		::System::UInt32 get_Item2ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_ITEM2ID_OFFSET))(this);
		}

		::System::UInt32 get_ComboGoodsID2()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOODSID2_OFFSET))(this);
		}

		::System::Boolean get_HasDiscount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_HASDISCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_Discount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_DISCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_BundlePrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_BUNDLEPRICE_OFFSET))(this);
		}

		::System::UInt32 get_OriginalPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_ORIGINALPRICE_OFFSET))(this);
		}

		::System::UInt32 get_ComboGoods1OriginalPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOODS1ORIGINALPRICE_OFFSET))(this);
		}

		::System::UInt32 get_ComboGoods2OriginalPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOODS2ORIGINALPRICE_OFFSET))(this);
		}

		::RPG::Client::TextID get_BundleName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_BUNDLENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_ComboGood1Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOOD1NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_ComboGood2Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPGOODSPACKCONFIG_GET_COMBOGOOD2NAME_OFFSET))(this);
		}

	};
}
