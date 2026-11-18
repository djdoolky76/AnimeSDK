#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GCJKFMCKCFO.h"
#include "unitysdk/IODPOEFKGOI.h"

#define KOOCMMLAPAG_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x7CE450)
#define KOOCMMLAPAG_KAJNFKMDNJD_OFFSET UNITYSDK_OFFSET(0x7CE460)

inline static constexpr unsigned int KOOCMMLAPAG_TypeDefinitionIndex = 61174;

struct alignas(4) KOOCMMLAPAG
{
	::System::Void IAFHBCHLBME(::GCJKFMCKCFO& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::GCJKFMCKCFO&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + KOOCMMLAPAG_IAFHBCHLBME_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}

	::System::Void KAJNFKMDNJD(::GCJKFMCKCFO& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::GCJKFMCKCFO&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + KOOCMMLAPAG_KAJNFKMDNJD_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}
};
