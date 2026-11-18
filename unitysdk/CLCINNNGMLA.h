#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;

#define CLCINNNGMLA_DEKNGAMFBPH_OFFSET UNITYSDK_OFFSET(0x1A1BA2F0)
#define CLCINNNGMLA_EDJKEKOKEPD_OFFSET UNITYSDK_OFFSET(0x1A1B9E00)
#define CLCINNNGMLA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BA2E0)

inline static constexpr unsigned int CLCINNNGMLA_TypeDefinitionIndex = 83227;

class CLCINNNGMLA : public ::MNNHMDCKJOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCINNNGMLA__CTOR_OFFSET))(this);
	}

	::System::Void EDJKEKOKEPD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + CLCINNNGMLA_EDJKEKOKEPD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void DEKNGAMFBPH(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + CLCINNNGMLA_DEKNGAMFBPH_OFFSET))(this, MIALFKCCCPI);
	}
};
