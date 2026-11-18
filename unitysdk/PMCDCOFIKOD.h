#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;

#define PMCDCOFIKOD_DEKNGAMFBPH_OFFSET UNITYSDK_OFFSET(0x1A7FB700)
#define PMCDCOFIKOD_EDJKEKOKEPD_OFFSET UNITYSDK_OFFSET(0x1A7FB530)
#define PMCDCOFIKOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7FB6F0)

inline static constexpr unsigned int PMCDCOFIKOD_TypeDefinitionIndex = 62677;

class PMCDCOFIKOD : public ::MNNHMDCKJOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCDCOFIKOD__CTOR_OFFSET))(this);
	}

	::System::Void EDJKEKOKEPD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + PMCDCOFIKOD_EDJKEKOKEPD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void DEKNGAMFBPH(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + PMCDCOFIKOD_DEKNGAMFBPH_OFFSET))(this, MIALFKCCCPI);
	}
};
