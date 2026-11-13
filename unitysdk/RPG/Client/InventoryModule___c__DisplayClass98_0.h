#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ConvertibleItemData; }

#define RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS98_0_CTOR_OFFSET UNITYSDK_OFFSET(0x17085A70)
#define RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS98_0__GETCONVERTIBLEITEMDATABYITEMID_B__0_OFFSET UNITYSDK_OFFSET(0x170913F0)

namespace RPG::Client
{
	inline static constexpr unsigned int InventoryModule___c__DisplayClass98_0_TypeDefinitionIndex = 67616;

	class InventoryModule___c__DisplayClass98_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS98_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetConvertibleItemDataByItemID_b__0(::RPG::Client::ConvertibleItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ConvertibleItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULE___C__DISPLAYCLASS98_0__GETCONVERTIBLEITEMDATABYITEMID_B__0_OFFSET))(this, a1);
		}

	};
}
