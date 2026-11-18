#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OHMJJNECAEE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GDKIJMFNEOP_CACAMGIIEFC_OFFSET UNITYSDK_OFFSET(0x18BA2E30)
#define GDKIJMFNEOP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BA2D40)
#define GDKIJMFNEOP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BA2D20)
#define GDKIJMFNEOP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BA2D30)
#define GDKIJMFNEOP__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA2D10)

inline static constexpr unsigned int GDKIJMFNEOP_TypeDefinitionIndex = 14203;

class GDKIJMFNEOP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* PEPHJINKOII; // 0x18
	::OHMJJNECAEE HBDPAIKANDB; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::OHMJJNECAEE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OHMJJNECAEE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GDKIJMFNEOP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDKIJMFNEOP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKIJMFNEOP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKIJMFNEOP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* CACAMGIIEFC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKIJMFNEOP_CACAMGIIEFC_OFFSET))(this);
	}
};
