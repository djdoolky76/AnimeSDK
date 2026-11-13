#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Pet { class IPetInstance; }
namespace RPG::Client::Pet { class PetModule; }

#define RPG_CLIENT_PET_IPETINSTANCEEXTENSIONS_GET__MODULE_OFFSET UNITYSDK_OFFSET(0x1C1CBA30)
#define RPG_CLIENT_PET_IPETINSTANCEEXTENSIONS_ISLOCKEDBYTRADEORDER_OFFSET UNITYSDK_OFFSET(0x1C1CBB50)
#define RPG_CLIENT_PET_IPETINSTANCEEXTENSIONS_ISOWNED_OFFSET UNITYSDK_OFFSET(0x1C1CB630)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int IPetInstanceExtensions_TypeDefinitionIndex = 77974;

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
