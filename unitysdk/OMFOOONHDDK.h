#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDHAJLFABDC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define OMFOOONHDDK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17369DD0)
#define OMFOOONHDDK_EJEPBJPCMJL_OFFSET UNITYSDK_OFFSET(0x17369EC0)
#define OMFOOONHDDK_EOBPHJNKAFN_OFFSET UNITYSDK_OFFSET(0x1736A010)
#define OMFOOONHDDK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1736A000)
#define OMFOOONHDDK_JKFAHEJIKOF_OFFSET UNITYSDK_OFFSET(0x1736A120)
#define OMFOOONHDDK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17369C80)
#define OMFOOONHDDK_OMBLKLNGBMK_OFFSET UNITYSDK_OFFSET(0x17369C90)
#define OMFOOONHDDK__CTOR_OFFSET UNITYSDK_OFFSET(0x17369C70)

inline static constexpr unsigned int OMFOOONHDDK_TypeDefinitionIndex = 11796;

class OMFOOONHDDK : public ::System::Object
{
public:
	::System::String* FABHKGEGPDM; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::PDHAJLFABDC HBDPAIKANDB; // 0x20
	::System::Byte GCHCDJCFCEG; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x33
	::System::Int32 FAMOANNDKBA; // 0x34
	::System::Int32 JPFIGHDPDGF; // 0x38
	::System::Int32 MFKIKGAKKCI; // 0x3C

	::System::Void _ctor(::PDHAJLFABDC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PDHAJLFABDC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OMFOOONHDDK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFOOONHDDK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 OMBLKLNGBMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFOOONHDDK_OMBLKLNGBMK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFOOONHDDK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 EJEPBJPCMJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFOOONHDDK_EJEPBJPCMJL_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMFOOONHDDK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* EOBPHJNKAFN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFOOONHDDK_EOBPHJNKAFN_OFFSET))(this);
	}

	::System::Int32 JKFAHEJIKOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFOOONHDDK_JKFAHEJIKOF_OFFSET))(this);
	}
};
