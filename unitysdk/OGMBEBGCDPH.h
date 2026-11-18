#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NLEMBBDGPHK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define OGMBEBGCDPH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BAB53D0)
#define OGMBEBGCDPH_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1BAB5610)
#define OGMBEBGCDPH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BAB5720)
#define OGMBEBGCDPH_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x1BAB5180)
#define OGMBEBGCDPH_HJEEPOLIIGC_OFFSET UNITYSDK_OFFSET(0x1BAB54D0)
#define OGMBEBGCDPH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BAB54C0)
#define OGMBEBGCDPH_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1BAB5290)
#define OGMBEBGCDPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB5170)

inline static constexpr unsigned int OGMBEBGCDPH_TypeDefinitionIndex = 16475;

class OGMBEBGCDPH : public ::System::Object
{
public:
	::NLEMBBDGPHK HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* GPNJCCHKLIP; // 0x28
	::System::String* IENCBDEPMFJ; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 ODOBCHAEKHI; // 0x3C
	::System::Int32 PCMOJLNOPPM; // 0x40

	::System::Void _ctor(::NLEMBBDGPHK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NLEMBBDGPHK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OGMBEBGCDPH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGMBEBGCDPH_GPBFENDAJMF_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGMBEBGCDPH_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGMBEBGCDPH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGMBEBGCDPH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 HJEEPOLIIGC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGMBEBGCDPH_HJEEPOLIIGC_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGMBEBGCDPH_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OGMBEBGCDPH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
