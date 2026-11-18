#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/POKCLFEIJPI.h"
#include "unitysdk/System/Object.h"

#define IBEILOBJCMH_ALEFLOHCKLH_OFFSET UNITYSDK_OFFSET(0x1A3943D0)
#define IBEILOBJCMH_FJDKLEIGNFI_OFFSET UNITYSDK_OFFSET(0x1A394460)
#define IBEILOBJCMH_GGPMJEHJILE_OFFSET UNITYSDK_OFFSET(0x1A394450)
#define IBEILOBJCMH_GHLJPHLBOFI_OFFSET UNITYSDK_OFFSET(0x1A3943E0)
#define IBEILOBJCMH_HHIKMBNEABN_OFFSET UNITYSDK_OFFSET(0x1A3944C0)
#define IBEILOBJCMH_KBFKHJOFJLD_OFFSET UNITYSDK_OFFSET(0x1A3943F0)
#define IBEILOBJCMH_MNCEJNJDAFF_OFFSET UNITYSDK_OFFSET(0x1A394440)
#define IBEILOBJCMH_NLJINBGOGJA_OFFSET UNITYSDK_OFFSET(0x1A3944B0)
#define IBEILOBJCMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3942A0)

inline static constexpr unsigned int IBEILOBJCMH_TypeDefinitionIndex = 53004;

class IBEILOBJCMH : public ::System::Object
{
public:
	::System::Int32 _OLFNAMIDNDO_k__BackingField; // 0x10
	::System::Int32 _KPHKBNOEBLN_k__BackingField; // 0x14
	::POKCLFEIJPI _OPHONNFCDOF_k__BackingField; // 0x18

	::System::Void _ctor(::System::Int32 KMMGKJPAOMF, ::System::Boolean NKOIMPCAOEC, ::System::Boolean GGDBNBDOLMG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IBEILOBJCMH__CTOR_OFFSET))(this, KMMGKJPAOMF, NKOIMPCAOEC, GGDBNBDOLMG);
	}

	::System::Void ALEFLOHCKLH(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IBEILOBJCMH_ALEFLOHCKLH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GHLJPHLBOFI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IBEILOBJCMH_GHLJPHLBOFI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KBFKHJOFJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEILOBJCMH_KBFKHJOFJLD_OFFSET))(this);
	}

	::System::Void MNCEJNJDAFF(::POKCLFEIJPI EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::POKCLFEIJPI))((::PBYTE)hIl2Cpp + IBEILOBJCMH_MNCEJNJDAFF_OFFSET))(this, EGEGIMGMJHN);
	}

	::POKCLFEIJPI GGPMJEHJILE()
	{
		return ((::POKCLFEIJPI(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEILOBJCMH_GGPMJEHJILE_OFFSET))(this);
	}

	::System::Void FJDKLEIGNFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEILOBJCMH_FJDKLEIGNFI_OFFSET))(this);
	}

	::System::Int32 NLJINBGOGJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEILOBJCMH_NLJINBGOGJA_OFFSET))(this);
	}

	::System::Int32 HHIKMBNEABN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEILOBJCMH_HHIKMBNEABN_OFFSET))(this);
	}
};
