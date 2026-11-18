#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAMKKALFGBK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define PMBJJMMLINO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1F291350)
#define PMBJJMMLINO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1F291580)
#define PMBJJMMLINO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1F291590)
#define PMBJJMMLINO_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1F291440)
#define PMBJJMMLINO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F291340)

inline static constexpr unsigned int PMBJJMMLINO_TypeDefinitionIndex = 9327;

class PMBJJMMLINO : public ::System::Object
{
public:
	::HAMKKALFGBK HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x2C

	::System::Void _ctor(::HAMKKALFGBK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HAMKKALFGBK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PMBJJMMLINO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBJJMMLINO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBJJMMLINO_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMBJJMMLINO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBJJMMLINO_LJANCIBECFG_OFFSET))(this);
	}
};
