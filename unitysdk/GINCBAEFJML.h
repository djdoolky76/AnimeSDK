#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JPAGJONBFID_NINALFMLMJD.h"
#include "unitysdk/JPAGJONBFID_OHLJJOCHIGO.h"

#define GINCBAEFJML_GBIMFDIADMD_OFFSET UNITYSDK_OFFSET(0x748240)
#define GINCBAEFJML_IIHLGEFGOBL_OFFSET UNITYSDK_OFFSET(0x748250)

inline static constexpr unsigned int GINCBAEFJML_TypeDefinitionIndex = 50329;

struct alignas(4) GINCBAEFJML
{
	::System::Void GBIMFDIADMD(::JPAGJONBFID_OHLJJOCHIGO& HGDMBHDKFPK)
	{
		return ((::System::Void(*)(::PVOID, ::JPAGJONBFID_OHLJJOCHIGO&))((::PBYTE)hIl2Cpp + GINCBAEFJML_GBIMFDIADMD_OFFSET))(this, HGDMBHDKFPK);
	}

	::System::Void IIHLGEFGOBL(::JPAGJONBFID_NINALFMLMJD& MEJFKGECCPG)
	{
		return ((::System::Void(*)(::PVOID, ::JPAGJONBFID_NINALFMLMJD&))((::PBYTE)hIl2Cpp + GINCBAEFJML_IIHLGEFGOBL_OFFSET))(this, MEJFKGECCPG);
	}
};
