#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/MJBABCIIKHB.h"

#define FPPHLKGGDBK_DDPPCLDJMHF_OFFSET UNITYSDK_OFFSET(0x1E1C31F0)
#define FPPHLKGGDBK_DFGOJHPONDC_OFFSET UNITYSDK_OFFSET(0x1E1C33B0)
#define FPPHLKGGDBK_LNHPIHCBGAD_OFFSET UNITYSDK_OFFSET(0x1E1C3310)
#define FPPHLKGGDBK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C3300)

inline static constexpr unsigned int FPPHLKGGDBK_TypeDefinitionIndex = 93858;

class FPPHLKGGDBK : public ::MJBABCIIKHB
{
public:
	::System::Single APLBOFJEOEN; // 0x40
	::System::Single BBLPEEKJGAC; // 0x44
	::System::Single ICNIPKFOFIP; // 0x48
	::JGLIFHIAIEH GNBKCKBPCGK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPHLKGGDBK__CTOR_OFFSET))(this);
	}

	::System::Void DDPPCLDJMHF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPHLKGGDBK_DDPPCLDJMHF_OFFSET))(this);
	}

	::System::Void LNHPIHCBGAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPHLKGGDBK_LNHPIHCBGAD_OFFSET))(this);
	}

	::System::Void DFGOJHPONDC(::System::Single DKOCBAIALJD, ::System::Single FOBDBBNNLEO, ::System::Single GAOMBHDKACB, ::JGLIFHIAIEH HDAKJIPDGJK, ::System::Single CIIPCCLOHLH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::JGLIFHIAIEH, ::System::Single))((::PBYTE)hIl2Cpp + FPPHLKGGDBK_DFGOJHPONDC_OFFSET))(this, DKOCBAIALJD, FOBDBBNNLEO, GAOMBHDKACB, HDAKJIPDGJK, CIIPCCLOHLH);
	}
};
