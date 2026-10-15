#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDEIAANGMDB;
namespace RPG::Client { class GridFightShopGood; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_CREATESHOPGOODBYDATA_OFFSET UNITYSDK_OFFSET(0xD25A4B0)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_CTOR_OFFSET UNITYSDK_OFFSET(0xD275C60)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_COST_OFFSET UNITYSDK_OFFSET(0xD257100)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_GOODINDEX_OFFSET UNITYSDK_OFFSET(0xD275C70)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xD275C90)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0xD275DB0)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_SOLD_OFFSET UNITYSDK_OFFSET(0xD25B250)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_SET_GOODINDEX_OFFSET UNITYSDK_OFFSET(0xD275C80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopGood_TypeDefinitionIndex = 65237;

	class GridFightShopGood : public ::System::Object
	{
	public:
		::HDEIAANGMDB* _Goods; // 0x10
		::System::UInt32 _GoodIndex_k__BackingField; // 0x18
		::System::Void _ctor(::HDEIAANGMDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDEIAANGMDB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightShopGood* CreateShopGoodByData(::HDEIAANGMDB* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightShopGood*(*)(::HDEIAANGMDB*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_CREATESHOPGOODBYDATA_OFFSET))(a1, a2);
		}

		::System::UInt32 get_GoodIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_GOODINDEX_OFFSET))(this);
		}

		::System::Void set_GoodIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_SET_GOODINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_Sold()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_SOLD_OFFSET))(this);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_ISLOCKED_OFFSET))(this);
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_COST_OFFSET))(this);
		}

		::System::String* get_ShopIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_SHOPICON_OFFSET))(this);
		}

	};
}
