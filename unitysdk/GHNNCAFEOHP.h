#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HJBNLMDBAIK.h"
#include "unitysdk/IODPOEFKGOI.h"

#define GHNNCAFEOHP_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x6E0390)
#define GHNNCAFEOHP_LKFAGCEKKIA_OFFSET UNITYSDK_OFFSET(0x6E0400)

inline static constexpr unsigned int GHNNCAFEOHP_TypeDefinitionIndex = 46840;

struct alignas(4) GHNNCAFEOHP
{
	::System::Void IAFHBCHLBME(::HJBNLMDBAIK& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HJBNLMDBAIK&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + GHNNCAFEOHP_IAFHBCHLBME_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}

	::System::Void LKFAGCEKKIA(::HJBNLMDBAIK& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HJBNLMDBAIK&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + GHNNCAFEOHP_LKFAGCEKKIA_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}
};
