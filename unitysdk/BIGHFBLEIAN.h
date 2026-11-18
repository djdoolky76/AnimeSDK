#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENBFBKHOHLJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BIGHFBLEIAN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C51BEE0)
#define BIGHFBLEIAN_EGFCGJNIICG_OFFSET UNITYSDK_OFFSET(0x1C51BC80)
#define BIGHFBLEIAN_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x1C51BDD0)
#define BIGHFBLEIAN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C51BDC0)
#define BIGHFBLEIAN_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x1C51BB60)
#define BIGHFBLEIAN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C51BC70)
#define BIGHFBLEIAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C51BB50)

inline static constexpr unsigned int BIGHFBLEIAN_TypeDefinitionIndex = 10807;

class BIGHFBLEIAN : public ::System::Object
{
public:
	::System::String* OMDLAHBLCAM; // 0x10
	::System::String* EOALHEEBMKM; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::ENBFBKHOHLJ HBDPAIKANDB; // 0x28
	::System::Int32 EDOEPHPBJHH; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E

	::System::Void _ctor(::ENBFBKHOHLJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ENBFBKHOHLJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BIGHFBLEIAN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGHFBLEIAN_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGHFBLEIAN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 EGFCGJNIICG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGHFBLEIAN_EGFCGJNIICG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BIGHFBLEIAN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGHFBLEIAN_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGHFBLEIAN_COFGIJJOFLP_OFFSET))(this);
	}
};
