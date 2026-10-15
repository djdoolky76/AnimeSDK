#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HENPKNCKGGI.h"
#include "unitysdk/RPG/Client/Pet/PetLineupShape.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PET_PETLINEUPSHAPEEXTENSIONS_TOCLIENT_OFFSET UNITYSDK_OFFSET(0xDABA660)
#define RPG_CLIENT_PET_PETLINEUPSHAPEEXTENSIONS_TOPROTO_OFFSET UNITYSDK_OFFSET(0xDABA6B0)

namespace RPG::Client::Pet
{
	class PetLineupShapeExtensions : public ::System::Object
	{
	public:
		static ::RPG::Client::Pet::PetLineupShape ToClient(::HENPKNCKGGI a1)
		{
			return ((::RPG::Client::Pet::PetLineupShape(*)(::HENPKNCKGGI))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETLINEUPSHAPEEXTENSIONS_TOCLIENT_OFFSET))(a1);
		}

		static ::HENPKNCKGGI ToProto(::RPG::Client::Pet::PetLineupShape a1)
		{
			return ((::HENPKNCKGGI(*)(::RPG::Client::Pet::PetLineupShape))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETLINEUPSHAPEEXTENSIONS_TOPROTO_OFFSET))(a1);
		}

	};
}
