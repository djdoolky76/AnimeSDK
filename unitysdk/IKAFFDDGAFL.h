#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDCBFKAPBEL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define IKAFFDDGAFL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A4F9D70)
#define IKAFFDDGAFL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A4F9D50)
#define IKAFFDDGAFL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A4F9D60)
#define IKAFFDDGAFL_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A4F9E60)
#define IKAFFDDGAFL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F9D40)

inline static constexpr unsigned int IKAFFDDGAFL_TypeDefinitionIndex = 12074;

class IKAFFDDGAFL : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::CDCBFKAPBEL HBDPAIKANDB; // 0x18
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E

	::System::Void _ctor(::CDCBFKAPBEL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CDCBFKAPBEL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IKAFFDDGAFL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKAFFDDGAFL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAFFDDGAFL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAFFDDGAFL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAFFDDGAFL_PPIFNHNGCGO_OFFSET))(this);
	}
};
