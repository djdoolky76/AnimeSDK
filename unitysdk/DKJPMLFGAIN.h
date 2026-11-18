#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPMFOADIELK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DKJPMLFGAIN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195107B0)
#define DKJPMLFGAIN_FMIJDKMDEOJ_OFFSET UNITYSDK_OFFSET(0x195106A0)
#define DKJPMLFGAIN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19510190)
#define DKJPMLFGAIN_JMMCEAHHFKI_OFFSET UNITYSDK_OFFSET(0x195108A0)
#define DKJPMLFGAIN_KMIOOGBFIIB_OFFSET UNITYSDK_OFFSET(0x19510420)
#define DKJPMLFGAIN_LHFBDCOMFAM_OFFSET UNITYSDK_OFFSET(0x195102E0)
#define DKJPMLFGAIN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19510180)
#define DKJPMLFGAIN_LLDAMBKLDNI_OFFSET UNITYSDK_OFFSET(0x19510070)
#define DKJPMLFGAIN_MJENJFHONJB_OFFSET UNITYSDK_OFFSET(0x195101A0)
#define DKJPMLFGAIN_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19510560)
#define DKJPMLFGAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x19510060)

inline static constexpr unsigned int DKJPMLFGAIN_TypeDefinitionIndex = 9933;

class DKJPMLFGAIN : public ::System::Object
{
public:
	::LPMFOADIELK HBDPAIKANDB; // 0x10
	::System::String* DNJIKFFFDBO; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* DEEJHDPEMLG; // 0x30
	::System::Int32 DEJAMNPAFDL; // 0x38
	::System::Int32 EEHLKMHNNNN; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte GCHCDJCFCEG; // 0x42
	::System::Byte ACIOBDEBDNK; // 0x43
	::System::Int32 OGHPKDOHNIN; // 0x44
	::System::Int32 PCMOJLNOPPM; // 0x48
	::System::Int32 OKFFDCFCBKO; // 0x4C

	::System::Void _ctor(::LPMFOADIELK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LPMFOADIELK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DKJPMLFGAIN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* LLDAMBKLDNI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJPMLFGAIN_LLDAMBKLDNI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJPMLFGAIN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DKJPMLFGAIN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MJENJFHONJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJPMLFGAIN_MJENJFHONJB_OFFSET))(this);
	}

	::System::Int32 LHFBDCOMFAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJPMLFGAIN_LHFBDCOMFAM_OFFSET))(this);
	}

	::System::Int32 KMIOOGBFIIB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJPMLFGAIN_KMIOOGBFIIB_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJPMLFGAIN_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* FMIJDKMDEOJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJPMLFGAIN_FMIJDKMDEOJ_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJPMLFGAIN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 JMMCEAHHFKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJPMLFGAIN_JMMCEAHHFKI_OFFSET))(this);
	}
};
