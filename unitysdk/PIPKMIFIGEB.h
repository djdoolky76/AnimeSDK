#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;

#define PIPKMIFIGEB_DEKNGAMFBPH_OFFSET UNITYSDK_OFFSET(0x150CDD40)
#define PIPKMIFIGEB_EDJKEKOKEPD_OFFSET UNITYSDK_OFFSET(0x150CDAE0)
#define PIPKMIFIGEB__CTOR_OFFSET UNITYSDK_OFFSET(0x150CDD30)

inline static constexpr unsigned int PIPKMIFIGEB_TypeDefinitionIndex = 62176;

class PIPKMIFIGEB : public ::MNNHMDCKJOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPKMIFIGEB__CTOR_OFFSET))(this);
	}

	::System::Void EDJKEKOKEPD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + PIPKMIFIGEB_EDJKEKOKEPD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void DEKNGAMFBPH(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + PIPKMIFIGEB_DEKNGAMFBPH_OFFSET))(this, MIALFKCCCPI);
	}
};
