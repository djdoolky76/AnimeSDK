#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHNFFAPKBND.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CIAAOBNEEDH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1776CF60)
#define CIAAOBNEEDH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1776D2A0)
#define CIAAOBNEEDH_HAECLLIGKED_OFFSET UNITYSDK_OFFSET(0x1776D050)
#define CIAAOBNEEDH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1776D2B0)
#define CIAAOBNEEDH_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1776D160)
#define CIAAOBNEEDH__CTOR_OFFSET UNITYSDK_OFFSET(0x1776CF50)

inline static constexpr unsigned int CIAAOBNEEDH_TypeDefinitionIndex = 14433;

class CIAAOBNEEDH : public ::System::Object
{
public:
	::System::String* AIPJLBHCCLP; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::LHNFFAPKBND HBDPAIKANDB; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36

	::System::Void _ctor(::LHNFFAPKBND LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LHNFFAPKBND, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CIAAOBNEEDH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAAOBNEEDH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* HAECLLIGKED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAAOBNEEDH_HAECLLIGKED_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAAOBNEEDH_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CIAAOBNEEDH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAAOBNEEDH_LJANCIBECFG_OFFSET))(this);
	}
};
