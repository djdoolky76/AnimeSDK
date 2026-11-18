#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;

#define IBBCMLNENFH_DEKNGAMFBPH_OFFSET UNITYSDK_OFFSET(0x140D7CD0)
#define IBBCMLNENFH_EDJKEKOKEPD_OFFSET UNITYSDK_OFFSET(0x140D7B20)
#define IBBCMLNENFH__CTOR_OFFSET UNITYSDK_OFFSET(0x140D7CC0)

inline static constexpr unsigned int IBBCMLNENFH_TypeDefinitionIndex = 52254;

class IBBCMLNENFH : public ::MNNHMDCKJOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBCMLNENFH__CTOR_OFFSET))(this);
	}

	::System::Void EDJKEKOKEPD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + IBBCMLNENFH_EDJKEKOKEPD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void DEKNGAMFBPH(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + IBBCMLNENFH_DEKNGAMFBPH_OFFSET))(this, MIALFKCCCPI);
	}
};
