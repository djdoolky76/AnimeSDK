#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;

#define LCIOELHDJDC_DEKNGAMFBPH_OFFSET UNITYSDK_OFFSET(0x17942470)
#define LCIOELHDJDC_EDJKEKOKEPD_OFFSET UNITYSDK_OFFSET(0x17941CB0)
#define LCIOELHDJDC__CTOR_OFFSET UNITYSDK_OFFSET(0x17942460)

inline static constexpr unsigned int LCIOELHDJDC_TypeDefinitionIndex = 72082;

class LCIOELHDJDC : public ::MNNHMDCKJOB
{
public:
	// static const ::System::Int32 KLDGGPCFDHJ = 0x7535; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCIOELHDJDC__CTOR_OFFSET))(this);
	}

	::System::Void EDJKEKOKEPD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + LCIOELHDJDC_EDJKEKOKEPD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void DEKNGAMFBPH(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + LCIOELHDJDC_DEKNGAMFBPH_OFFSET))(this, MIALFKCCCPI);
	}
};
