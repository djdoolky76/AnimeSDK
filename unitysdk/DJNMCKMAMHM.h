#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGHGCPMGDBD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DJNMCKMAMHM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19ADC370)
#define DJNMCKMAMHM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19ADC570)
#define DJNMCKMAMHM_GINBCBFHFNO_OFFSET UNITYSDK_OFFSET(0x19ADC0F0)
#define DJNMCKMAMHM_JHGCKDJFNJA_OFFSET UNITYSDK_OFFSET(0x19ADC580)
#define DJNMCKMAMHM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19ADC690)
#define DJNMCKMAMHM_LNLNHEMFAEC_OFFSET UNITYSDK_OFFSET(0x19ADC460)
#define DJNMCKMAMHM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19ADC230)
#define DJNMCKMAMHM__CTOR_OFFSET UNITYSDK_OFFSET(0x19ADC0E0)

inline static constexpr unsigned int DJNMCKMAMHM_TypeDefinitionIndex = 14581;

class DJNMCKMAMHM : public ::System::Object
{
public:
	::LGHGCPMGDBD HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* DHBLPDHJAOH; // 0x28
	::System::String* BMKFPOJEAPM; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Int32 AECICGOPDLO; // 0x40

	::System::Void _ctor(::LGHGCPMGDBD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LGHGCPMGDBD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DJNMCKMAMHM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 GINBCBFHFNO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNMCKMAMHM_GINBCBFHFNO_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNMCKMAMHM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNMCKMAMHM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* LNLNHEMFAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNMCKMAMHM_LNLNHEMFAEC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DJNMCKMAMHM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* JHGCKDJFNJA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNMCKMAMHM_JHGCKDJFNJA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNMCKMAMHM_LJANCIBECFG_OFFSET))(this);
	}
};
