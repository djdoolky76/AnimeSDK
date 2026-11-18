#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOJANFDFPBH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LEGDCHNNADJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BF54AA0)
#define LEGDCHNNADJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BF54A90)
#define LEGDCHNNADJ_IGLFKIBEGGH_OFFSET UNITYSDK_OFFSET(0x1BF54BA0)
#define LEGDCHNNADJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BF54B90)
#define LEGDCHNNADJ_NDOFJFMJJAB_OFFSET UNITYSDK_OFFSET(0x1BF54980)
#define LEGDCHNNADJ_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1BF54840)
#define LEGDCHNNADJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF54830)

inline static constexpr unsigned int LEGDCHNNADJ_TypeDefinitionIndex = 17517;

class LEGDCHNNADJ : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* FMANOJDOPFH; // 0x18
	::System::String* PMLIMFIBIFO; // 0x20
	::BOJANFDFPBH HBDPAIKANDB; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3D
	::System::Byte CNIAANMNOCF; // 0x3E

	::System::Void _ctor(::BOJANFDFPBH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BOJANFDFPBH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LEGDCHNNADJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGDCHNNADJ_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* NDOFJFMJJAB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGDCHNNADJ_NDOFJFMJJAB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGDCHNNADJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGDCHNNADJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGDCHNNADJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* IGLFKIBEGGH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGDCHNNADJ_IGLFKIBEGGH_OFFSET))(this);
	}
};
