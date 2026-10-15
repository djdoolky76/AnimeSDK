#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Pet { template <typename T> class PetEqualityComparer_1; }

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetEqualityComparer_1_TypeDefinitionIndex = 75674;

	template <typename T>
	class PetEqualityComparer_1 : public ::System::Object
	{
	public:
		static ::RPG::Client::Pet::PetEqualityComparer_1<T>** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::Pet::PetEqualityComparer_1<T>**)UnitySDK::FromName("RPG.Client.Pet", "PetEqualityComparer`1")->GetStaticField(0x0);
		}

	};
}
