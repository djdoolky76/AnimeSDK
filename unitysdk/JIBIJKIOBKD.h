#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOHDNDMOGGL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JIBIJKIOBKD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BCBF30)
#define JIBIJKIOBKD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BCC170)
#define JIBIJKIOBKD_GAPCNGIABLO_OFFSET UNITYSDK_OFFSET(0x18BCC030)
#define JIBIJKIOBKD_HDAGGDKMDAI_OFFSET UNITYSDK_OFFSET(0x18BCBE20)
#define JIBIJKIOBKD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BCC020)
#define JIBIJKIOBKD_NGKOPBCHFOP_OFFSET UNITYSDK_OFFSET(0x18BCC180)
#define JIBIJKIOBKD__CTOR_OFFSET UNITYSDK_OFFSET(0x18BCBE10)

inline static constexpr unsigned int JIBIJKIOBKD_TypeDefinitionIndex = 12739;

class JIBIJKIOBKD : public ::System::Object
{
public:
	::System::String* OHMLOEKNBHC; // 0x10
	::System::String* BKGOMDBILLM; // 0x18
	::MOHDNDMOGGL HBDPAIKANDB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 FEJPLAFBBGE; // 0x3C

	::System::Void _ctor(::MOHDNDMOGGL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MOHDNDMOGGL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JIBIJKIOBKD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* HDAGGDKMDAI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBIJKIOBKD_HDAGGDKMDAI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBIJKIOBKD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBIJKIOBKD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 GAPCNGIABLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBIJKIOBKD_GAPCNGIABLO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JIBIJKIOBKD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* NGKOPBCHFOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBIJKIOBKD_NGKOPBCHFOP_OFFSET))(this);
	}
};
