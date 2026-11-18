#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCPKIJCJOEH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LDNENIGBCHD_ACECFFFKEIL_OFFSET UNITYSDK_OFFSET(0x1B2FC050)
#define LDNENIGBCHD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B2FBE10)
#define LDNENIGBCHD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B2FC160)
#define LDNENIGBCHD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B2FBF00)
#define LDNENIGBCHD_ONGFJFGOAAJ_OFFSET UNITYSDK_OFFSET(0x1B2FBF10)
#define LDNENIGBCHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2FBE00)

inline static constexpr unsigned int LDNENIGBCHD_TypeDefinitionIndex = 12086;

class LDNENIGBCHD : public ::System::Object
{
public:
	::KCPKIJCJOEH HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* KNLEOGIEHHH; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 KEFDJONMDON; // 0x34

	::System::Void _ctor(::KCPKIJCJOEH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KCPKIJCJOEH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LDNENIGBCHD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNENIGBCHD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNENIGBCHD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 ONGFJFGOAAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNENIGBCHD_ONGFJFGOAAJ_OFFSET))(this);
	}

	::System::String* ACECFFFKEIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNENIGBCHD_ACECFFFKEIL_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LDNENIGBCHD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
