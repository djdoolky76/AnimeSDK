#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MINHKOEANBP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BFOEKHJCLDA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A531DD0)
#define BFOEKHJCLDA_DGBMKKEMJNC_OFFSET UNITYSDK_OFFSET(0x1A531EC0)
#define BFOEKHJCLDA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A531B90)
#define BFOEKHJCLDA_IGLFKIBEGGH_OFFSET UNITYSDK_OFFSET(0x1A531CB0)
#define BFOEKHJCLDA_IMPLDHCOHEB_OFFSET UNITYSDK_OFFSET(0x1A531BA0)
#define BFOEKHJCLDA_JIEBDFEFHAI_OFFSET UNITYSDK_OFFSET(0x1A532000)
#define BFOEKHJCLDA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A531DC0)
#define BFOEKHJCLDA_MCIDAPGNFNA_OFFSET UNITYSDK_OFFSET(0x1A532140)
#define BFOEKHJCLDA_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A532280)
#define BFOEKHJCLDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A531B80)

inline static constexpr unsigned int BFOEKHJCLDA_TypeDefinitionIndex = 12520;

class BFOEKHJCLDA : public ::System::Object
{
public:
	::System::String* PMLIMFIBIFO; // 0x10
	::System::String* PEHLFDKMBBH; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::MINHKOEANBP HBDPAIKANDB; // 0x28
	::System::Int32 GHDCGLFAHKC; // 0x38
	::System::Int32 GNFAFDJGAPL; // 0x3C
	::System::Int32 DAOAGJKJKPM; // 0x40
	::System::Byte CNIAANMNOCF; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x45
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x46
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x48

	::System::Void _ctor(::MINHKOEANBP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MINHKOEANBP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BFOEKHJCLDA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFOEKHJCLDA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* IMPLDHCOHEB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOEKHJCLDA_IMPLDHCOHEB_OFFSET))(this);
	}

	::System::String* IGLFKIBEGGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOEKHJCLDA_IGLFKIBEGGH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOEKHJCLDA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOEKHJCLDA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 DGBMKKEMJNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOEKHJCLDA_DGBMKKEMJNC_OFFSET))(this);
	}

	::System::Int32 JIEBDFEFHAI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOEKHJCLDA_JIEBDFEFHAI_OFFSET))(this);
	}

	::System::Int32 MCIDAPGNFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOEKHJCLDA_MCIDAPGNFNA_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOEKHJCLDA_PPIFNHNGCGO_OFFSET))(this);
	}
};
