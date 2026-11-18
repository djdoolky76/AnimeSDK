#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/POHCIPPPEON.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HACFHLPIJFP_BAIAAFNOONO_OFFSET UNITYSDK_OFFSET(0x18BA8630)
#define HACFHLPIJFP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BA8420)
#define HACFHLPIJFP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BA8620)
#define HACFHLPIJFP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BA8410)
#define HACFHLPIJFP_MPEGBLACKNJ_OFFSET UNITYSDK_OFFSET(0x18BA8510)
#define HACFHLPIJFP__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA8400)

inline static constexpr unsigned int HACFHLPIJFP_TypeDefinitionIndex = 11930;

class HACFHLPIJFP : public ::System::Object
{
public:
	::System::String* INGBAOCGPEF; // 0x10
	::POHCIPPPEON HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* IICFFMCHPGO; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A

	::System::Void _ctor(::POHCIPPPEON LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::POHCIPPPEON, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HACFHLPIJFP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HACFHLPIJFP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HACFHLPIJFP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* MPEGBLACKNJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HACFHLPIJFP_MPEGBLACKNJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HACFHLPIJFP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* BAIAAFNOONO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HACFHLPIJFP_BAIAAFNOONO_OFFSET))(this);
	}
};
