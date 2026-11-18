#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCNDDEACPPF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BOFBMIMFJNM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1ADB69E0)
#define BOFBMIMFJNM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1ADB68C0)
#define BOFBMIMFJNM_IGLFKIBEGGH_OFFSET UNITYSDK_OFFSET(0x1ADB68D0)
#define BOFBMIMFJNM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1ADB68B0)
#define BOFBMIMFJNM_NDOFJFMJJAB_OFFSET UNITYSDK_OFFSET(0x1ADB67A0)
#define BOFBMIMFJNM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1ADB6660)
#define BOFBMIMFJNM__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB6650)

inline static constexpr unsigned int BOFBMIMFJNM_TypeDefinitionIndex = 12347;

class BOFBMIMFJNM : public ::System::Object
{
public:
	::System::String* FMANOJDOPFH; // 0x10
	::CCNDDEACPPF HBDPAIKANDB; // 0x18
	::System::String* PMLIMFIBIFO; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x3C

	::System::Void _ctor(::CCNDDEACPPF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CCNDDEACPPF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BOFBMIMFJNM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFBMIMFJNM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* NDOFJFMJJAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFBMIMFJNM_NDOFJFMJJAB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFBMIMFJNM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BOFBMIMFJNM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* IGLFKIBEGGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFBMIMFJNM_IGLFKIBEGGH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFBMIMFJNM_COFGIJJOFLP_OFFSET))(this);
	}
};
