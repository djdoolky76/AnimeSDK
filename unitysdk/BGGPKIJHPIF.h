#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNKOJKOOLNO;
namespace RPG::Client { class MaterialSubmitterGroup; }

#define BGGPKIJHPIF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB188BE0)

inline static constexpr unsigned int BGGPKIJHPIF_TypeDefinitionIndex = 61797;

	class BGGPKIJHPIF : public ::System::Object
	{
	public:
		static ::RPG::Client::MaterialSubmitterGroup* BPLPBPMEODA(::System::UInt32 a1, ::PNKOJKOOLNO* a2)
		{
			return ((::RPG::Client::MaterialSubmitterGroup*(*)(::System::UInt32, ::PNKOJKOOLNO*))((::PBYTE)hIl2Cpp + BGGPKIJHPIF_BPLPBPMEODA_OFFSET))(a1, a2);
		}

	};
