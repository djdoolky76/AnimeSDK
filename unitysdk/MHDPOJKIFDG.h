#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBBAKHNFPLH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MHDPOJKIFDG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BA96540)
#define MHDPOJKIFDG_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x1BA96640)
#define MHDPOJKIFDG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BA96750)
#define MHDPOJKIFDG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BA96630)
#define MHDPOJKIFDG_OLKPIHLNEIN_OFFSET UNITYSDK_OFFSET(0x1BA962F0)
#define MHDPOJKIFDG_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1BA96400)
#define MHDPOJKIFDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA962E0)

inline static constexpr unsigned int MHDPOJKIFDG_TypeDefinitionIndex = 10326;

class MHDPOJKIFDG : public ::System::Object
{
public:
	::System::String* HAPDMBKHEGG; // 0x10
	::BBBAKHNFPLH HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* OMDLAHBLCAM; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x3C

	::System::Void _ctor(::BBBAKHNFPLH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BBBAKHNFPLH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MHDPOJKIFDG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* OLKPIHLNEIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDPOJKIFDG_OLKPIHLNEIN_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDPOJKIFDG_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDPOJKIFDG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDPOJKIFDG_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDPOJKIFDG_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MHDPOJKIFDG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
