#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNCBGOOEKHP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PMBJMCHFBKD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AD9C410)
#define PMBJMCHFBKD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AD9C3F0)
#define PMBJMCHFBKD_HGKJEKCGMOP_OFFSET UNITYSDK_OFFSET(0x1AD9C0C0)
#define PMBJMCHFBKD_IOCNEHIGCOA_OFFSET UNITYSDK_OFFSET(0x1AD9C1D0)
#define PMBJMCHFBKD_JOEFKNAIDOF_OFFSET UNITYSDK_OFFSET(0x1AD9BE40)
#define PMBJMCHFBKD_LACJOALKGMI_OFFSET UNITYSDK_OFFSET(0x1AD9BF80)
#define PMBJMCHFBKD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AD9C400)
#define PMBJMCHFBKD_PBMANFDIKLD_OFFSET UNITYSDK_OFFSET(0x1AD9C2E0)
#define PMBJMCHFBKD_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1AD9BD00)
#define PMBJMCHFBKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD9BCF0)

inline static constexpr unsigned int PMBJMCHFBKD_TypeDefinitionIndex = 9983;

class PMBJMCHFBKD : public ::System::Object
{
public:
	::System::String* JJHDKFIDNGK; // 0x10
	::System::String* KBGGFOCFIJP; // 0x18
	::FNCBGOOEKHP HBDPAIKANDB; // 0x20
	::System::String* OJGOGLBOEIG; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Int32 AMGGLJEDCHO; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x44
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x45
	::System::Byte CNIAANMNOCF; // 0x46
	::System::Byte _padding0[0x1];
	::System::Int32 NKHEPLMMJHH; // 0x48
	::System::Int32 PCMOJLNOPPM; // 0x4C

	::System::Void _ctor(::FNCBGOOEKHP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FNCBGOOEKHP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PMBJMCHFBKD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBJMCHFBKD_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 JOEFKNAIDOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBJMCHFBKD_JOEFKNAIDOF_OFFSET))(this);
	}

	::System::Int32 LACJOALKGMI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBJMCHFBKD_LACJOALKGMI_OFFSET))(this);
	}

	::System::String* HGKJEKCGMOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBJMCHFBKD_HGKJEKCGMOP_OFFSET))(this);
	}

	::System::String* IOCNEHIGCOA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBJMCHFBKD_IOCNEHIGCOA_OFFSET))(this);
	}

	::System::String* PBMANFDIKLD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBJMCHFBKD_PBMANFDIKLD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMBJMCHFBKD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBJMCHFBKD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBJMCHFBKD_COFGIJJOFLP_OFFSET))(this);
	}
};
