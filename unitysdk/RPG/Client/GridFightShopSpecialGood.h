#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightShopGood.h"
#include "unitysdk/RPG/Client/GridFightShopGoodType.h"
class ELJOHIOHPMJ;
class HDEIAANGMDB;
namespace RPG::GameCore { class GridFightSpecialGoodsConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E159A50)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_COST_OFFSET UNITYSDK_OFFSET(0x1E15CC70)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1E15CD20)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_GOODTYPE_OFFSET UNITYSDK_OFFSET(0x1E15D290)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_ISCOSTCHANGED_OFFSET UNITYSDK_OFFSET(0x1E15D100)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_ISUPPERGOOD_OFFSET UNITYSDK_OFFSET(0x1E15D0A0)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E15CFA0)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1E15D040)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0x1E15CCC0)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_SPECIALGOODSID_OFFSET UNITYSDK_OFFSET(0x1E15A490)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD__GETDESC_OFFSET UNITYSDK_OFFSET(0x1E15CD70)
#define RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD__GETLOWERCONFIGROW_OFFSET UNITYSDK_OFFSET(0x1E15D200)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopSpecialGood_TypeDefinitionIndex = 66948;

	class GridFightShopSpecialGood : public ::RPG::Client::GridFightShopGood
	{
	public:
		::ELJOHIOHPMJ* _GoodSpecial; // 0x20
		::RPG::GameCore::GridFightSpecialGoodsConfigRow* _ConfigRow; // 0x28
		::System::Void _ctor(::HDEIAANGMDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDEIAANGMDB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_SpecialGoodsId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_SPECIALGOODSID_OFFSET))(this);
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_COST_OFFSET))(this);
		}

		::System::String* get_ShopIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_SHOPICON_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_DESC_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_RARITY_OFFSET))(this);
		}

		::System::Boolean get_IsUpperGood()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_ISUPPERGOOD_OFFSET))(this);
		}

		::System::Boolean get_IsCostChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_ISCOSTCHANGED_OFFSET))(this);
		}

		::System::String* _GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD__GETDESC_OFFSET))(this);
		}

		::RPG::GameCore::GridFightSpecialGoodsConfigRow* _GetLowerConfigRow()
		{
			return ((::RPG::GameCore::GridFightSpecialGoodsConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD__GETLOWERCONFIGROW_OFFSET))(this);
		}

		::RPG::Client::GridFightShopGoodType get_GoodType()
		{
			return ((::RPG::Client::GridFightShopGoodType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPSPECIALGOOD_GET_GOODTYPE_OFFSET))(this);
		}

	};
}
