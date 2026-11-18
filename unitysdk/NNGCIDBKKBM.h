#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;

#define NNGCIDBKKBM_DEKNGAMFBPH_OFFSET UNITYSDK_OFFSET(0xE0AAD80)
#define NNGCIDBKKBM_EDJKEKOKEPD_OFFSET UNITYSDK_OFFSET(0xE0AAD20)
#define NNGCIDBKKBM__CTOR_OFFSET UNITYSDK_OFFSET(0xE0AAD70)

inline static constexpr unsigned int NNGCIDBKKBM_TypeDefinitionIndex = 82769;

class NNGCIDBKKBM : public ::MNNHMDCKJOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGCIDBKKBM__CTOR_OFFSET))(this);
	}

	::System::Void EDJKEKOKEPD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + NNGCIDBKKBM_EDJKEKOKEPD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void DEKNGAMFBPH(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + NNGCIDBKKBM_DEKNGAMFBPH_OFFSET))(this, MIALFKCCCPI);
	}
};
