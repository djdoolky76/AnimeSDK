#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFAPDAIFFIH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BPEEHFNFOAJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x194FD7F0)
#define BPEEHFNFOAJ_COPBPCCNEAE_OFFSET UNITYSDK_OFFSET(0x194FD2D0)
#define BPEEHFNFOAJ_EHGGNPMIJAL_OFFSET UNITYSDK_OFFSET(0x194FD8F0)
#define BPEEHFNFOAJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x194FD8E0)
#define BPEEHFNFOAJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x194FD660)
#define BPEEHFNFOAJ_PIEBMBMBKBA_OFFSET UNITYSDK_OFFSET(0x194FD670)
#define BPEEHFNFOAJ_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x194FD4E0)
#define BPEEHFNFOAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x194FD2C0)

inline static constexpr unsigned int BPEEHFNFOAJ_TypeDefinitionIndex = 11661;

class BPEEHFNFOAJ : public ::System::Object
{
public:
	::DFAPDAIFFIH HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* MEPIDLDJELB; // 0x28
	::System::Int32 NCLEEKFKOKM; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Int32 GDALIMFHOGJ; // 0x3C

	::System::Void _ctor(::DFAPDAIFFIH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DFAPDAIFFIH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BPEEHFNFOAJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* COPBPCCNEAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEEHFNFOAJ_COPBPCCNEAE_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEEHFNFOAJ_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEEHFNFOAJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PIEBMBMBKBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEEHFNFOAJ_PIEBMBMBKBA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEEHFNFOAJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPEEHFNFOAJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 EHGGNPMIJAL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEEHFNFOAJ_EHGGNPMIJAL_OFFSET))(this);
	}
};
