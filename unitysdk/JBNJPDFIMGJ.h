#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;

#define JBNJPDFIMGJ_DEKNGAMFBPH_OFFSET UNITYSDK_OFFSET(0x1ACCBAF0)
#define JBNJPDFIMGJ_EDJKEKOKEPD_OFFSET UNITYSDK_OFFSET(0x1ACCB710)
#define JBNJPDFIMGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACCBAE0)

inline static constexpr unsigned int JBNJPDFIMGJ_TypeDefinitionIndex = 62228;

class JBNJPDFIMGJ : public ::MNNHMDCKJOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNJPDFIMGJ__CTOR_OFFSET))(this);
	}

	::System::Void EDJKEKOKEPD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + JBNJPDFIMGJ_EDJKEKOKEPD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void DEKNGAMFBPH(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + JBNJPDFIMGJ_DEKNGAMFBPH_OFFSET))(this, MIALFKCCCPI);
	}
};
