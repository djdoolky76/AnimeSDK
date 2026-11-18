#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJAFOILMKGO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define OCJPDFHKNEM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195C0B90)
#define OCJPDFHKNEM_DPPAPDAAAMM_OFFSET UNITYSDK_OFFSET(0x195C0C90)
#define OCJPDFHKNEM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x195C0C80)
#define OCJPDFHKNEM_HIEIEKGLMMJ_OFFSET UNITYSDK_OFFSET(0x195C0DD0)
#define OCJPDFHKNEM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x195C0B80)
#define OCJPDFHKNEM__CTOR_OFFSET UNITYSDK_OFFSET(0x195C0B70)

inline static constexpr unsigned int OCJPDFHKNEM_TypeDefinitionIndex = 11036;

class OCJPDFHKNEM : public ::System::Object
{
public:
	::LJAFOILMKGO HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 OIJHNPLHMJE; // 0x28
	::System::Int32 MDCEIOOBJDG; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::LJAFOILMKGO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LJAFOILMKGO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OCJPDFHKNEM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPDFHKNEM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPDFHKNEM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OCJPDFHKNEM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DPPAPDAAAMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPDFHKNEM_DPPAPDAAAMM_OFFSET))(this);
	}

	::System::Int32 HIEIEKGLMMJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPDFHKNEM_HIEIEKGLMMJ_OFFSET))(this);
	}
};
