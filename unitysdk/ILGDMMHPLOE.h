#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFJHNDBDHGN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define ILGDMMHPLOE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B4EFC70)
#define ILGDMMHPLOE_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1B4EFFC0)
#define ILGDMMHPLOE_DFBECACCEHI_OFFSET UNITYSDK_OFFSET(0x1B4F00D0)
#define ILGDMMHPLOE_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x1B4EFD70)
#define ILGDMMHPLOE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B4EFC60)
#define ILGDMMHPLOE_KFKPFJJAIKG_OFFSET UNITYSDK_OFFSET(0x1B4F01E0)
#define ILGDMMHPLOE_KNLKMHKAPAI_OFFSET UNITYSDK_OFFSET(0x1B4EFE80)
#define ILGDMMHPLOE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B4EFD60)
#define ILGDMMHPLOE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4EFC50)

inline static constexpr unsigned int ILGDMMHPLOE_TypeDefinitionIndex = 9979;

class ILGDMMHPLOE : public ::System::Object
{
public:
	::DFJHNDBDHGN HBDPAIKANDB; // 0x10
	::System::String* HCCFAJCCPPN; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* BJOFIAEADBL; // 0x30
	::System::String* OMDLAHBLCAM; // 0x38
	::System::String* IENCBDEPMFJ; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x48
	::System::Byte CNIAANMNOCF; // 0x49
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 BKMCOKMKJNO; // 0x4C

	::System::Void _ctor(::DFJHNDBDHGN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DFJHNDBDHGN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ILGDMMHPLOE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILGDMMHPLOE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDMMHPLOE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDMMHPLOE_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDMMHPLOE_ENJENAJGHFI_OFFSET))(this);
	}

	::System::Int32 KNLKMHKAPAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDMMHPLOE_KNLKMHKAPAI_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDMMHPLOE_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* DFBECACCEHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDMMHPLOE_DFBECACCEHI_OFFSET))(this);
	}

	::System::String* KFKPFJJAIKG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGDMMHPLOE_KFKPFJJAIKG_OFFSET))(this);
	}
};
