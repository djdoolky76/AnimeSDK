#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDIEJHMLKAK.h"

#define IIKPIEDIEIF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xB936730)
#define IIKPIEDIEIF_MOAIMMNOFJF_OFFSET UNITYSDK_OFFSET(0xB9367E0)
#define IIKPIEDIEIF__CTOR_OFFSET UNITYSDK_OFFSET(0xB9366E0)

inline static constexpr unsigned int IIKPIEDIEIF_TypeDefinitionIndex = 43142;

class IIKPIEDIEIF : public ::MDIEJHMLKAK
{
public:
	::System::Void _ctor(::System::Double CIIPCCLOHLH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + IIKPIEDIEIF__CTOR_OFFSET))(this, CIIPCCLOHLH);
	}

	::System::Void ELMEFBBHCEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKPIEDIEIF_ELMEFBBHCEG_OFFSET))(this);
	}

	::System::Void MOAIMMNOFJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKPIEDIEIF_MOAIMMNOFJF_OFFSET))(this);
	}
};
