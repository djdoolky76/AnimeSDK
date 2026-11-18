#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDGEFJOELCC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HFLHKKCOBFA_AJFFCMNAIEN_OFFSET UNITYSDK_OFFSET(0x1A4EDA50)
#define HFLHKKCOBFA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A4ED800)
#define HFLHKKCOBFA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A4EDA40)
#define HFLHKKCOBFA_IGLFKIBEGGH_OFFSET UNITYSDK_OFFSET(0x1A4EDB60)
#define HFLHKKCOBFA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A4EDA30)
#define HFLHKKCOBFA_OHBJCLKJEEK_OFFSET UNITYSDK_OFFSET(0x1A4ED8F0)
#define HFLHKKCOBFA_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A4ED6C0)
#define HFLHKKCOBFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4ED6B0)

inline static constexpr unsigned int HFLHKKCOBFA_TypeDefinitionIndex = 15779;

class HFLHKKCOBFA : public ::System::Object
{
public:
	::System::String* BADBBCLNFDO; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* PMLIMFIBIFO; // 0x20
	::MDGEFJOELCC HBDPAIKANDB; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3D
	::System::Byte CNIAANMNOCF; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 NABADLCIOOI; // 0x40

	::System::Void _ctor(::MDGEFJOELCC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MDGEFJOELCC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HFLHKKCOBFA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLHKKCOBFA_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLHKKCOBFA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 OHBJCLKJEEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLHKKCOBFA_OHBJCLKJEEK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLHKKCOBFA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFLHKKCOBFA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* AJFFCMNAIEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLHKKCOBFA_AJFFCMNAIEN_OFFSET))(this);
	}

	::System::String* IGLFKIBEGGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLHKKCOBFA_IGLFKIBEGGH_OFFSET))(this);
	}
};
