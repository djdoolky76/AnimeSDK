#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKBOBLLCNO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KKAIAAHJDEA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B7E5C00)
#define KKAIAAHJDEA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B7E5AA0)
#define KKAIAAHJDEA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B7E5BF0)
#define KKAIAAHJDEA_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B7E5AB0)
#define KKAIAAHJDEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E5A90)

inline static constexpr unsigned int KKAIAAHJDEA_TypeDefinitionIndex = 16806;

class KKAIAAHJDEA : public ::System::Object
{
public:
	::BBKBOBLLCNO HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E

	::System::Void _ctor(::BBKBOBLLCNO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BBKBOBLLCNO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KKAIAAHJDEA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KKAIAAHJDEA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAIAAHJDEA_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAIAAHJDEA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAIAAHJDEA_COFGIJJOFLP_OFFSET))(this);
	}
};
