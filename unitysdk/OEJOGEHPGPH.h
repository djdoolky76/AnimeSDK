#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class JMNDEAFIAAF;

#define OEJOGEHPGPH_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x6EA550)
#define OEJOGEHPGPH_FJMPAGBNGOE_OFFSET UNITYSDK_OFFSET(0x359150)
#define OEJOGEHPGPH_PFIFJHJMCLN_OFFSET UNITYSDK_OFFSET(0x359320)
#define OEJOGEHPGPH__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int OEJOGEHPGPH_TypeDefinitionIndex = 57681;

struct alignas(4) OEJOGEHPGPH
{
	::System::Int32 _CMJBJLNMPGN_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 GCGFAHEPMHB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OEJOGEHPGPH__CTOR_OFFSET))(this, GCGFAHEPMHB);
	}

	::System::Boolean FCFOEJGPDNO(::JMNDEAFIAAF* AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::JMNDEAFIAAF*))((::PBYTE)hIl2Cpp + OEJOGEHPGPH_FCFOEJGPDNO_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void FJMPAGBNGOE(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OEJOGEHPGPH_FJMPAGBNGOE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PFIFJHJMCLN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJOGEHPGPH_PFIFJHJMCLN_OFFSET))(this);
	}
};
