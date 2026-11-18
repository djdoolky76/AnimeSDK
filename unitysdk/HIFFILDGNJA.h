#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKLBLDMAEBO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HIFFILDGNJA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B7C4E90)
#define HIFFILDGNJA_FFLBJPHEKEC_OFFSET UNITYSDK_OFFSET(0x1B7C4C20)
#define HIFFILDGNJA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B7C4E70)
#define HIFFILDGNJA_GNPHBDNMEEO_OFFSET UNITYSDK_OFFSET(0x1B7C4F80)
#define HIFFILDGNJA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B7C4E80)
#define HIFFILDGNJA_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B7C4D30)
#define HIFFILDGNJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7C4C10)

inline static constexpr unsigned int HIFFILDGNJA_TypeDefinitionIndex = 17292;

class HIFFILDGNJA : public ::System::Object
{
public:
	::System::String* AOILDPPAIHE; // 0x10
	::PKLBLDMAEBO HBDPAIKANDB; // 0x18
	::System::String* BBMAIKMHDEF; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E

	::System::Void _ctor(::PKLBLDMAEBO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PKLBLDMAEBO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HIFFILDGNJA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* FFLBJPHEKEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFILDGNJA_FFLBJPHEKEC_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFILDGNJA_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HIFFILDGNJA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFILDGNJA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFILDGNJA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* GNPHBDNMEEO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFILDGNJA_GNPHBDNMEEO_OFFSET))(this);
	}
};
