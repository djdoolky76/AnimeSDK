#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDEIAANGMDB;
namespace RPG::Client { class GridFightCostContext; }
namespace RPG::Client { class GridFightShopGood; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_CREATESHOPGOODBYDATA_OFFSET UNITYSDK_OFFSET(0x1E159320)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E158770)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_COSTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1E159D60)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_COST_OFFSET UNITYSDK_OFFSET(0x1E159D10)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_GOODINDEX_OFFSET UNITYSDK_OFFSET(0x1E159B80)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_HASGOODBELOW_OFFSET UNITYSDK_OFFSET(0x1E159EA0)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x1E159BF0)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_ISTRAITEFFECTRANKUP_OFFSET UNITYSDK_OFFSET(0x1E159FD0)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0x1E159E50)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_SOLD_OFFSET UNITYSDK_OFFSET(0x1E159BA0)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_ISSAMEIDENTITY_OFFSET UNITYSDK_OFFSET(0x1E159FF0)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_SET_GOODINDEX_OFFSET UNITYSDK_OFFSET(0x1E159B90)
#define RPG_CLIENT_GRIDFIGHTSHOPGOOD_SET_ISTRAITEFFECTRANKUP_OFFSET UNITYSDK_OFFSET(0x1E159FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopGood_TypeDefinitionIndex = 66944;

	class GridFightShopGood : public ::System::Object
	{
	public:
		::HDEIAANGMDB* _Goods; // 0x10
		::System::UInt32 _GoodIndex_k__BackingField; // 0x18
		::System::Boolean _IsTraitEffectRankUp_k__BackingField; // 0x1C
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

		::RPG::Client::GridFightCostContext* get_CostContext()
		{
			return ((::RPG::Client::GridFightCostContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_COSTCONTEXT_OFFSET))(this);
		}

		::System::String* get_ShopIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_SHOPICON_OFFSET))(this);
		}

		::System::Boolean get_HasGoodBelow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_HASGOODBELOW_OFFSET))(this);
		}

		::System::Boolean get_IsTraitEffectRankUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_GET_ISTRAITEFFECTRANKUP_OFFSET))(this);
		}

		::System::Void set_IsTraitEffectRankUp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_SET_ISTRAITEFFECTRANKUP_OFFSET))(this, a1);
		}

		static ::System::Boolean IsSameIdentity(::RPG::Client::GridFightShopGood* a1, ::HDEIAANGMDB* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightShopGood*, ::HDEIAANGMDB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPGOOD_ISSAMEIDENTITY_OFFSET))(a1, a2);
		}

	};
}
