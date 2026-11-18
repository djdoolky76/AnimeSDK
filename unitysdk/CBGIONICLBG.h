#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBIKMPILCKD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CBGIONICLBG_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x1A53AE50)
#define CBGIONICLBG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A53AB10)
#define CBGIONICLBG_FIGIKLOHNBM_OFFSET UNITYSDK_OFFSET(0x1A53AC00)
#define CBGIONICLBG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A53AF90)
#define CBGIONICLBG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A53AB00)
#define CBGIONICLBG_PKAHPLMOLKG_OFFSET UNITYSDK_OFFSET(0x1A53AFA0)
#define CBGIONICLBG_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A53AD10)
#define CBGIONICLBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A53AAF0)

inline static constexpr unsigned int CBGIONICLBG_TypeDefinitionIndex = 16069;

class CBGIONICLBG : public ::System::Object
{
public:
	::GBIKMPILCKD HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* FDKJMAJKNGB; // 0x28
	::System::Int32 NLCDENLKOPM; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x34
	::System::Boolean MAOJKKJDHCL; // 0x38
	::System::Byte GCHCDJCFCEG; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte ACIOBDEBDNK; // 0x3B
	::System::Byte CNIAANMNOCF; // 0x3C

	::System::Void _ctor(::GBIKMPILCKD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GBIKMPILCKD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CBGIONICLBG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGIONICLBG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGIONICLBG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* FIGIKLOHNBM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGIONICLBG_FIGIKLOHNBM_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGIONICLBG_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGIONICLBG_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CBGIONICLBG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean PKAHPLMOLKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBGIONICLBG_PKAHPLMOLKG_OFFSET))(this);
	}
};
