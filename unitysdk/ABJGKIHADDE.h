#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PINBHKFHPAL.h"

class PNJDGHBEMLK;

#define ABJGKIHADDE_DOODNGLPOJK_OFFSET UNITYSDK_OFFSET(0x17C96B80)
#define ABJGKIHADDE_GKLGMCNKKPD_OFFSET UNITYSDK_OFFSET(0x17C96BC0)
#define ABJGKIHADDE_JAILGLBIMNK_OFFSET UNITYSDK_OFFSET(0x17C96C00)
#define ABJGKIHADDE__CTOR_OFFSET UNITYSDK_OFFSET(0x17C96C40)

inline static constexpr unsigned int ABJGKIHADDE_TypeDefinitionIndex = 71719;

class ABJGKIHADDE : public ::PINBHKFHPAL
{
public:
	::PNJDGHBEMLK* MOKNJFPNMJH; // 0x10
	::System::Int32 MOGNHPJKAKK; // 0x18
	::System::Int32 GPNPNPMOEAH; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJGKIHADDE__CTOR_OFFSET))(this);
	}

	::System::Void DOODNGLPOJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJGKIHADDE_DOODNGLPOJK_OFFSET))(this);
	}

	::System::Void GKLGMCNKKPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJGKIHADDE_GKLGMCNKKPD_OFFSET))(this);
	}

	::System::Boolean JAILGLBIMNK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJGKIHADDE_JAILGLBIMNK_OFFSET))(this);
	}
};
