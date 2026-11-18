#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFMDHJEHFNP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HOPELDLEOFO_BNGGKPEGAOB_OFFSET UNITYSDK_OFFSET(0x1B4E6F40)
#define HOPELDLEOFO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B4E7050)
#define HOPELDLEOFO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B4E6F30)
#define HOPELDLEOFO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B4E6F20)
#define HOPELDLEOFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E6F10)

inline static constexpr unsigned int HOPELDLEOFO_TypeDefinitionIndex = 9694;

class HOPELDLEOFO : public ::System::Object
{
public:
	::System::String* BPIBPIBIOMK; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::IFMDHJEHFNP HBDPAIKANDB; // 0x20
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::IFMDHJEHFNP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IFMDHJEHFNP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HOPELDLEOFO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPELDLEOFO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOPELDLEOFO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* BNGGKPEGAOB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPELDLEOFO_BNGGKPEGAOB_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPELDLEOFO_COFGIJJOFLP_OFFSET))(this);
	}
};
