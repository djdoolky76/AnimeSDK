#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PEBGABGMONN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CMNPMCKBJLK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19F2F5F0)
#define CMNPMCKBJLK_ELPFAFFJNKI_OFFSET UNITYSDK_OFFSET(0x19F2F260)
#define CMNPMCKBJLK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19F2F250)
#define CMNPMCKBJLK_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x19F2F6F0)
#define CMNPMCKBJLK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19F2F6E0)
#define CMNPMCKBJLK_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x19F2F370)
#define CMNPMCKBJLK_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19F2F4B0)
#define CMNPMCKBJLK__CTOR_OFFSET UNITYSDK_OFFSET(0x19F2F240)

inline static constexpr unsigned int CMNPMCKBJLK_TypeDefinitionIndex = 16027;

class CMNPMCKBJLK : public ::System::Object
{
public:
	::PEBGABGMONN HBDPAIKANDB; // 0x10
	::System::String* GPNJCCHKLIP; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* KEDCEJJMKCA; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Byte CNIAANMNOCF; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 JABJBJHKDMH; // 0x40

	::System::Void _ctor(::PEBGABGMONN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PEBGABGMONN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CMNPMCKBJLK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CMNPMCKBJLK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* ELPFAFFJNKI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNPMCKBJLK_ELPFAFFJNKI_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNPMCKBJLK_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNPMCKBJLK_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNPMCKBJLK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNPMCKBJLK_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNPMCKBJLK_GPBFENDAJMF_OFFSET))(this);
	}
};
