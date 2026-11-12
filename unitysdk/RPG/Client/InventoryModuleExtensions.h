#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class InventoryModule; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class ItemDisplayData; }

#define RPG_CLIENT_INVENTORYMODULEEXTENSIONS_GETITEMDATABYITEMDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xDDA7090)

namespace RPG::Client
{
	inline static constexpr unsigned int InventoryModuleExtensions_TypeDefinitionIndex = 67617;

	class InventoryModuleExtensions : public ::System::Object
	{
	public:
		static ::RPG::Client::ItemData* GetItemDataByItemDisplayData(::RPG::Client::InventoryModule* a1, ::RPG::Client::ItemDisplayData* a2)
		{
			return ((::RPG::Client::ItemData*(*)(::RPG::Client::InventoryModule*, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INVENTORYMODULEEXTENSIONS_GETITEMDATABYITEMDISPLAYDATA_OFFSET))(a1, a2);
		}

	};
}
