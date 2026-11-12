#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightShopRole; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS18_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDC56450)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS18_0__GETSHOPROLECOUNTBYID_B__0_OFFSET UNITYSDK_OFFSET(0xDC5B380)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop___c__DisplayClass18_0_TypeDefinitionIndex = 66938;

	class GridFightRoleShop___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS18_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetShopRoleCountByID_b__0(::RPG::Client::GridFightShopRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightShopRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS18_0__GETSHOPROLECOUNTBYID_B__0_OFFSET))(this, a1);
		}

	};
}
