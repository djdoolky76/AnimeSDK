#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGEDMNDIDHA.h"
#include "unitysdk/LHMMBAGOCLO.h"
#include "unitysdk/MOINIKJJHGA.h"

#define ABIJAOCGGMA_MHMOIBOIPAK_OFFSET UNITYSDK_OFFSET(0x1E717E30)
#define ABIJAOCGGMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E717E80)

inline static constexpr unsigned int ABIJAOCGGMA_TypeDefinitionIndex = 94163;

class ABIJAOCGGMA
{
public:
	::OGEDMNDIDHA NEPOPIBBCAD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABIJAOCGGMA__CTOR_OFFSET))(this);
	}

	::MOINIKJJHGA MHMOIBOIPAK(::LHMMBAGOCLO& HBMGHPEPBNC)
	{
		return ((::MOINIKJJHGA(*)(::PVOID, ::LHMMBAGOCLO&))((::PBYTE)hIl2Cpp + ABIJAOCGGMA_MHMOIBOIPAK_OFFSET))(this, HBMGHPEPBNC);
	}
};
