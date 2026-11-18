#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IODPOEFKGOI.h"
#include "unitysdk/KHJBODBOOAD.h"

#define LMIGAAMGLBH_BPPHBGEGDBO_OFFSET UNITYSDK_OFFSET(0x795260)
#define LMIGAAMGLBH_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x795180)

inline static constexpr unsigned int LMIGAAMGLBH_TypeDefinitionIndex = 76851;

struct alignas(4) LMIGAAMGLBH
{
	::System::Void IAFHBCHLBME(::KHJBODBOOAD& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::KHJBODBOOAD&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + LMIGAAMGLBH_IAFHBCHLBME_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}

	::System::Void BPPHBGEGDBO(::KHJBODBOOAD& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::KHJBODBOOAD&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + LMIGAAMGLBH_BPPHBGEGDBO_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}
};
