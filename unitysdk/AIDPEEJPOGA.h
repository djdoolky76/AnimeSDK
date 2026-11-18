#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LODGBKPFOIF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define AIDPEEJPOGA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1876D0B0)
#define AIDPEEJPOGA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1876D2C0)
#define AIDPEEJPOGA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1876D1A0)
#define AIDPEEJPOGA_MNBGAIEPADE_OFFSET UNITYSDK_OFFSET(0x1876D1B0)
#define AIDPEEJPOGA_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1876D2D0)
#define AIDPEEJPOGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1876D0A0)

inline static constexpr unsigned int AIDPEEJPOGA_TypeDefinitionIndex = 11423;

class AIDPEEJPOGA : public ::System::Object
{
public:
	::System::String* NFFPNFDEDBN; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::LODGBKPFOIF HBDPAIKANDB; // 0x20
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34

	::System::Void _ctor(::LODGBKPFOIF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LODGBKPFOIF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AIDPEEJPOGA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDPEEJPOGA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDPEEJPOGA_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* MNBGAIEPADE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDPEEJPOGA_MNBGAIEPADE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIDPEEJPOGA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDPEEJPOGA_PPIFNHNGCGO_OFFSET))(this);
	}
};
