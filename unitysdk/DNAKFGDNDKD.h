#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMGADEJMCEJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DNAKFGDNDKD_CNGFHHECIEL_OFFSET UNITYSDK_OFFSET(0x1A190370)
#define DNAKFGDNDKD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A190750)
#define DNAKFGDNDKD_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1A190840)
#define DNAKFGDNDKD_DLOPLJFNAHO_OFFSET UNITYSDK_OFFSET(0x1A190610)
#define DNAKFGDNDKD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A1904B0)
#define DNAKFGDNDKD_GDEGCPBLBNC_OFFSET UNITYSDK_OFFSET(0x1A190950)
#define DNAKFGDNDKD_KMJKKEGKJDD_OFFSET UNITYSDK_OFFSET(0x1A1904D0)
#define DNAKFGDNDKD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A1904C0)
#define DNAKFGDNDKD_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A190A90)
#define DNAKFGDNDKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A190360)

inline static constexpr unsigned int DNAKFGDNDKD_TypeDefinitionIndex = 10110;

class DNAKFGDNDKD : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* IENCBDEPMFJ; // 0x18
	::GMGADEJMCEJ HBDPAIKANDB; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Int32 FLJKHHBKDKB; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 CEEBHOAKLFN; // 0x3C
	::System::Int32 OBMBBAOLHMD; // 0x40
	::System::Int32 NFAIINHGLPD; // 0x44

	::System::Void _ctor(::GMGADEJMCEJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GMGADEJMCEJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DNAKFGDNDKD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 CNGFHHECIEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAKFGDNDKD_CNGFHHECIEL_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DNAKFGDNDKD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAKFGDNDKD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 KMJKKEGKJDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAKFGDNDKD_KMJKKEGKJDD_OFFSET))(this);
	}

	::System::Int32 DLOPLJFNAHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAKFGDNDKD_DLOPLJFNAHO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAKFGDNDKD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAKFGDNDKD_DECMGICKDLH_OFFSET))(this);
	}

	::System::Int32 GDEGCPBLBNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAKFGDNDKD_GDEGCPBLBNC_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAKFGDNDKD_PPIFNHNGCGO_OFFSET))(this);
	}
};
