#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOJELINEEHB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KGAHPFPFLJN_CIKGGPBDAFN_OFFSET UNITYSDK_OFFSET(0x1B640DB0)
#define KGAHPFPFLJN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B640CC0)
#define KGAHPFPFLJN_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1B640EC0)
#define KGAHPFPFLJN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B640FD0)
#define KGAHPFPFLJN_HINJEHLELNG_OFFSET UNITYSDK_OFFSET(0x1B641130)
#define KGAHPFPFLJN_LHNJEKLPMID_OFFSET UNITYSDK_OFFSET(0x1B640FF0)
#define KGAHPFPFLJN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B640FE0)
#define KGAHPFPFLJN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B640CB0)

inline static constexpr unsigned int KGAHPFPFLJN_TypeDefinitionIndex = 10905;

class KGAHPFPFLJN : public ::System::Object
{
public:
	::System::String* FKMKCHAFOAD; // 0x10
	::System::String* IENCBDEPMFJ; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::MOJELINEEHB HBDPAIKANDB; // 0x28
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Boolean EKFCGAIPHPK; // 0x3B
	::System::Int32 IHHLCIIJDGO; // 0x3C

	::System::Void _ctor(::MOJELINEEHB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MOJELINEEHB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KGAHPFPFLJN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAHPFPFLJN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* CIKGGPBDAFN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAHPFPFLJN_CIKGGPBDAFN_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAHPFPFLJN_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KGAHPFPFLJN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAHPFPFLJN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 LHNJEKLPMID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAHPFPFLJN_LHNJEKLPMID_OFFSET))(this);
	}

	::System::Boolean HINJEHLELNG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAHPFPFLJN_HINJEHLELNG_OFFSET))(this);
	}
};
