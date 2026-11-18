#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEOGDJAKOKD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MGLGPAHKBND_ACEONKLAFDI_OFFSET UNITYSDK_OFFSET(0x18E0AB90)
#define MGLGPAHKBND_BLDBNKJKGPH_OFFSET UNITYSDK_OFFSET(0x18E0AA80)
#define MGLGPAHKBND_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18E0A760)
#define MGLGPAHKBND_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18E0ADB0)
#define MGLGPAHKBND_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18E0A960)
#define MGLGPAHKBND_NKPAIJFGECO_OFFSET UNITYSDK_OFFSET(0x18E0A850)
#define MGLGPAHKBND_OBPPADKHAEJ_OFFSET UNITYSDK_OFFSET(0x18E0A970)
#define MGLGPAHKBND_ODHGMOLOPCA_OFFSET UNITYSDK_OFFSET(0x18E0ACA0)
#define MGLGPAHKBND__CTOR_OFFSET UNITYSDK_OFFSET(0x18E0A750)

inline static constexpr unsigned int MGLGPAHKBND_TypeDefinitionIndex = 13843;

class MGLGPAHKBND : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* ACMNNMOEGEA; // 0x18
	::System::String* EKKLAHBLCEB; // 0x20
	::NEOGDJAKOKD HBDPAIKANDB; // 0x28
	::System::String* NDFAMOAKKCK; // 0x38
	::System::String* ALGMJKKKILC; // 0x40
	::System::String* HFKKPJKBMDI; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x50
	::System::Byte CNIAANMNOCF; // 0x51
	::System::Byte ACIOBDEBDNK; // 0x52

	::System::Void _ctor(::NEOGDJAKOKD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NEOGDJAKOKD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MGLGPAHKBND__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGLGPAHKBND_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* NKPAIJFGECO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGLGPAHKBND_NKPAIJFGECO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGLGPAHKBND_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* OBPPADKHAEJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGLGPAHKBND_OBPPADKHAEJ_OFFSET))(this);
	}

	::System::String* BLDBNKJKGPH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGLGPAHKBND_BLDBNKJKGPH_OFFSET))(this);
	}

	::System::String* ACEONKLAFDI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGLGPAHKBND_ACEONKLAFDI_OFFSET))(this);
	}

	::System::String* ODHGMOLOPCA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGLGPAHKBND_ODHGMOLOPCA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGLGPAHKBND_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
