#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPAPDMKDCLJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IGDNCLBMOFP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x16107AD0)
#define IGDNCLBMOFP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x16107AC0)
#define IGDNCLBMOFP_GHGEHFMIDLN_OFFSET UNITYSDK_OFFSET(0x161079B0)
#define IGDNCLBMOFP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x161079A0)
#define IGDNCLBMOFP__CTOR_OFFSET UNITYSDK_OFFSET(0x16107990)

inline static constexpr unsigned int IGDNCLBMOFP_TypeDefinitionIndex = 14145;

class IGDNCLBMOFP : public ::System::Object
{
public:
	::EPAPDMKDCLJ HBDPAIKANDB; // 0x10
	::System::String* ENKKMNPDOLC; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::EPAPDMKDCLJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EPAPDMKDCLJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IGDNCLBMOFP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDNCLBMOFP_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* GHGEHFMIDLN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDNCLBMOFP_GHGEHFMIDLN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IGDNCLBMOFP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDNCLBMOFP_COFGIJJOFLP_OFFSET))(this);
	}
};
