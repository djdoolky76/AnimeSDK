#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBMJEHMOAOO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HPBOJPLOHFD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15A91300)
#define HPBOJPLOHFD_DCGJGALIIHB_OFFSET UNITYSDK_OFFSET(0x15A910B0)
#define HPBOJPLOHFD_EGGCACEKBEE_OFFSET UNITYSDK_OFFSET(0x15A91400)
#define HPBOJPLOHFD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15A913F0)
#define HPBOJPLOHFD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15A910A0)
#define HPBOJPLOHFD_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x15A911C0)
#define HPBOJPLOHFD__CTOR_OFFSET UNITYSDK_OFFSET(0x15A91090)

inline static constexpr unsigned int HPBOJPLOHFD_TypeDefinitionIndex = 10143;

class HPBOJPLOHFD : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::NBMJEHMOAOO HBDPAIKANDB; // 0x18
	::System::String* FGECIGPJPCF; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34
	::System::Int32 OGOMAHCKHJK; // 0x38

	::System::Void _ctor(::NBMJEHMOAOO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NBMJEHMOAOO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HPBOJPLOHFD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPBOJPLOHFD_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* DCGJGALIIHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPBOJPLOHFD_DCGJGALIIHB_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPBOJPLOHFD_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPBOJPLOHFD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HPBOJPLOHFD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 EGGCACEKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPBOJPLOHFD_EGGCACEKBEE_OFFSET))(this);
	}
};
