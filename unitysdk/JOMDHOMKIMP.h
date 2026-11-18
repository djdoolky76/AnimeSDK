#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMJFNCAMMFB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JOMDHOMKIMP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1611E210)
#define JOMDHOMKIMP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1611DE60)
#define JOMDHOMKIMP_GNEJINHIOHF_OFFSET UNITYSDK_OFFSET(0x1611DF90)
#define JOMDHOMKIMP_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x1611DE80)
#define JOMDHOMKIMP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1611DE70)
#define JOMDHOMKIMP_NMEAODJGLFK_OFFSET UNITYSDK_OFFSET(0x1611E0D0)
#define JOMDHOMKIMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1611DE50)

inline static constexpr unsigned int JOMDHOMKIMP_TypeDefinitionIndex = 11547;

class JOMDHOMKIMP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* EOALHEEBMKM; // 0x18
	::IMJFNCAMMFB HBDPAIKANDB; // 0x20
	::System::Int32 LBMIAIFAIHD; // 0x30
	::System::Int32 KKLFCHOOCKP; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A

	::System::Void _ctor(::IMJFNCAMMFB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IMJFNCAMMFB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JOMDHOMKIMP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JOMDHOMKIMP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMDHOMKIMP_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMDHOMKIMP_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::Int32 GNEJINHIOHF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMDHOMKIMP_GNEJINHIOHF_OFFSET))(this);
	}

	::System::Int32 NMEAODJGLFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMDHOMKIMP_NMEAODJGLFK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMDHOMKIMP_COFGIJJOFLP_OFFSET))(this);
	}
};
