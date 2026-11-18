#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;

#define JHCLHGCLLBF_AAMHIOOFJAJ_OFFSET UNITYSDK_OFFSET(0x14A7D290)
#define JHCLHGCLLBF_AHIGFLFEBNC_OFFSET UNITYSDK_OFFSET(0x14A7D250)
#define JHCLHGCLLBF_MFKKEIODIEB_OFFSET UNITYSDK_OFFSET(0x14A7D210)
#define JHCLHGCLLBF_OJAHBFIHKBC_OFFSET UNITYSDK_OFFSET(0x14A7D2E0)
#define JHCLHGCLLBF_OPMPMDMAENO_OFFSET UNITYSDK_OFFSET(0x14A7D1D0)
#define JHCLHGCLLBF__CTOR_OFFSET UNITYSDK_OFFSET(0x14A7D2D0)

inline static constexpr unsigned int JHCLHGCLLBF_TypeDefinitionIndex = 44117;

class JHCLHGCLLBF : public ::System::Object
{
public:
	::CJIEIHEDMME* PJBDLMBIIBH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCLHGCLLBF__CTOR_OFFSET))(this);
	}

	::System::Void OPMPMDMAENO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCLHGCLLBF_OPMPMDMAENO_OFFSET))(this);
	}

	::System::Void MFKKEIODIEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCLHGCLLBF_MFKKEIODIEB_OFFSET))(this);
	}

	::System::Void AHIGFLFEBNC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCLHGCLLBF_AHIGFLFEBNC_OFFSET))(this);
	}

	::System::Void AAMHIOOFJAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCLHGCLLBF_AAMHIOOFJAJ_OFFSET))(this);
	}

	::System::Void OJAHBFIHKBC(::CJIEIHEDMME* PJBDLMBIIBH)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + JHCLHGCLLBF_OJAHBFIHKBC_OFFSET))(this, PJBDLMBIIBH);
	}
};
