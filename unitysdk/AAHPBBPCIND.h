#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGBMAGMKCLD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define AAHPBBPCIND_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x187692B0)
#define AAHPBBPCIND_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x187693A0)
#define AAHPBBPCIND_GKKONHLMHNB_OFFSET UNITYSDK_OFFSET(0x18769190)
#define AAHPBBPCIND_IIAIECHJGOP_OFFSET UNITYSDK_OFFSET(0x187694C0)
#define AAHPBBPCIND_KFEJHGGDOMP_OFFSET UNITYSDK_OFFSET(0x187693B0)
#define AAHPBBPCIND_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x187692A0)
#define AAHPBBPCIND__CTOR_OFFSET UNITYSDK_OFFSET(0x18769180)

inline static constexpr unsigned int AAHPBBPCIND_TypeDefinitionIndex = 13951;

class AAHPBBPCIND : public ::System::Object
{
public:
	::System::String* FNDBCBEFLIL; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* GPELKGKEFFJ; // 0x20
	::System::String* DLCCOFAIIOA; // 0x28
	::CGBMAGMKCLD HBDPAIKANDB; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42

	::System::Void _ctor(::CGBMAGMKCLD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CGBMAGMKCLD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AAHPBBPCIND__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* GKKONHLMHNB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHPBBPCIND_GKKONHLMHNB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHPBBPCIND_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHPBBPCIND_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AAHPBBPCIND_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* KFEJHGGDOMP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHPBBPCIND_KFEJHGGDOMP_OFFSET))(this);
	}

	::System::String* IIAIECHJGOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHPBBPCIND_IIAIECHJGOP_OFFSET))(this);
	}
};
