#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;

#define PDLAABIBLOK_DEKNGAMFBPH_OFFSET UNITYSDK_OFFSET(0x194994E0)
#define PDLAABIBLOK_EDJKEKOKEPD_OFFSET UNITYSDK_OFFSET(0x19499300)
#define PDLAABIBLOK__CTOR_OFFSET UNITYSDK_OFFSET(0x194994D0)

inline static constexpr unsigned int PDLAABIBLOK_TypeDefinitionIndex = 62038;

class PDLAABIBLOK : public ::MNNHMDCKJOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDLAABIBLOK__CTOR_OFFSET))(this);
	}

	::System::Void EDJKEKOKEPD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + PDLAABIBLOK_EDJKEKOKEPD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void DEKNGAMFBPH(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + PDLAABIBLOK_DEKNGAMFBPH_OFFSET))(this, MIALFKCCCPI);
	}
};
