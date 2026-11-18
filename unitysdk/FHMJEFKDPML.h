#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KOLCHENCFJH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define FHMJEFKDPML_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18B9A2F0)
#define FHMJEFKDPML_FLMBHFDFDGA_OFFSET UNITYSDK_OFFSET(0x18B9A1C0)
#define FHMJEFKDPML_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18B9A2D0)
#define FHMJEFKDPML_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18B9A2E0)
#define FHMJEFKDPML__CTOR_OFFSET UNITYSDK_OFFSET(0x18B9A1B0)

inline static constexpr unsigned int FHMJEFKDPML_TypeDefinitionIndex = 14834;

class FHMJEFKDPML : public ::System::Object
{
public:
	::KOLCHENCFJH HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* BPBDGHOMFED; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::KOLCHENCFJH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KOLCHENCFJH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FHMJEFKDPML__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* FLMBHFDFDGA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMJEFKDPML_FLMBHFDFDGA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FHMJEFKDPML_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMJEFKDPML_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMJEFKDPML_COFGIJJOFLP_OFFSET))(this);
	}
};
