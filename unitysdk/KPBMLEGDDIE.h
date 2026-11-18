#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;

#define KPBMLEGDDIE_DEKNGAMFBPH_OFFSET UNITYSDK_OFFSET(0x1996FA10)
#define KPBMLEGDDIE_EDJKEKOKEPD_OFFSET UNITYSDK_OFFSET(0x1996F810)
#define KPBMLEGDDIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1996FA00)

inline static constexpr unsigned int KPBMLEGDDIE_TypeDefinitionIndex = 77432;

class KPBMLEGDDIE : public ::MNNHMDCKJOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBMLEGDDIE__CTOR_OFFSET))(this);
	}

	::System::Void EDJKEKOKEPD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + KPBMLEGDDIE_EDJKEKOKEPD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void DEKNGAMFBPH(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + KPBMLEGDDIE_DEKNGAMFBPH_OFFSET))(this, MIALFKCCCPI);
	}
};
