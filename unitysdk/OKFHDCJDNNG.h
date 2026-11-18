#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDOJMLDEJOD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define OKFHDCJDNNG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1D0D32B0)
#define OKFHDCJDNNG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1D0D34C0)
#define OKFHDCJDNNG_LCAHMDAHBAK_OFFSET UNITYSDK_OFFSET(0x1D0D33A0)
#define OKFHDCJDNNG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1D0D34B0)
#define OKFHDCJDNNG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D32A0)

inline static constexpr unsigned int OKFHDCJDNNG_TypeDefinitionIndex = 14273;

class OKFHDCJDNNG : public ::System::Object
{
public:
	::CDOJMLDEJOD HBDPAIKANDB; // 0x10
	::System::String* MDBFKGFDAAO; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::CDOJMLDEJOD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CDOJMLDEJOD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OKFHDCJDNNG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFHDCJDNNG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* LCAHMDAHBAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFHDCJDNNG_LCAHMDAHBAK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFHDCJDNNG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OKFHDCJDNNG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
