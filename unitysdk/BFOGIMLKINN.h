#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;

#define BFOGIMLKINN_DEKNGAMFBPH_OFFSET UNITYSDK_OFFSET(0x169EC6E0)
#define BFOGIMLKINN_EDJKEKOKEPD_OFFSET UNITYSDK_OFFSET(0x169EC4B0)
#define BFOGIMLKINN__CTOR_OFFSET UNITYSDK_OFFSET(0x169EC6D0)

inline static constexpr unsigned int BFOGIMLKINN_TypeDefinitionIndex = 51693;

class BFOGIMLKINN : public ::MNNHMDCKJOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOGIMLKINN__CTOR_OFFSET))(this);
	}

	::System::Void EDJKEKOKEPD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + BFOGIMLKINN_EDJKEKOKEPD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void DEKNGAMFBPH(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + BFOGIMLKINN_DEKNGAMFBPH_OFFSET))(this, MIALFKCCCPI);
	}
};
