#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"

#define DDFDNJCFIHM_JFENOKLCCME_OFFSET UNITYSDK_OFFSET(0xF2BF0)

inline static constexpr unsigned int DDFDNJCFIHM_TypeDefinitionIndex = 56949;

	struct alignas(4) DDFDNJCFIHM
	{
		::RPG::MVector3 LJCENKGKELP; // 0x10
		::System::Single HJLOCBLHNLD; // 0x1C
		::System::Single GNPIPAADIFK; // 0x20
		::RPG::MVector3 AIPNOJPDPCM; // 0x24
		::RPG::MVector3 JFENOKLCCME(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + DDFDNJCFIHM_JFENOKLCCME_OFFSET))(this, a1);
		}

	};
