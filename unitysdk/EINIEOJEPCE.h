#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPOCFHBPIOJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EINIEOJEPCE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x157B2850)
#define EINIEOJEPCE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x157B2730)
#define EINIEOJEPCE_HGODFCFGNDA_OFFSET UNITYSDK_OFFSET(0x157B2740)
#define EINIEOJEPCE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x157B2720)
#define EINIEOJEPCE__CTOR_OFFSET UNITYSDK_OFFSET(0x157B2710)

inline static constexpr unsigned int EINIEOJEPCE_TypeDefinitionIndex = 10118;

class EINIEOJEPCE : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* FOILDBFAHFP; // 0x18
	::LPOCFHBPIOJ HBDPAIKANDB; // 0x20
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::LPOCFHBPIOJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LPOCFHBPIOJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EINIEOJEPCE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EINIEOJEPCE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EINIEOJEPCE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* HGODFCFGNDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EINIEOJEPCE_HGODFCFGNDA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EINIEOJEPCE_COFGIJJOFLP_OFFSET))(this);
	}
};
