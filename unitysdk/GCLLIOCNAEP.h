#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;

#define GCLLIOCNAEP_DEKNGAMFBPH_OFFSET UNITYSDK_OFFSET(0x165EAB40)
#define GCLLIOCNAEP_EDJKEKOKEPD_OFFSET UNITYSDK_OFFSET(0x165EA970)
#define GCLLIOCNAEP__CTOR_OFFSET UNITYSDK_OFFSET(0x165EAB30)

inline static constexpr unsigned int GCLLIOCNAEP_TypeDefinitionIndex = 74048;

class GCLLIOCNAEP : public ::MNNHMDCKJOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLLIOCNAEP__CTOR_OFFSET))(this);
	}

	::System::Void EDJKEKOKEPD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + GCLLIOCNAEP_EDJKEKOKEPD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void DEKNGAMFBPH(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + GCLLIOCNAEP_DEKNGAMFBPH_OFFSET))(this, MIALFKCCCPI);
	}
};
