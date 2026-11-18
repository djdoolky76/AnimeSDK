#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;

#define PCHHAIKIDFN_DEKNGAMFBPH_OFFSET UNITYSDK_OFFSET(0x178B19F0)
#define PCHHAIKIDFN_EDJKEKOKEPD_OFFSET UNITYSDK_OFFSET(0x178B16E0)
#define PCHHAIKIDFN__CTOR_OFFSET UNITYSDK_OFFSET(0x178B19E0)

inline static constexpr unsigned int PCHHAIKIDFN_TypeDefinitionIndex = 46376;

class PCHHAIKIDFN : public ::MNNHMDCKJOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCHHAIKIDFN__CTOR_OFFSET))(this);
	}

	::System::Void EDJKEKOKEPD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + PCHHAIKIDFN_EDJKEKOKEPD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void DEKNGAMFBPH(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + PCHHAIKIDFN_DEKNGAMFBPH_OFFSET))(this, MIALFKCCCPI);
	}
};
