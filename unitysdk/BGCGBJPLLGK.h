#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGCLOKHMDIC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define BGCGBJPLLGK_AODOGEGCKKI_OFFSET UNITYSDK_OFFSET(0x17EF3A40)
#define BGCGBJPLLGK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17EF3E30)
#define BGCGBJPLLGK_EJDOBHDPKHL_OFFSET UNITYSDK_OFFSET(0x17EF3F20)
#define BGCGBJPLLGK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17EF3CC0)
#define BGCGBJPLLGK_JNNCOPHAECJ_OFFSET UNITYSDK_OFFSET(0x17EF3900)
#define BGCGBJPLLGK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17EF37B0)
#define BGCGBJPLLGK_MKJLCCLONJB_OFFSET UNITYSDK_OFFSET(0x17EF37C0)
#define BGCGBJPLLGK_OHFFFJODEMO_OFFSET UNITYSDK_OFFSET(0x17EF3B80)
#define BGCGBJPLLGK_PFJKHMEPCLK_OFFSET UNITYSDK_OFFSET(0x17EF3CD0)
#define BGCGBJPLLGK__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF37A0)

inline static constexpr unsigned int BGCGBJPLLGK_TypeDefinitionIndex = 12147;

class BGCGBJPLLGK : public ::System::Object
{
public:
	::IGCLOKHMDIC HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Single JGDHJALJHDE; // 0x28
	::System::Int32 KLNOKEMABND; // 0x2C
	::System::Int32 MBLMBBGHCDG; // 0x30
	::System::Int32 JFNPJLNMABI; // 0x34
	::System::Int32 LFLBAEALFGK; // 0x38
	::System::Int32 OEANFCEIELH; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42

	::System::Void _ctor(::IGCLOKHMDIC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IGCLOKHMDIC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BGCGBJPLLGK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGCGBJPLLGK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 MKJLCCLONJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGCGBJPLLGK_MKJLCCLONJB_OFFSET))(this);
	}

	::System::Int32 JNNCOPHAECJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGCGBJPLLGK_JNNCOPHAECJ_OFFSET))(this);
	}

	::System::Int32 AODOGEGCKKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGCGBJPLLGK_AODOGEGCKKI_OFFSET))(this);
	}

	::System::Int32 OHFFFJODEMO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGCGBJPLLGK_OHFFFJODEMO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BGCGBJPLLGK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single PFJKHMEPCLK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BGCGBJPLLGK_PFJKHMEPCLK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGCGBJPLLGK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 EJDOBHDPKHL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGCGBJPLLGK_EJDOBHDPKHL_OFFSET))(this);
	}
};
