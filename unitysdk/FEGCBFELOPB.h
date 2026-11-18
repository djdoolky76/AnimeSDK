#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;

#define FEGCBFELOPB_DEKNGAMFBPH_OFFSET UNITYSDK_OFFSET(0x13206A30)
#define FEGCBFELOPB_EDJKEKOKEPD_OFFSET UNITYSDK_OFFSET(0x132067D0)
#define FEGCBFELOPB__CTOR_OFFSET UNITYSDK_OFFSET(0x13206A20)

inline static constexpr unsigned int FEGCBFELOPB_TypeDefinitionIndex = 71079;

class FEGCBFELOPB : public ::MNNHMDCKJOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGCBFELOPB__CTOR_OFFSET))(this);
	}

	::System::Void EDJKEKOKEPD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + FEGCBFELOPB_EDJKEKOKEPD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void DEKNGAMFBPH(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + FEGCBFELOPB_DEKNGAMFBPH_OFFSET))(this, MIALFKCCCPI);
	}
};
