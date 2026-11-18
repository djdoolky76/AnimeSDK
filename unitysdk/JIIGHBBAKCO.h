#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define JIIGHBBAKCO_HICLAEIBFLJ_OFFSET UNITYSDK_OFFSET(0x7867B0)
#define JIIGHBBAKCO_IHOKLLDHGKB_OFFSET UNITYSDK_OFFSET(0x359320)
#define JIIGHBBAKCO_OMNKIBJCAAN_OFFSET UNITYSDK_OFFSET(0x359150)
#define JIIGHBBAKCO__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int JIIGHBBAKCO_TypeDefinitionIndex = 80979;

struct alignas(4) JIIGHBBAKCO
{
	::System::Int32 _JGKMJIIFBED_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 CJPLACFCFBP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JIIGHBBAKCO__CTOR_OFFSET))(this, CJPLACFCFBP);
	}

	::System::Boolean HICLAEIBFLJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIIGHBBAKCO_HICLAEIBFLJ_OFFSET))(this);
	}

	::System::Int32 IHOKLLDHGKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIIGHBBAKCO_IHOKLLDHGKB_OFFSET))(this);
	}

	::System::Void OMNKIBJCAAN(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JIIGHBBAKCO_OMNKIBJCAAN_OFFSET))(this, EGEGIMGMJHN);
	}
};
