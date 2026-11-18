#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JPAGJONBFID_NINALFMLMJD.h"
#include "unitysdk/JPAGJONBFID_OHLJJOCHIGO.h"

#define ELJHIEMCAAP_GBIMFDIADMD_OFFSET UNITYSDK_OFFSET(0x706EE0)
#define ELJHIEMCAAP_IIHLGEFGOBL_OFFSET UNITYSDK_OFFSET(0x706EF0)

inline static constexpr unsigned int ELJHIEMCAAP_TypeDefinitionIndex = 76155;

struct alignas(4) ELJHIEMCAAP
{
	// static const ::System::String* JNJABKFHECA; // 0x0

	::System::Void GBIMFDIADMD(::JPAGJONBFID_OHLJJOCHIGO& HGDMBHDKFPK)
	{
		return ((::System::Void(*)(::PVOID, ::JPAGJONBFID_OHLJJOCHIGO&))((::PBYTE)hIl2Cpp + ELJHIEMCAAP_GBIMFDIADMD_OFFSET))(this, HGDMBHDKFPK);
	}

	::System::Void IIHLGEFGOBL(::JPAGJONBFID_NINALFMLMJD& MEJFKGECCPG)
	{
		return ((::System::Void(*)(::PVOID, ::JPAGJONBFID_NINALFMLMJD&))((::PBYTE)hIl2Cpp + ELJHIEMCAAP_IIHLGEFGOBL_OFFSET))(this, MEJFKGECCPG);
	}
};
