#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDNLNJCIAPC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define JKPADCILABG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x152F6F70)
#define JKPADCILABG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x152F6F60)
#define JKPADCILABG_GFHFOEPFNJL_OFFSET UNITYSDK_OFFSET(0x152F6CC0)
#define JKPADCILABG_HBMGLCOEEOH_OFFSET UNITYSDK_OFFSET(0x152F6B70)
#define JKPADCILABG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x152F6CB0)
#define JKPADCILABG_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x152F6E20)
#define JKPADCILABG__CTOR_OFFSET UNITYSDK_OFFSET(0x152F6B60)

inline static constexpr unsigned int JKPADCILABG_TypeDefinitionIndex = 13285;

class JKPADCILABG : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::CDNLNJCIAPC HBDPAIKANDB; // 0x18
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte GCHCDJCFCEG; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E
	::System::Byte ACIOBDEBDNK; // 0x2F
	::System::Boolean BNEJOKNMPKG; // 0x30
	::System::Byte _padding0[0x3];
	::System::Int32 EJCGCMHCELN; // 0x34

	::System::Void _ctor(::CDNLNJCIAPC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CDNLNJCIAPC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JKPADCILABG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 HBMGLCOEEOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPADCILABG_HBMGLCOEEOH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPADCILABG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Boolean GFHFOEPFNJL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPADCILABG_GFHFOEPFNJL_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPADCILABG_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JKPADCILABG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPADCILABG_COFGIJJOFLP_OFFSET))(this);
	}
};
