#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOELDAFLODP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KIKHBKHCFBN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1955C6F0)
#define KIKHBKHCFBN_DLOPLJFNAHO_OFFSET UNITYSDK_OFFSET(0x1955C5B0)
#define KIKHBKHCFBN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1955C7F0)
#define KIKHBKHCFBN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1955C7E0)
#define KIKHBKHCFBN__CTOR_OFFSET UNITYSDK_OFFSET(0x1955C5A0)

inline static constexpr unsigned int KIKHBKHCFBN_TypeDefinitionIndex = 11515;

class KIKHBKHCFBN : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::FOELDAFLODP HBDPAIKANDB; // 0x18
	::System::Int32 FLJKHHBKDKB; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E

	::System::Void _ctor(::FOELDAFLODP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FOELDAFLODP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KIKHBKHCFBN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DLOPLJFNAHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKHBKHCFBN_DLOPLJFNAHO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKHBKHCFBN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKHBKHCFBN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KIKHBKHCFBN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
