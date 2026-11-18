#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PDBEPGLENJA_DJCPHNMIFOG_OFFSET UNITYSDK_OFFSET(0x359150)
#define PDBEPGLENJA_EJIAMFFDFFA_OFFSET UNITYSDK_OFFSET(0x75C520)
#define PDBEPGLENJA_GJEIGEHAKFN_OFFSET UNITYSDK_OFFSET(0x359320)
#define PDBEPGLENJA_KIKIMHKCMGG_OFFSET UNITYSDK_OFFSET(0x359320)

inline static constexpr unsigned int PDBEPGLENJA_TypeDefinitionIndex = 56783;

struct alignas(4) PDBEPGLENJA
{
	::System::Int32 _EGINPPNLCNH_k__BackingField; // 0x10

	::System::Int32 KIKIMHKCMGG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDBEPGLENJA_KIKIMHKCMGG_OFFSET))(this);
	}

	::System::Int32 EJIAMFFDFFA(::System::Single BEKLCLFIDKF, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PDBEPGLENJA_EJIAMFFDFFA_OFFSET))(this, BEKLCLFIDKF, PMNLNNGEIFM);
	}

	::System::Void DJCPHNMIFOG(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PDBEPGLENJA_DJCPHNMIFOG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 GJEIGEHAKFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDBEPGLENJA_GJEIGEHAKFN_OFFSET))(this);
	}
};
