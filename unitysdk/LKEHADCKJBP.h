#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/Pet/PetInstanceIdentifier.h"
namespace Proto { class Item; }

#define LKEHADCKJBP_GKPPCEAGAOK_OFFSET UNITYSDK_OFFSET(0xB7279B0)

inline static constexpr unsigned int LKEHADCKJBP_TypeDefinitionIndex = 75664;

	class LKEHADCKJBP : public ::System::Object
	{
	public:
		static ::RPG::Client::Pet::PetInstanceIdentifier GKPPCEAGAOK(::Proto::Item* a1)
		{
			return ((::RPG::Client::Pet::PetInstanceIdentifier(*)(::Proto::Item*))((::PBYTE)hIl2Cpp + LKEHADCKJBP_GKPPCEAGAOK_OFFSET))(a1);
		}

	};
