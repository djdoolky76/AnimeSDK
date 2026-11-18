#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;

#define AMPNJMPBGOA_DEKNGAMFBPH_OFFSET UNITYSDK_OFFSET(0x134E4B30)
#define AMPNJMPBGOA_EDJKEKOKEPD_OFFSET UNITYSDK_OFFSET(0x134E4960)
#define AMPNJMPBGOA__CTOR_OFFSET UNITYSDK_OFFSET(0x134E4B20)

inline static constexpr unsigned int AMPNJMPBGOA_TypeDefinitionIndex = 60448;

class AMPNJMPBGOA : public ::MNNHMDCKJOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPNJMPBGOA__CTOR_OFFSET))(this);
	}

	::System::Void EDJKEKOKEPD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + AMPNJMPBGOA_EDJKEKOKEPD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void DEKNGAMFBPH(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + AMPNJMPBGOA_DEKNGAMFBPH_OFFSET))(this, MIALFKCCCPI);
	}
};
