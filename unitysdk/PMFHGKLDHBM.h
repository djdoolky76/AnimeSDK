#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DBHAGEFCLBL.h"
#include "unitysdk/IODPOEFKGOI.h"

#define PMFHGKLDHBM_DGBIOEEMLLB_OFFSET UNITYSDK_OFFSET(0x822640)
#define PMFHGKLDHBM_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x822630)

inline static constexpr unsigned int PMFHGKLDHBM_TypeDefinitionIndex = 80377;

struct alignas(4) PMFHGKLDHBM
{
	::System::Void IAFHBCHLBME(::DBHAGEFCLBL& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::DBHAGEFCLBL&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + PMFHGKLDHBM_IAFHBCHLBME_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}

	::System::Void DGBIOEEMLLB(::DBHAGEFCLBL& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::DBHAGEFCLBL&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + PMFHGKLDHBM_DGBIOEEMLLB_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}
};
