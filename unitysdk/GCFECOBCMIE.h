#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JPAGJONBFID_NINALFMLMJD.h"
#include "unitysdk/JPAGJONBFID_OHLJJOCHIGO.h"

#define GCFECOBCMIE_GBIMFDIADMD_OFFSET UNITYSDK_OFFSET(0x787BC0)
#define GCFECOBCMIE_IIHLGEFGOBL_OFFSET UNITYSDK_OFFSET(0x787BD0)

inline static constexpr unsigned int GCFECOBCMIE_TypeDefinitionIndex = 47361;

struct alignas(4) GCFECOBCMIE
{
	// static const ::System::String* DNKBGHLPEKC; // 0x0

	::System::Void GBIMFDIADMD(::JPAGJONBFID_OHLJJOCHIGO& HGDMBHDKFPK)
	{
		return ((::System::Void(*)(::PVOID, ::JPAGJONBFID_OHLJJOCHIGO&))((::PBYTE)hIl2Cpp + GCFECOBCMIE_GBIMFDIADMD_OFFSET))(this, HGDMBHDKFPK);
	}

	::System::Void IIHLGEFGOBL(::JPAGJONBFID_NINALFMLMJD& MEJFKGECCPG)
	{
		return ((::System::Void(*)(::PVOID, ::JPAGJONBFID_NINALFMLMJD&))((::PBYTE)hIl2Cpp + GCFECOBCMIE_IIHLGEFGOBL_OFFSET))(this, MEJFKGECCPG);
	}
};
