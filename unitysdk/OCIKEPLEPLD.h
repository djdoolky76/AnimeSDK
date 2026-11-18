#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOKMNBMHACB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define OCIKEPLEPLD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19129010)
#define OCIKEPLEPLD_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x19129360)
#define OCIKEPLEPLD_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x19129250)
#define OCIKEPLEPLD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19129100)
#define OCIKEPLEPLD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19129000)
#define OCIKEPLEPLD_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19129110)
#define OCIKEPLEPLD__CTOR_OFFSET UNITYSDK_OFFSET(0x19128FF0)

inline static constexpr unsigned int OCIKEPLEPLD_TypeDefinitionIndex = 12673;

class OCIKEPLEPLD : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* IENCBDEPMFJ; // 0x18
	::NOKMNBMHACB HBDPAIKANDB; // 0x20
	::System::String* OMDLAHBLCAM; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3D
	::System::Byte CNIAANMNOCF; // 0x3E

	::System::Void _ctor(::NOKMNBMHACB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NOKMNBMHACB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OCIKEPLEPLD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIKEPLEPLD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIKEPLEPLD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OCIKEPLEPLD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIKEPLEPLD_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIKEPLEPLD_ENJENAJGHFI_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIKEPLEPLD_DECMGICKDLH_OFFSET))(this);
	}
};
