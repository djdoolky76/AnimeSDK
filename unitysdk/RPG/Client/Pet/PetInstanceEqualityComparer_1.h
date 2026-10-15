#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Pet { template <typename T> class PetInstanceEqualityComparer_1; }

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetInstanceEqualityComparer_1_TypeDefinitionIndex = 75680;

	template <typename T>
	class PetInstanceEqualityComparer_1 : public ::System::Object
	{
	public:
		static ::RPG::Client::Pet::PetInstanceEqualityComparer_1<T>** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::Pet::PetInstanceEqualityComparer_1<T>**)UnitySDK::FromName("RPG.Client.Pet", "PetInstanceEqualityComparer`1")->GetStaticField(0x0);
		}

	};
}
