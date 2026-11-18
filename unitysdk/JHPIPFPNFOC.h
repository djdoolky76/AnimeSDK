#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GBIJEANJJOM.h"
#include "unitysdk/IODPOEFKGOI.h"

#define JHPIPFPNFOC_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x753FB0)
#define JHPIPFPNFOC_IBKHONJMNNL_OFFSET UNITYSDK_OFFSET(0x753FC0)

inline static constexpr unsigned int JHPIPFPNFOC_TypeDefinitionIndex = 88673;

struct alignas(4) JHPIPFPNFOC
{
	::System::Void IAFHBCHLBME(::GBIJEANJJOM& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::GBIJEANJJOM&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + JHPIPFPNFOC_IAFHBCHLBME_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}

	::System::Void IBKHONJMNNL(::GBIJEANJJOM& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::GBIJEANJJOM&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + JHPIPFPNFOC_IBKHONJMNNL_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}
};
