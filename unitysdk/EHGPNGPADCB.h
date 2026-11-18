#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFINOKELIDD.h"
#include "unitysdk/System/Object.h"

#define EHGPNGPADCB_GKNJOFDOJDK_OFFSET UNITYSDK_OFFSET(0x10F2EEB0)
#define EHGPNGPADCB_IOEFEDAGHGJ_OFFSET UNITYSDK_OFFSET(0x10F2EEC0)
#define EHGPNGPADCB_LDIBMMMBCFB_OFFSET UNITYSDK_OFFSET(0x10F2EEE0)
#define EHGPNGPADCB_NIDEKMGBDCB_OFFSET UNITYSDK_OFFSET(0x10F2EE90)
#define EHGPNGPADCB_OOPDJBJIAAE_OFFSET UNITYSDK_OFFSET(0x10F2EED0)
#define EHGPNGPADCB_OPKADBCOKFG_OFFSET UNITYSDK_OFFSET(0x10F2EEA0)
#define EHGPNGPADCB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10F2EE80)
#define EHGPNGPADCB__CTOR_OFFSET UNITYSDK_OFFSET(0x10F2EE70)

inline static constexpr unsigned int EHGPNGPADCB_TypeDefinitionIndex = 43766;

class EHGPNGPADCB : public ::System::Object
{
public:
	::System::Int32 _FAEKPMKAEIJ_k__BackingField; // 0x10
	::System::Boolean _KCPINIGMHPI_k__BackingField; // 0x14
	::System::Byte _padding0[0x3];
	::HFINOKELIDD _PKDHAPAMDAM_k__BackingField; // 0x18

	::System::Void _ctor(::HFINOKELIDD AGEFPKLIFGB)
	{
		return ((::System::Void(*)(::PVOID, ::HFINOKELIDD))((::PBYTE)hIl2Cpp + EHGPNGPADCB__CTOR_OFFSET))(this, AGEFPKLIFGB);
	}

	::System::Void _ctor_1(::HFINOKELIDD AGEFPKLIFGB, ::System::Boolean OGIPLBGBGCL)
	{
		return ((::System::Void(*)(::PVOID, ::HFINOKELIDD, ::System::Boolean))((::PBYTE)hIl2Cpp + EHGPNGPADCB__CTOR_1_OFFSET))(this, AGEFPKLIFGB, OGIPLBGBGCL);
	}

	::HFINOKELIDD NIDEKMGBDCB()
	{
		return ((::HFINOKELIDD(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGPNGPADCB_NIDEKMGBDCB_OFFSET))(this);
	}

	::System::Boolean OPKADBCOKFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGPNGPADCB_OPKADBCOKFG_OFFSET))(this);
	}

	::System::Int32 GKNJOFDOJDK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGPNGPADCB_GKNJOFDOJDK_OFFSET))(this);
	}

	::System::Void IOEFEDAGHGJ(::HFINOKELIDD EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::HFINOKELIDD))((::PBYTE)hIl2Cpp + EHGPNGPADCB_IOEFEDAGHGJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OOPDJBJIAAE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EHGPNGPADCB_OOPDJBJIAAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LDIBMMMBCFB(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EHGPNGPADCB_LDIBMMMBCFB_OFFSET))(this, EGEGIMGMJHN);
	}
};
