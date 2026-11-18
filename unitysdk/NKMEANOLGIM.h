#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;

#define NKMEANOLGIM_DEKNGAMFBPH_OFFSET UNITYSDK_OFFSET(0x1159E270)
#define NKMEANOLGIM_EDJKEKOKEPD_OFFSET UNITYSDK_OFFSET(0x1159DEA0)
#define NKMEANOLGIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1159E260)

inline static constexpr unsigned int NKMEANOLGIM_TypeDefinitionIndex = 62092;

class NKMEANOLGIM : public ::MNNHMDCKJOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMEANOLGIM__CTOR_OFFSET))(this);
	}

	::System::Void EDJKEKOKEPD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + NKMEANOLGIM_EDJKEKOKEPD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void DEKNGAMFBPH(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + NKMEANOLGIM_DEKNGAMFBPH_OFFSET))(this, MIALFKCCCPI);
	}
};
