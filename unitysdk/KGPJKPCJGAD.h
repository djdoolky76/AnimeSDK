#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPDFHBFPFDC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KGPJKPCJGAD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B505C90)
#define KGPJKPCJGAD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B505C70)
#define KGPJKPCJGAD_KMLBIKELPDP_OFFSET UNITYSDK_OFFSET(0x1B505D80)
#define KGPJKPCJGAD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B505C80)
#define KGPJKPCJGAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B505C60)

inline static constexpr unsigned int KGPJKPCJGAD_TypeDefinitionIndex = 11291;

class KGPJKPCJGAD : public ::System::Object
{
public:
	::IPDFHBFPFDC HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 NKFBFLEMMAG; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2E

	::System::Void _ctor(::IPDFHBFPFDC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IPDFHBFPFDC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KGPJKPCJGAD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KGPJKPCJGAD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPJKPCJGAD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPJKPCJGAD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 KMLBIKELPDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPJKPCJGAD_KMLBIKELPDP_OFFSET))(this);
	}
};
