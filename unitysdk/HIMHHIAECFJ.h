#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AODBEGKPGOI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HIMHHIAECFJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17475A90)
#define HIMHHIAECFJ_DDLHALALCBE_OFFSET UNITYSDK_OFFSET(0x17475970)
#define HIMHHIAECFJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17475960)
#define HIMHHIAECFJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17475A80)
#define HIMHHIAECFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17475950)

inline static constexpr unsigned int HIMHHIAECFJ_TypeDefinitionIndex = 11296;

class HIMHHIAECFJ : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::AODBEGKPGOI HBDPAIKANDB; // 0x18
	::System::String* JKEADOBNAAD; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::AODBEGKPGOI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AODBEGKPGOI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HIMHHIAECFJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HIMHHIAECFJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* DDLHALALCBE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMHHIAECFJ_DDLHALALCBE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMHHIAECFJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMHHIAECFJ_COFGIJJOFLP_OFFSET))(this);
	}
};
