#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;

#define JAEJIEJMGHO_DEKNGAMFBPH_OFFSET UNITYSDK_OFFSET(0x14A3F530)
#define JAEJIEJMGHO_EDJKEKOKEPD_OFFSET UNITYSDK_OFFSET(0x14A3F2F0)
#define JAEJIEJMGHO__CTOR_OFFSET UNITYSDK_OFFSET(0x14A3F520)

inline static constexpr unsigned int JAEJIEJMGHO_TypeDefinitionIndex = 55540;

class JAEJIEJMGHO : public ::MNNHMDCKJOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAEJIEJMGHO__CTOR_OFFSET))(this);
	}

	::System::Void EDJKEKOKEPD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + JAEJIEJMGHO_EDJKEKOKEPD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void DEKNGAMFBPH(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + JAEJIEJMGHO_DEKNGAMFBPH_OFFSET))(this, MIALFKCCCPI);
	}
};
