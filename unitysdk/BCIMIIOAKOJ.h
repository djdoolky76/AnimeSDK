#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;

#define BCIMIIOAKOJ_DEKNGAMFBPH_OFFSET UNITYSDK_OFFSET(0x15068300)
#define BCIMIIOAKOJ_EDJKEKOKEPD_OFFSET UNITYSDK_OFFSET(0x15068290)
#define BCIMIIOAKOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x150682F0)

inline static constexpr unsigned int BCIMIIOAKOJ_TypeDefinitionIndex = 47455;

class BCIMIIOAKOJ : public ::MNNHMDCKJOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIMIIOAKOJ__CTOR_OFFSET))(this);
	}

	::System::Void EDJKEKOKEPD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + BCIMIIOAKOJ_EDJKEKOKEPD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void DEKNGAMFBPH(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + BCIMIIOAKOJ_DEKNGAMFBPH_OFFSET))(this, MIALFKCCCPI);
	}
};
