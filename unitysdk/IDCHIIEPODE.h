#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNNPELFIFLF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IDCHIIEPODE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19349040)
#define IDCHIIEPODE_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x19349150)
#define IDCHIIEPODE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19349130)
#define IDCHIIEPODE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19349140)
#define IDCHIIEPODE_LPOENFFGGAP_OFFSET UNITYSDK_OFFSET(0x19349260)
#define IDCHIIEPODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19349030)

inline static constexpr unsigned int IDCHIIEPODE_TypeDefinitionIndex = 12558;

class IDCHIIEPODE : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* OMDLAHBLCAM; // 0x18
	::FNNPELFIFLF HBDPAIKANDB; // 0x20
	::System::Int32 KPCAHHHPOLN; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36

	::System::Void _ctor(::FNNPELFIFLF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FNNPELFIFLF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IDCHIIEPODE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCHIIEPODE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IDCHIIEPODE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCHIIEPODE_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCHIIEPODE_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Int32 LPOENFFGGAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCHIIEPODE_LPOENFFGGAP_OFFSET))(this);
	}
};
