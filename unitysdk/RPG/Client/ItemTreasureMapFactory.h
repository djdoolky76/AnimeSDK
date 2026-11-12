#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ItemTreasureMap; }

#define RPG_CLIENT_ITEMTREASUREMAPFACTORY_CANCREATE_OFFSET UNITYSDK_OFFSET(0xDDC2700)
#define RPG_CLIENT_ITEMTREASUREMAPFACTORY_TRYCREATE_OFFSET UNITYSDK_OFFSET(0xDDC2770)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemTreasureMapFactory_TypeDefinitionIndex = 67673;

	class ItemTreasureMapFactory : public ::System::Object
	{
	public:
		static ::System::Boolean CanCreate(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMTREASUREMAPFACTORY_CANCREATE_OFFSET))(a1);
		}

		static ::RPG::Client::ItemTreasureMap* TryCreate(::System::UInt32 a1)
		{
			return ((::RPG::Client::ItemTreasureMap*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMTREASUREMAPFACTORY_TRYCREATE_OFFSET))(a1);
		}

	};
}
