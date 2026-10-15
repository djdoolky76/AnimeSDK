#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
namespace RPG::Client::Pet { class IPet; }
namespace RPG::Client::Pet { class IPetInstance; }
namespace RPG::Client::Pet { class PetModule; }

#define MLPPCBFKEMK_CCOMJBKFCNC_OFFSET UNITYSDK_OFFSET(0xB9BCE80)
#define MLPPCBFKEMK_JJELHPOFJIH_OFFSET UNITYSDK_OFFSET(0xB9BCC50)
#define MLPPCBFKEMK_NIPDCHOJNHJ_OFFSET UNITYSDK_OFFSET(0xB9BCE00)

inline static constexpr unsigned int MLPPCBFKEMK_TypeDefinitionIndex = 75717;

	class MLPPCBFKEMK : public ::System::Object
	{
	public:
		static ::RPG::Client::Pet::IPet* JJELHPOFJIH(::RPG::Client::Pet::PetIdentifier a1)
		{
			return ((::RPG::Client::Pet::IPet*(*)(::RPG::Client::Pet::PetIdentifier))((::PBYTE)hIl2Cpp + MLPPCBFKEMK_JJELHPOFJIH_OFFSET))(a1);
		}

		static ::RPG::Client::Pet::IPetInstance* CCOMJBKFCNC(::RPG::Client::Pet::PetInstanceIdentifier a1)
		{
			return ((::RPG::Client::Pet::IPetInstance*(*)(::RPG::Client::Pet::PetInstanceIdentifier))((::PBYTE)hIl2Cpp + MLPPCBFKEMK_CCOMJBKFCNC_OFFSET))(a1);
		}

		static ::RPG::Client::Pet::PetModule* NIPDCHOJNHJ()
		{
			return ((::RPG::Client::Pet::PetModule*(*)())((::PBYTE)hIl2Cpp + MLPPCBFKEMK_NIPDCHOJNHJ_OFFSET))();
		}

	};
