#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightShopGood.h"
#include "unitysdk/RPG/Client/GridFightShopGoodType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightElationGoodsType.h"
class HDEIAANGMDB;
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightForgeConfig; }
namespace RPG::Client { class GridFightItemConfig; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_CTOR_OFFSET UNITYSDK_OFFSET(0xDC7B880)
#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_CONSUMABLEITEMDATA_OFFSET UNITYSDK_OFFSET(0xDC7BE30)
#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_ELATIONGOODTYPE_OFFSET UNITYSDK_OFFSET(0xDC7BFC0)
#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_EQUIPITEMDATA_OFFSET UNITYSDK_OFFSET(0xDC7BE20)
#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_FORGECONFIG_OFFSET UNITYSDK_OFFSET(0xDC7BE40)
#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_GOODDESC_OFFSET UNITYSDK_OFFSET(0xDC7BEE0)
#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0xDC7BD10)
#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_GOODTYPE_OFFSET UNITYSDK_OFFSET(0xDC7BF70)
#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_ISCONSUMABLE_OFFSET UNITYSDK_OFFSET(0xDC7BD80)
#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_ISEQUIP_OFFSET UNITYSDK_OFFSET(0xDC7BD30)
#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_ISFORGE_OFFSET UNITYSDK_OFFSET(0xDC7BDD0)
#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_ISUPGRADEGOOD_OFFSET UNITYSDK_OFFSET(0xDC7BFE0)
#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_ITEMCONFIG_OFFSET UNITYSDK_OFFSET(0xDC7BE50)
#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xDC7BD20)
#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDC7BE60)
#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0xDC7BF00)
#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_SET_ELATIONGOODTYPE_OFFSET UNITYSDK_OFFSET(0xDC7BFD0)
#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_SET_GOODDESC_OFFSET UNITYSDK_OFFSET(0xDC7BEF0)
#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_SET_ISUPGRADEGOOD_OFFSET UNITYSDK_OFFSET(0xDC7BFF0)
#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD__CREATECONSUMABLEITEMDATA_OFFSET UNITYSDK_OFFSET(0xDC7BB60)
#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD__CREATEEQUIPITEMDATA_OFFSET UNITYSDK_OFFSET(0xDC7BA00)
#define RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD__GETFORGECONFIG_OFFSET UNITYSDK_OFFSET(0xDC7BC60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopElationLaughPointGood_TypeDefinitionIndex = 66952;

	class GridFightShopElationLaughPointGood : public ::RPG::Client::GridFightShopGood
	{
	public:
		::RPG::Client::GridFightForgeConfig* _ForgeConfig_k__BackingField; // 0x20
		::RPG::Client::GridFightItemConfig* _ItemConfig_k__BackingField; // 0x28
		::RPG::Client::GridFightEquipItemData* _EquipItemData_k__BackingField; // 0x30
		::RPG::Client::GridFightConsumableItemData* _ConsumableItemData_k__BackingField; // 0x38
		::System::UInt32 _ItemID_k__BackingField; // 0x40
		::System::Boolean _IsUpgradeGood_k__BackingField; // 0x44
		::System::Byte _padding0[0x3];
		::System::UInt32 _GoodsID_k__BackingField; // 0x48
		::RPG::GameCore::GridFightElationGoodsType _ElationGoodType_k__BackingField; // 0x4C
		::RPG::Client::TextID _GoodDesc_k__BackingField; // 0x50
		::System::Void _ctor(::HDEIAANGMDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDEIAANGMDB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightEquipItemData* _CreateEquipItemData(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD__CREATEEQUIPITEMDATA_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightConsumableItemData* _CreateConsumableItemData(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD__CREATECONSUMABLEITEMDATA_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightForgeConfig* _GetForgeConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightForgeConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD__GETFORGECONFIG_OFFSET))(a1);
		}

		::System::UInt32 get_GoodsID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_GOODSID_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_ITEMID_OFFSET))(this);
		}

		::System::Boolean get_IsEquip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_ISEQUIP_OFFSET))(this);
		}

		::System::Boolean get_IsConsumable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_ISCONSUMABLE_OFFSET))(this);
		}

		::System::Boolean get_IsForge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_ISFORGE_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* get_EquipItemData()
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_EQUIPITEMDATA_OFFSET))(this);
		}

		::RPG::Client::GridFightConsumableItemData* get_ConsumableItemData()
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_CONSUMABLEITEMDATA_OFFSET))(this);
		}

		::RPG::Client::GridFightForgeConfig* get_ForgeConfig()
		{
			return ((::RPG::Client::GridFightForgeConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_FORGECONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightItemConfig* get_ItemConfig()
		{
			return ((::RPG::Client::GridFightItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_ITEMCONFIG_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_GoodDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_GOODDESC_OFFSET))(this);
		}

		::System::Void set_GoodDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_SET_GOODDESC_OFFSET))(this, a1);
		}

		::System::String* get_ShopIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_SHOPICON_OFFSET))(this);
		}

		::RPG::Client::GridFightShopGoodType get_GoodType()
		{
			return ((::RPG::Client::GridFightShopGoodType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_GOODTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GridFightElationGoodsType get_ElationGoodType()
		{
			return ((::RPG::GameCore::GridFightElationGoodsType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_ELATIONGOODTYPE_OFFSET))(this);
		}

		::System::Void set_ElationGoodType(::RPG::GameCore::GridFightElationGoodsType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightElationGoodsType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_SET_ELATIONGOODTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUpgradeGood()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_GET_ISUPGRADEGOOD_OFFSET))(this);
		}

		::System::Void set_IsUpgradeGood(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPELATIONLAUGHPOINTGOOD_SET_ISUPGRADEGOOD_OFFSET))(this, a1);
		}

	};
}
