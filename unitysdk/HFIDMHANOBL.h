#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMNLGDOJIHI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HFIDMHANOBL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B7C3370)
#define HFIDMHANOBL_EHIHJAPANPI_OFFSET UNITYSDK_OFFSET(0x1B7C3580)
#define HFIDMHANOBL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B7C3690)
#define HFIDMHANOBL_HKCBNGBACOG_OFFSET UNITYSDK_OFFSET(0x1B7C3470)
#define HFIDMHANOBL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B7C3460)
#define HFIDMHANOBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7C3360)

inline static constexpr unsigned int HFIDMHANOBL_TypeDefinitionIndex = 11823;

class HFIDMHANOBL : public ::System::Object
{
public:
	::CMNLGDOJIHI HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* JCEFNJDGCBE; // 0x28
	::System::String* NCCHBCEOEAE; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A

	::System::Void _ctor(::CMNLGDOJIHI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CMNLGDOJIHI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HFIDMHANOBL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIDMHANOBL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIDMHANOBL_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* HKCBNGBACOG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIDMHANOBL_HKCBNGBACOG_OFFSET))(this);
	}

	::System::String* EHIHJAPANPI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIDMHANOBL_EHIHJAPANPI_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFIDMHANOBL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
