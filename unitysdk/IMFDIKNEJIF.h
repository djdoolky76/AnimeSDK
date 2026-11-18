#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKMDKOBHIND.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IMFDIKNEJIF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19543500)
#define IMFDIKNEJIF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x195435F0)
#define IMFDIKNEJIF_GAPCNGIABLO_OFFSET UNITYSDK_OFFSET(0x19543610)
#define IMFDIKNEJIF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19543600)
#define IMFDIKNEJIF_NGKOPBCHFOP_OFFSET UNITYSDK_OFFSET(0x195433F0)
#define IMFDIKNEJIF__CTOR_OFFSET UNITYSDK_OFFSET(0x195433E0)

inline static constexpr unsigned int IMFDIKNEJIF_TypeDefinitionIndex = 10692;

class IMFDIKNEJIF : public ::System::Object
{
public:
	::System::String* OHMLOEKNBHC; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::EKMDKOBHIND HBDPAIKANDB; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 FEJPLAFBBGE; // 0x34

	::System::Void _ctor(::EKMDKOBHIND LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EKMDKOBHIND, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IMFDIKNEJIF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* NGKOPBCHFOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFDIKNEJIF_NGKOPBCHFOP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFDIKNEJIF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IMFDIKNEJIF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFDIKNEJIF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 GAPCNGIABLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFDIKNEJIF_GAPCNGIABLO_OFFSET))(this);
	}
};
