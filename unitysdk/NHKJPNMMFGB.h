#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAGHFIMIEOO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NHKJPNMMFGB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1CCEC750)
#define NHKJPNMMFGB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1CCECA90)
#define NHKJPNMMFGB_KEABBDPLEAG_OFFSET UNITYSDK_OFFSET(0x1CCEC840)
#define NHKJPNMMFGB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1CCEC740)
#define NHKJPNMMFGB_MFLIFALMILM_OFFSET UNITYSDK_OFFSET(0x1CCEC600)
#define NHKJPNMMFGB_PDEPHNIEDCE_OFFSET UNITYSDK_OFFSET(0x1CCEC980)
#define NHKJPNMMFGB__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEC5F0)

inline static constexpr unsigned int NHKJPNMMFGB_TypeDefinitionIndex = 10174;

class NHKJPNMMFGB : public ::System::Object
{
public:
	::System::String* HCFHHDGPIDO; // 0x10
	::CAGHFIMIEOO HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 DINAKODLAEA; // 0x30
	::System::Int32 KLBMHDJEELH; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::CAGHFIMIEOO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CAGHFIMIEOO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NHKJPNMMFGB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 MFLIFALMILM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKJPNMMFGB_MFLIFALMILM_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKJPNMMFGB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKJPNMMFGB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 KEABBDPLEAG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKJPNMMFGB_KEABBDPLEAG_OFFSET))(this);
	}

	::System::String* PDEPHNIEDCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKJPNMMFGB_PDEPHNIEDCE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NHKJPNMMFGB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
