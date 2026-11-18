#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FENLLEGAJGB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HGALEGDOKAN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x152D9E90)
#define HGALEGDOKAN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x152D9D60)
#define HGALEGDOKAN_HGODFCFGNDA_OFFSET UNITYSDK_OFFSET(0x152D9D80)
#define HGALEGDOKAN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x152D9D70)
#define HGALEGDOKAN_NJIAGCOLGBA_OFFSET UNITYSDK_OFFSET(0x152D9F80)
#define HGALEGDOKAN_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x152D9C20)
#define HGALEGDOKAN__CTOR_OFFSET UNITYSDK_OFFSET(0x152D9C10)

inline static constexpr unsigned int HGALEGDOKAN_TypeDefinitionIndex = 17611;

class HGALEGDOKAN : public ::System::Object
{
public:
	::FENLLEGAJGB HBDPAIKANDB; // 0x10
	::System::String* FOILDBFAHFP; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PBPGLAIABHC; // 0x34
	::System::Int32 PCMOJLNOPPM; // 0x38

	::System::Void _ctor(::FENLLEGAJGB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FENLLEGAJGB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HGALEGDOKAN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGALEGDOKAN_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HGALEGDOKAN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGALEGDOKAN_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* HGODFCFGNDA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGALEGDOKAN_HGODFCFGNDA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGALEGDOKAN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 NJIAGCOLGBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGALEGDOKAN_NJIAGCOLGBA_OFFSET))(this);
	}
};
