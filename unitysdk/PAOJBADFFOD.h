#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;

#define PAOJBADFFOD_DEKNGAMFBPH_OFFSET UNITYSDK_OFFSET(0x19494270)
#define PAOJBADFFOD_EDJKEKOKEPD_OFFSET UNITYSDK_OFFSET(0x194940C0)
#define PAOJBADFFOD__CTOR_OFFSET UNITYSDK_OFFSET(0x19494260)

inline static constexpr unsigned int PAOJBADFFOD_TypeDefinitionIndex = 92072;

class PAOJBADFFOD : public ::MNNHMDCKJOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOJBADFFOD__CTOR_OFFSET))(this);
	}

	::System::Void EDJKEKOKEPD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + PAOJBADFFOD_EDJKEKOKEPD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void DEKNGAMFBPH(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + PAOJBADFFOD_DEKNGAMFBPH_OFFSET))(this, MIALFKCCCPI);
	}
};
