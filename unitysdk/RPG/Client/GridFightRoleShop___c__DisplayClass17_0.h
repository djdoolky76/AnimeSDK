#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightShopRole; }

#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS17_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDC56350)
#define RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS17_0__GETSHOPROLECOUNTBYIDANDSTAR_B__0_OFFSET UNITYSDK_OFFSET(0xDC5B290)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleShop___c__DisplayClass17_0_TypeDefinitionIndex = 66937;

	class GridFightRoleShop___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10
		::System::UInt32 star; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS17_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetShopRoleCountByIDAndStar_b__0(::RPG::Client::GridFightShopRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightShopRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESHOP___C__DISPLAYCLASS17_0__GETSHOPROLECOUNTBYIDANDSTAR_B__0_OFFSET))(this, a1);
		}

	};
}
