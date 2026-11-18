#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JPAGJONBFID_NINALFMLMJD.h"
#include "unitysdk/JPAGJONBFID_OHLJJOCHIGO.h"

#define MHLMPAGLCIF_GBIMFDIADMD_OFFSET UNITYSDK_OFFSET(0x76D260)
#define MHLMPAGLCIF_IIHLGEFGOBL_OFFSET UNITYSDK_OFFSET(0x6D4D80)

inline static constexpr unsigned int MHLMPAGLCIF_TypeDefinitionIndex = 50212;

struct alignas(4) MHLMPAGLCIF
{
	::System::Void GBIMFDIADMD(::JPAGJONBFID_OHLJJOCHIGO& HGDMBHDKFPK)
	{
		return ((::System::Void(*)(::PVOID, ::JPAGJONBFID_OHLJJOCHIGO&))((::PBYTE)hIl2Cpp + MHLMPAGLCIF_GBIMFDIADMD_OFFSET))(this, HGDMBHDKFPK);
	}

	::System::Void IIHLGEFGOBL(::JPAGJONBFID_NINALFMLMJD& MEJFKGECCPG)
	{
		return ((::System::Void(*)(::PVOID, ::JPAGJONBFID_NINALFMLMJD&))((::PBYTE)hIl2Cpp + MHLMPAGLCIF_IIHLGEFGOBL_OFFSET))(this, MEJFKGECCPG);
	}
};
