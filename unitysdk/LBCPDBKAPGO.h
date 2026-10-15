#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesEventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlanetFesEventDataBase; }

#define LBCPDBKAPGO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB5F5960)

inline static constexpr unsigned int LBCPDBKAPGO_TypeDefinitionIndex = 66555;

	class LBCPDBKAPGO : public ::System::Object
	{
	public:
		static ::RPG::Client::PlanetFesEventDataBase* BPLPBPMEODA(::RPG::GameCore::PlanetFesEventType a1)
		{
			return ((::RPG::Client::PlanetFesEventDataBase*(*)(::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + LBCPDBKAPGO_BPLPBPMEODA_OFFSET))(a1);
		}

	};
