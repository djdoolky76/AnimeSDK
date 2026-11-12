#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Pet { class IPetInstance; }
namespace RPG::Client::Pet { class PetModule; }

#define RPG_CLIENT_PET_IPETINSTANCEEXTENSIONS_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xE509190)
#define RPG_CLIENT_PET_IPETINSTANCEEXTENSIONS_ISLOCKEDBYTRADEORDER_OFFSET UNITYSDK_OFFSET(0xE5092B0)
#define RPG_CLIENT_PET_IPETINSTANCEEXTENSIONS_ISOWNED_OFFSET UNITYSDK_OFFSET(0xE508D90)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int IPetInstanceExtensions_TypeDefinitionIndex = 77975;

	class IPetInstanceExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsOwned(::RPG::Client::Pet::IPetInstance* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::IPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_IPETINSTANCEEXTENSIONS_ISOWNED_OFFSET))(a1);
		}

		static ::System::Boolean IsLockedByTradeOrder(::RPG::Client::Pet::IPetInstance* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::IPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_IPETINSTANCEEXTENSIONS_ISLOCKEDBYTRADEORDER_OFFSET))(a1);
		}

		static ::RPG::Client::Pet::PetModule* get__Module()
		{
			return ((::RPG::Client::Pet::PetModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_IPETINSTANCEEXTENSIONS_GET__MODULE_OFFSET))();
		}

	};
}
