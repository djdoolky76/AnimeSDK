#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IODPOEFKGOI.h"
#include "unitysdk/JKEJGPKBNNP.h"

#define OMADEOKDBEP_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x7A4D70)
#define OMADEOKDBEP_IEIDKHIALCE_OFFSET UNITYSDK_OFFSET(0x7A4DE0)

inline static constexpr unsigned int OMADEOKDBEP_TypeDefinitionIndex = 85730;

struct alignas(4) OMADEOKDBEP
{
	::System::Void IAFHBCHLBME(::JKEJGPKBNNP& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::JKEJGPKBNNP&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + OMADEOKDBEP_IAFHBCHLBME_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}

	::System::Void IEIDKHIALCE(::JKEJGPKBNNP& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::JKEJGPKBNNP&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + OMADEOKDBEP_IEIDKHIALCE_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}
};
