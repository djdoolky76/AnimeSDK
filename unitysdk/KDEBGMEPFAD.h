#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOCPFOAAKNG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KDEBGMEPFAD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B640230)
#define KDEBGMEPFAD_FDFLPGLILLP_OFFSET UNITYSDK_OFFSET(0x1B640320)
#define KDEBGMEPFAD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B640430)
#define KDEBGMEPFAD_LGNGIPHNOOF_OFFSET UNITYSDK_OFFSET(0x1B6400F0)
#define KDEBGMEPFAD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B6400E0)
#define KDEBGMEPFAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6400D0)

inline static constexpr unsigned int KDEBGMEPFAD_TypeDefinitionIndex = 9684;

class KDEBGMEPFAD : public ::System::Object
{
public:
	::System::String* MJKIADHIDBA; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::DOCPFOAAKNG HBDPAIKANDB; // 0x20
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 HKHPKGNEDJP; // 0x34

	::System::Void _ctor(::DOCPFOAAKNG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DOCPFOAAKNG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KDEBGMEPFAD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEBGMEPFAD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 LGNGIPHNOOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEBGMEPFAD_LGNGIPHNOOF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEBGMEPFAD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* FDFLPGLILLP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEBGMEPFAD_FDFLPGLILLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KDEBGMEPFAD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
