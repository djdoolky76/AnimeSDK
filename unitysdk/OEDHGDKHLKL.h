#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHBEEEFIMNI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define OEDHGDKHLKL_CBHNFLBEJCB_OFFSET UNITYSDK_OFFSET(0x173652A0)
#define OEDHGDKHLKL_CJDGPJDLCHC_OFFSET UNITYSDK_OFFSET(0x173653B0)
#define OEDHGDKHLKL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17365190)
#define OEDHGDKHLKL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17365290)
#define OEDHGDKHLKL_HPGHDLONMFH_OFFSET UNITYSDK_OFFSET(0x17365080)
#define OEDHGDKHLKL_ILMKLGIDBJI_OFFSET UNITYSDK_OFFSET(0x17364F70)
#define OEDHGDKHLKL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17365280)
#define OEDHGDKHLKL__CTOR_OFFSET UNITYSDK_OFFSET(0x17364F60)

inline static constexpr unsigned int OEDHGDKHLKL_TypeDefinitionIndex = 12617;

class OEDHGDKHLKL : public ::System::Object
{
public:
	::System::String* ILNAMIMPHBA; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* NCLENCBEPOJ; // 0x20
	::System::String* NPNEPEJEGCC; // 0x28
	::System::String* DIOALFGAJLO; // 0x30
	::BHBEEEFIMNI HBDPAIKANDB; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte CNIAANMNOCF; // 0x4A

	::System::Void _ctor(::BHBEEEFIMNI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BHBEEEFIMNI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OEDHGDKHLKL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* ILMKLGIDBJI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDHGDKHLKL_ILMKLGIDBJI_OFFSET))(this);
	}

	::System::String* HPGHDLONMFH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDHGDKHLKL_HPGHDLONMFH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDHGDKHLKL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDHGDKHLKL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OEDHGDKHLKL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* CBHNFLBEJCB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDHGDKHLKL_CBHNFLBEJCB_OFFSET))(this);
	}

	::System::String* CJDGPJDLCHC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDHGDKHLKL_CJDGPJDLCHC_OFFSET))(this);
	}
};
