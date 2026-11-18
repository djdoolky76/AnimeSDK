#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEFOPJENDKP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define FMGKBIHJDLL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1ADE8790)
#define FMGKBIHJDLL_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x1ADE8680)
#define FMGKBIHJDLL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1ADE8660)
#define FMGKBIHJDLL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1ADE8670)
#define FMGKBIHJDLL_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1ADE8880)
#define FMGKBIHJDLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADE8650)

inline static constexpr unsigned int FMGKBIHJDLL_TypeDefinitionIndex = 11552;

class FMGKBIHJDLL : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* OMDLAHBLCAM; // 0x18
	::System::String* IENCBDEPMFJ; // 0x20
	::FEFOPJENDKP HBDPAIKANDB; // 0x28
	::System::String* JPNOHBLNEMO; // 0x38
	::System::Int32 NDLMEFKAEON; // 0x40
	::System::Byte CNIAANMNOCF; // 0x44
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x45
	::System::Byte ACIOBDEBDNK; // 0x46
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x48

	::System::Void _ctor(::FEFOPJENDKP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FEFOPJENDKP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FMGKBIHJDLL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMGKBIHJDLL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGKBIHJDLL_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGKBIHJDLL_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGKBIHJDLL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGKBIHJDLL_PPIFNHNGCGO_OFFSET))(this);
	}
};
