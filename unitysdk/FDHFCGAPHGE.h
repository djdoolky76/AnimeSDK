#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDIEJHMLKAK.h"

#define FDHFCGAPHGE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1428AC40)
#define FDHFCGAPHGE_MOAIMMNOFJF_OFFSET UNITYSDK_OFFSET(0x1428ACF0)
#define FDHFCGAPHGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1428ABF0)

inline static constexpr unsigned int FDHFCGAPHGE_TypeDefinitionIndex = 38795;

class FDHFCGAPHGE : public ::MDIEJHMLKAK
{
public:
	::System::Void _ctor(::System::Double CIIPCCLOHLH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + FDHFCGAPHGE__CTOR_OFFSET))(this, CIIPCCLOHLH);
	}

	::System::Void ELMEFBBHCEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHFCGAPHGE_ELMEFBBHCEG_OFFSET))(this);
	}

	::System::Void MOAIMMNOFJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHFCGAPHGE_MOAIMMNOFJF_OFFSET))(this);
	}
};
