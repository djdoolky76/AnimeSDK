#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHAEBOGLLME.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IEPIOIMOEBB_ANHFFDONAAE_OFFSET UNITYSDK_OFFSET(0x1B4EC250)
#define IEPIOIMOEBB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B4EC360)
#define IEPIOIMOEBB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B4EC240)
#define IEPIOIMOEBB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B4EC230)
#define IEPIOIMOEBB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B4EC0F0)
#define IEPIOIMOEBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4EC0E0)

inline static constexpr unsigned int IEPIOIMOEBB_TypeDefinitionIndex = 11043;

class IEPIOIMOEBB : public ::System::Object
{
public:
	::System::String* CNKJPPDBADI; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::BHAEBOGLLME HBDPAIKANDB; // 0x20
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34

	::System::Void _ctor(::BHAEBOGLLME LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BHAEBOGLLME, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IEPIOIMOEBB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPIOIMOEBB_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPIOIMOEBB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IEPIOIMOEBB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* ANHFFDONAAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPIOIMOEBB_ANHFFDONAAE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPIOIMOEBB_COFGIJJOFLP_OFFSET))(this);
	}
};
