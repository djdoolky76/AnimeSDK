#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/Pet/PetRarity.h"

#define IOJLOPLDGDJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB837B60)

inline static constexpr unsigned int IOJLOPLDGDJ_TypeDefinitionIndex = 78031;

	class IOJLOPLDGDJ : public ::System::Object
	{
	public:
		static ::RPG::Client::Pet::PetRarity BPLPBPMEODA(::RPG::GameCore::ItemRarity a1)
		{
			return ((::RPG::Client::Pet::PetRarity(*)(::RPG::GameCore::ItemRarity))((::PBYTE)hIl2Cpp + IOJLOPLDGDJ_BPLPBPMEODA_OFFSET))(a1);
		}

	};
