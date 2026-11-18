#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMMNEEJLCIL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PAJOIDJJBNK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AB3D800)
#define PAJOIDJJBNK_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1AB3D6F0)
#define PAJOIDJJBNK_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x1AB3D910)
#define PAJOIDJJBNK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AB3D8F0)
#define PAJOIDJJBNK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AB3D900)
#define PAJOIDJJBNK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB3D6E0)

inline static constexpr unsigned int PAJOIDJJBNK_TypeDefinitionIndex = 9459;

class PAJOIDJJBNK : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::IMMNEEJLCIL HBDPAIKANDB; // 0x18
	::System::String* IENCBDEPMFJ; // 0x28
	::System::String* OMDLAHBLCAM; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A

	::System::Void _ctor(::IMMNEEJLCIL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IMMNEEJLCIL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PAJOIDJJBNK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJOIDJJBNK_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJOIDJJBNK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PAJOIDJJBNK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJOIDJJBNK_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAJOIDJJBNK_ENJENAJGHFI_OFFSET))(this);
	}
};
