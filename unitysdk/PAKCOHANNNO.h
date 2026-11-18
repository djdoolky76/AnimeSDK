#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JPAGJONBFID_NINALFMLMJD.h"
#include "unitysdk/JPAGJONBFID_OHLJJOCHIGO.h"

#define PAKCOHANNNO_GBIMFDIADMD_OFFSET UNITYSDK_OFFSET(0x7A54E0)
#define PAKCOHANNNO_IIHLGEFGOBL_OFFSET UNITYSDK_OFFSET(0x7A54F0)

inline static constexpr unsigned int PAKCOHANNNO_TypeDefinitionIndex = 49900;

struct alignas(4) PAKCOHANNNO
{
	// static const ::System::String* JNJABKFHECA; // 0x0

	::System::Void GBIMFDIADMD(::JPAGJONBFID_OHLJJOCHIGO& HGDMBHDKFPK)
	{
		return ((::System::Void(*)(::PVOID, ::JPAGJONBFID_OHLJJOCHIGO&))((::PBYTE)hIl2Cpp + PAKCOHANNNO_GBIMFDIADMD_OFFSET))(this, HGDMBHDKFPK);
	}

	::System::Void IIHLGEFGOBL(::JPAGJONBFID_NINALFMLMJD& MEJFKGECCPG)
	{
		return ((::System::Void(*)(::PVOID, ::JPAGJONBFID_NINALFMLMJD&))((::PBYTE)hIl2Cpp + PAKCOHANNNO_IIHLGEFGOBL_OFFSET))(this, MEJFKGECCPG);
	}
};
