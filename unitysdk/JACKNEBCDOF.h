#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOMGMONOILC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define JACKNEBCDOF_BJKGNKEPEJB_OFFSET UNITYSDK_OFFSET(0x1B890F80)
#define JACKNEBCDOF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B890D40)
#define JACKNEBCDOF_FDDEDEDKPMJ_OFFSET UNITYSDK_OFFSET(0x1B890BE0)
#define JACKNEBCDOF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B890BD0)
#define JACKNEBCDOF_KMJOKBIIEDB_OFFSET UNITYSDK_OFFSET(0x1B891220)
#define JACKNEBCDOF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B890E30)
#define JACKNEBCDOF_MBAJBAPIFEF_OFFSET UNITYSDK_OFFSET(0x1B891360)
#define JACKNEBCDOF_NENOCGIAOCE_OFFSET UNITYSDK_OFFSET(0x1B8910C0)
#define JACKNEBCDOF_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B890E40)
#define JACKNEBCDOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B890BC0)

inline static constexpr unsigned int JACKNEBCDOF_TypeDefinitionIndex = 15772;

class JACKNEBCDOF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::OOMGMONOILC HBDPAIKANDB; // 0x18
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 OCFJMFHDEBP; // 0x2C
	::System::Single LBOLLKCCDJB; // 0x30
	::System::Single GOLKPDJEMDI; // 0x34
	::System::Int32 GMOBKPAINIH; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Int32 DLHOACCMOKJ; // 0x40

	::System::Void _ctor(::OOMGMONOILC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OOMGMONOILC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JACKNEBCDOF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JACKNEBCDOF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single FDDEDEDKPMJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JACKNEBCDOF_FDDEDEDKPMJ_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JACKNEBCDOF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JACKNEBCDOF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JACKNEBCDOF_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 BJKGNKEPEJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JACKNEBCDOF_BJKGNKEPEJB_OFFSET))(this);
	}

	::System::Single NENOCGIAOCE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JACKNEBCDOF_NENOCGIAOCE_OFFSET))(this);
	}

	::System::Int32 KMJOKBIIEDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JACKNEBCDOF_KMJOKBIIEDB_OFFSET))(this);
	}

	::System::Int32 MBAJBAPIFEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JACKNEBCDOF_MBAJBAPIFEF_OFFSET))(this);
	}
};
