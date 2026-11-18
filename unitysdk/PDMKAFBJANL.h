#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAJHFOPPOKM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PDMKAFBJANL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17376C90)
#define PDMKAFBJANL_DCGJGALIIHB_OFFSET UNITYSDK_OFFSET(0x17376B70)
#define PDMKAFBJANL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17376C80)
#define PDMKAFBJANL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17376EC0)
#define PDMKAFBJANL_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17376D80)
#define PDMKAFBJANL__CTOR_OFFSET UNITYSDK_OFFSET(0x17376B60)

inline static constexpr unsigned int PDMKAFBJANL_TypeDefinitionIndex = 16058;

class PDMKAFBJANL : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* FGECIGPJPCF; // 0x18
	::BAJHFOPPOKM HBDPAIKANDB; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36

	::System::Void _ctor(::BAJHFOPPOKM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BAJHFOPPOKM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PDMKAFBJANL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* DCGJGALIIHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMKAFBJANL_DCGJGALIIHB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PDMKAFBJANL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMKAFBJANL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMKAFBJANL_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMKAFBJANL_LJANCIBECFG_OFFSET))(this);
	}
};
