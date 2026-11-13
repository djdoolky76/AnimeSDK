#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetType.h"

#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEEXTENSIONS_ISCHIMERA_OFFSET UNITYSDK_OFFSET(0x1C1C9930)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEEXTENSIONS_ISHIDDEN_OFFSET UNITYSDK_OFFSET(0x1C1C9840)
#define RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEEXTENSIONS_ISRACCOON_OFFSET UNITYSDK_OFFSET(0x1C1C98D0)

namespace RPG::Client::Pet::BlindBox
{
	inline static constexpr unsigned int BlindBoxPetTypeExtensions_TypeDefinitionIndex = 78063;

	class BlindBoxPetTypeExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsHidden(::RPG::Client::Pet::BlindBox::BlindBoxPetType a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBox::BlindBoxPetType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEEXTENSIONS_ISHIDDEN_OFFSET))(a1);
		}

		static ::System::Boolean IsRaccoon(::RPG::Client::Pet::BlindBox::BlindBoxPetType a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBox::BlindBoxPetType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEEXTENSIONS_ISRACCOON_OFFSET))(a1);
		}

		static ::System::Boolean IsChimera(::RPG::Client::Pet::BlindBox::BlindBoxPetType a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBox::BlindBoxPetType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_BLINDBOX_BLINDBOXPETTYPEEXTENSIONS_ISCHIMERA_OFFSET))(a1);
		}

	};
}
