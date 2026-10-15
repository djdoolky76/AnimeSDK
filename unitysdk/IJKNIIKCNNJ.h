#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOCNNALBNJD.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetKind.h"
#include "unitysdk/System/Object.h"

#define IJKNIIKCNNJ_JNHLNOCBDDK_OFFSET UNITYSDK_OFFSET(0x1646B7A0)
#define IJKNIIKCNNJ_MMGIJPHEDHG_OFFSET UNITYSDK_OFFSET(0x1646B750)

inline static constexpr unsigned int IJKNIIKCNNJ_TypeDefinitionIndex = 75731;

	class IJKNIIKCNNJ : public ::System::Object
	{
	public:
		static ::RPG::Client::Pet::BlindBox::BlindBoxPetKind MMGIJPHEDHG(::EOCNNALBNJD a1)
		{
			return ((::RPG::Client::Pet::BlindBox::BlindBoxPetKind(*)(::EOCNNALBNJD))((::PBYTE)hIl2Cpp + IJKNIIKCNNJ_MMGIJPHEDHG_OFFSET))(a1);
		}

		static ::EOCNNALBNJD JNHLNOCBDDK(::RPG::Client::Pet::BlindBox::BlindBoxPetKind a1)
		{
			return ((::EOCNNALBNJD(*)(::RPG::Client::Pet::BlindBox::BlindBoxPetKind))((::PBYTE)hIl2Cpp + IJKNIIKCNNJ_JNHLNOCBDDK_OFFSET))(a1);
		}

	};
