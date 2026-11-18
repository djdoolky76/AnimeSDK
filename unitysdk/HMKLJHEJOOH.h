#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEFNIAOLDJL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HMKLJHEJOOH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A4F32C0)
#define HMKLJHEJOOH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A4F32B0)
#define HMKLJHEJOOH_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x1A4F34F0)
#define HMKLJHEJOOH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A4F3600)
#define HMKLJHEJOOH_MPIDGDJCDMO_OFFSET UNITYSDK_OFFSET(0x1A4F33B0)
#define HMKLJHEJOOH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F32A0)

inline static constexpr unsigned int HMKLJHEJOOH_TypeDefinitionIndex = 10334;

class HMKLJHEJOOH : public ::System::Object
{
public:
	::System::String* EOALHEEBMKM; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::EEFNIAOLDJL HBDPAIKANDB; // 0x20
	::System::Int32 GGGNICKHLJF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36

	::System::Void _ctor(::EEFNIAOLDJL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EEFNIAOLDJL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HMKLJHEJOOH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HMKLJHEJOOH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKLJHEJOOH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 MPIDGDJCDMO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKLJHEJOOH_MPIDGDJCDMO_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKLJHEJOOH_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKLJHEJOOH_LJANCIBECFG_OFFSET))(this);
	}
};
