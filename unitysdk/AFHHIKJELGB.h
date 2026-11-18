#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFNJAADPFKK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define AFHHIKJELGB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17EE6490)
#define AFHHIKJELGB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17EE6300)
#define AFHHIKJELGB_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x17EE5BE0)
#define AFHHIKJELGB_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x17EE5F70)
#define AFHHIKJELGB_KKHBDKDLIBF_OFFSET UNITYSDK_OFFSET(0x17EE6310)
#define AFHHIKJELGB_LENCEGIELFL_OFFSET UNITYSDK_OFFSET(0x17EE5D60)
#define AFHHIKJELGB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17EE6580)
#define AFHHIKJELGB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17EE6180)
#define AFHHIKJELGB__CTOR_OFFSET UNITYSDK_OFFSET(0x17EE5BD0)

inline static constexpr unsigned int AFHHIKJELGB_TypeDefinitionIndex = 11538;

class AFHHIKJELGB : public ::System::Object
{
public:
	::System::String* JKPGPKFPBJN; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* EOALHEEBMKM; // 0x20
	::DFNJAADPFKK HBDPAIKANDB; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Int32 POKJNGILNLB; // 0x40
	::System::Int32 BPMMNELACLA; // 0x44

	::System::Void _ctor(::DFNJAADPFKK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DFNJAADPFKK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AFHHIKJELGB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHHIKJELGB_HKELPCLHLEC_OFFSET))(this);
	}

	::System::String* LENCEGIELFL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHHIKJELGB_LENCEGIELFL_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHHIKJELGB_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHHIKJELGB_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AFHHIKJELGB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 KKHBDKDLIBF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHHIKJELGB_KKHBDKDLIBF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHHIKJELGB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHHIKJELGB_LJANCIBECFG_OFFSET))(this);
	}
};
